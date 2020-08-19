/**
 * Se escribe en una frase los casos de prueba para verificar los requisitos.
 * 
 * Casos de prueba:
 * DONE: "El sistema se debe inicializar en modo: MANUAL; state: CLOSE"
 * DONE: "Si el sistema está en modo CONSOLE, las teclas deben estar deshabilitadas"
 * DONE: "Al presionar button 1, el sistema se debe abrir (OPEN) solo si está en modo MANUAL"
 * DONE: "Al presionar button 2, el sistema se debe cerrar (CLOSE) solo si está en modo MANUAL"
 * DONE: "Al presionar button 3, el sistema debe pasar a modo MANUAL"
 * DONE: "Al presionar button 4, el sistema debe pasar a modo CONSOLE"

 */

#include "unity.h"
#include "fsm_access_system.h"
#include "mock_debounce.h"
#include "mock_leds.h"
#include "mock_system_uart.h"

// Struct sistema
extern system_t systemAccess;

// Buttons
extern debounce_button_t button1; //Botón open en modo manual
extern debounce_button_t button2; //Botón close en modo manual
extern debounce_button_t button3; //Botón para modo manual
extern debounce_button_t button4; //Botón para modo consola


//! Funcion setUp. Se ejecuta antes de cada test
void setUp(void){
    systemAccess.mode = INITIAL_DEFAULT_MODE;
    systemAccess.state = INITIAL_DEFAULT_STATE;
    button1.keyPressed = FALSE;
    button2.keyPressed = FALSE;
    button3.keyPressed = FALSE;
    button4.keyPressed = FALSE;    
}

//! @test "Inicio del sistema: mode: MANUAL; state: CLOSE"
void test_inicio_del_sistema(void){
    //Se ignora la inicializacion de buttons y uart
    fsm_debounceInit_Ignore();
    system_uartInit_Ignore();

    //Funcion de inicio del sistema
    fsm_systemInit(&systemAccess);
    
    // Test para verificar si el sistema se inicia en modo manual y estado cerrado
    TEST_ASSERT_EQUAL(MANUAL, systemAccess.mode);
    TEST_ASSERT_EQUAL(CLOSE, systemAccess.state);
}

//! @test "Si el sistema está en modo CONSOLE, las teclas deben estar deshabilitadas"
void test_console_state(void){

    //Se ignora la inicializacion de buttons y uart
    fsm_debounceUpdate_Ignore();
    system_uart_WriteString_Ignore();
    system_uart_ReadByte_IgnoreAndReturn(0);
    turnOff_Ignore();
    turnOn_Ignore();

    //Se define modo de sistema en modo CONSOLE
    systemAccess.mode = CONSOLE;

    //Se presiona button 1
    button1.keyPressed = TRUE;

    //Se llama a funcion systemUpdate para refrecar estado de sistema
    fsm_systemUpdate(&systemAccess);

    // Sistema en modo CONSOLE y queda cerrado al presionar button 1
    TEST_ASSERT_EQUAL(CONSOLE, systemAccess.mode);
    TEST_ASSERT_EQUAL(CLOSE, systemAccess.state);
}

//! @test "Al presionar button 1, el sistema se debe abrir (OPEN) solo si está en modo MANUAL"
void test_button_1(void){
    //Se ignora la inicializacion de buttons y uart
    fsm_debounceUpdate_Ignore();
    system_uart_WriteString_Ignore();
    system_uart_ReadByte_IgnoreAndReturn(0);
    turnOff_Ignore();
    turnOn_Ignore();

    //Se presiona button 1 para que el sistema se abra en modo MANUAL
    button1.keyPressed = TRUE;
    
    //Se llama a funcion systemUpdate para refrecar estado de sistema
    fsm_systemUpdate(&systemAccess);
    
    //Test para verificar modo MANUAL y estado OPEN
    TEST_ASSERT_EQUAL(MANUAL, systemAccess.mode);
    TEST_ASSERT_EQUAL(OPEN, systemAccess.state);

    //Si está en modo CONSOLE no se debe abrir el siste al presionar button 1
    systemAccess.mode = CONSOLE;
    systemAccess.state = CLOSE;

    fsm_systemUpdate(&systemAccess);

    TEST_ASSERT_EQUAL(CONSOLE, systemAccess.mode);
    TEST_ASSERT_EQUAL(CLOSE, systemAccess.state);
}

//! @test "Al presionar button 2, el sistema se debe cerrar (CLOSE) solo si está en modo MANUAL"
void test_button_2(void){
    //Se ignora la inicializacion de buttons y uart
    fsm_debounceUpdate_Ignore();
    system_uart_WriteString_Ignore();
    system_uart_ReadByte_IgnoreAndReturn(0);
    turnOff_Ignore();
    turnOn_Ignore();

    //Button 2 sin presionar para que el sistema no se abra
    button2.keyPressed = TRUE;
    
    //Se llama a funcion systemUpdate para refrecar estado de sistema
    fsm_systemUpdate(&systemAccess);
    
    // Test para verificar si el sistema se inicia en modo manual y estado cerrado
    TEST_ASSERT_EQUAL(MANUAL, systemAccess.mode);
    TEST_ASSERT_EQUAL(CLOSE, systemAccess.state);

    //Si está en modo CONSOLE no se debe abrir el siste al presionar button 1
    systemAccess.mode = CONSOLE;

    fsm_systemUpdate(&systemAccess);
    TEST_ASSERT_EQUAL(CONSOLE, systemAccess.mode);
    TEST_ASSERT_EQUAL(CLOSE, systemAccess.state);
}

//! @test "Al presionar button 3, el sistema debe pasar a modo MANUAL"
void test_button_3(void){
    //Se ignora la inicializacion de buttons y uart
    fsm_debounceUpdate_Ignore();
    system_uart_WriteString_Ignore();
    system_uart_ReadByte_IgnoreAndReturn(0);
    turnOff_Ignore();
    turnOn_Ignore();

    //Button 2 sin presionar para que el sistema no se abra
    button3.keyPressed = TRUE;
    
    //Se llama a funcion systemUpdate para refrecar estado de sistema
    fsm_systemUpdate(&systemAccess);
    
    // Test para verificar si el sistema se inicia en modo manual y estado cerrado
    TEST_ASSERT_EQUAL(MANUAL, systemAccess.mode);
}

//! @test "Al presionar button 4, el sistema debe pasar a modo CONSOLE"
void test_button_4(void){
    //Se ignora la inicializacion de buttons y uart
    fsm_debounceUpdate_Ignore();
    system_uart_WriteString_Ignore();
    system_uart_ReadByte_IgnoreAndReturn(0);
    turnOff_Ignore();
    turnOn_Ignore();

    //Button 2 sin presionar para que el sistema no se abra
    button4.keyPressed = TRUE;
    
    //Se llama a funcion systemUpdate para refrecar estado de sistema
    fsm_systemUpdate(&systemAccess);
    
    // Test para verificar si el sistema se inicia en modo manual y estado cerrado
    TEST_ASSERT_EQUAL(CONSOLE, systemAccess.mode);
}