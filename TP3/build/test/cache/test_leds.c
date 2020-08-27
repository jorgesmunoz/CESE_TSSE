#include "build/temp/_test_leds.c"
#include "src/leds.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


uint16_t virtuales;

uint16_t estado_led;





void setUp(void){

    LedsCreate(&virtuales);

}





void test_todos_los_leds_inician_apagados(void){













    virtuales = 0xFFFF;



    LedsCreate(&virtuales);



    UnityAssertEqualNumber((UNITY_INT)((0x0000)), (UNITY_INT)((virtuales)), (

   ((void *)0)

   ), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_INT);

}





void test_encender_un_led(void){



    LedsTurnOn(1);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x0001)), (UNITY_INT)(UNITY_UINT16)((virtuales)), (

   ((void *)0)

   ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_UINT16);

}





void test_encender_y_apagar_un_led(void){



    LedsTurnOn(1);



    LedsTurnOff(1);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x0000)), (UNITY_INT)(UNITY_UINT16)((virtuales)), (

   ((void *)0)

   ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_UINT16);

}





void test_encender_y_apagar_varios_led(void){



    LedsTurnOn(3);

    LedsTurnOn(5);



    LedsTurnOff(3);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x0010)), (UNITY_INT)(UNITY_UINT16)((virtuales)), (

   ((void *)0)

   ), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_UINT16);

}





void test_encender_todos_los_leds(void){



    LedsTurnAllOn();



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0xFFFF)), (UNITY_INT)(UNITY_UINT16)((virtuales)), (

   ((void *)0)

   ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_UINT16);

}





void test_apagar_todos_los_leds(void){



    LedsTurnAllOff();



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x0000)), (UNITY_INT)(UNITY_UINT16)((virtuales)), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_UINT16);

}





void test_conulta_estado_led_encendido(void){



    LedsTurnOn(5);



    LedsTest(&estado_led, 5);



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x0010)), (UNITY_INT)(UNITY_UINT16)((estado_led)), (

   ((void *)0)

   ), (UNITY_UINT)(93), UNITY_DISPLAY_STYLE_UINT16);

}







void test_conulta_estado_led_apagado(void){



    LedsTurnOn(3);



    LedsTurnOff(3);



    LedsTest(&estado_led, 3);



    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x0000)), (UNITY_INT)(UNITY_UINT16)((estado_led)), (

   ((void *)0)

   ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_UINT16);

}
