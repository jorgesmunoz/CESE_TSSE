/**
 * Se escribe en una frase los casos de prueba para verificar los requisitos.
 * 
 * Casos de prueba:
 * DONE: "Todos los leds queden apagados al inicializar la libreria"
 * DONE: "Encender un led individual"
 * DONE: "Encender y apagar un led"
 * DONE: "Encender y apagar algunos leds"
 * "Asegurarse que un led no afecta a los demas"
 * DONE: "Encender todos los leds simultaneamente"
 * DONE: "Apagar todos los leds simultaneamente"
 * "Consultar el estado de un led encendido"
 * "Consultar el estado de un led apagado"
 * "Parametros son invalidos" ---> Ejemplo: led 17 que no existe
 * "Parametros en valores de borde" ---> Al trabajar con leds 1 ó 16
 */

#include "unity.h"
#include "leds.h"

uint16_t virtuales;
uint16_t estado_led;

//! Esta funcion se ejecuta antes de cada test
void setUp(void){
    LedsCreate(&virtuales);
}

//! @test "Todos los leds queden apagados al inicializar la libreria"
void test_todos_los_leds_inician_apagados(void){
    /* Funcion que apaga todos los leds
    *  Se le pasa el puntero de la direccion donde estan mapeadas las 
    *  palabras de 16 bits
    *  Para hacer las pruebas se pasa la direccion de la varible, es
    *  decir, para saber que de qué bit es.
    */
    virtuales = 0xFFFF;
    // Esta es la funcion que debo crear en mi codigo de produccion
    LedsCreate(&virtuales);
    // Test para verificar si la funcion apago los leds
    TEST_ASSERT_EQUAL(0x0000, virtuales);
}

//! @test "Encender un led"
void test_encender_un_led(void){
    // Funcion para encender led
    LedsTurnOn(1);
    TEST_ASSERT_EQUAL_UINT16(0x0001, virtuales);
}

//! @test "Encender y apagar un led"
void test_encender_y_apagar_un_led(void){
    // Funcion para encender led
    LedsTurnOn(1);
    // Funcion para apagar led
    LedsTurnOff(1);
    TEST_ASSERT_EQUAL_UINT16(0x0000, virtuales);
}

//! @test "Encender y apagar algunos leds"
void test_encender_y_apagar_varios_led(void){
    // Funcion para encender led
    LedsTurnOn(3);
    LedsTurnOn(5);
    // Funcion para apagar led
    LedsTurnOff(3);
    TEST_ASSERT_EQUAL_UINT16(0x0010, virtuales);    
}

//! @test "Encender todos los leds simultaneamente"
void test_encender_todos_los_leds(void){
    // Funcion para encender todos los led
    LedsTurnAllOn();
    // Funcion para apagar led
    TEST_ASSERT_EQUAL_UINT16(0xFFFF, virtuales);    
}

//! @test "Encender todos los leds simultaneamente"
void test_apagar_todos_los_leds(void){
    // Funcion para encender todos los led
    LedsTurnAllOff();
    // Funcion para apagar led
    TEST_ASSERT_EQUAL_UINT16(0x0000, virtuales);    
}

//! @test "Consultar el estado de un led encendido"
void test_conulta_estado_led_encendido(void){
    // Enciende led de prueba
    LedsTurnOn(5);
    // Funcion para verificar estado 
    LedsTest(&estado_led, 5);
    // Funcion para consultar estado led encendido
    TEST_ASSERT_EQUAL_UINT16(0x0010, estado_led);    
}


//! @test "Consultar el estado de un led apagado"
void test_conulta_estado_led_apagado(void){
    // Enciende led de prueba
    LedsTurnOn(3);
    // Apaga led de prueba
    LedsTurnOff(3);
    // Funcion para verificar estado 
    LedsTest(&estado_led, 3);
    // Funcion para consultar estado led encendido
    TEST_ASSERT_EQUAL_UINT16(0x0000, estado_led);    
}