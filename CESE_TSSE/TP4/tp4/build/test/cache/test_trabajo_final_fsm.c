#include "build/temp/_test_trabajo_final_fsm.c"
#include "build/test/mocks/mock_system_uart.h"
#include "build/test/mocks/mock_leds.h"
#include "build/test/mocks/mock_debounce.h"
#include "src/fsm_access_system.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




extern system_t systemAccess;





extern debounce_button_t button1;

extern debounce_button_t button2;

extern debounce_button_t button3;

extern debounce_button_t button4;







void setUp(void){

    systemAccess.mode = MANUAL;

    systemAccess.state = CLOSE;

    button1.keyPressed = 0;

    button2.keyPressed = 0;

    button3.keyPressed = 0;

    button4.keyPressed = 0;

}





void test_inicio_del_sistema(void){



    fsm_debounceInit_CMockIgnore();

    system_uartInit_CMockIgnore();





    fsm_systemInit(&systemAccess);





    UnityAssertEqualNumber((UNITY_INT)((MANUAL)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((CLOSE)), (UNITY_INT)((systemAccess.state)), (

   ((void *)0)

   ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

}





void test_console_state(void){





    fsm_debounceUpdate_CMockIgnore();

    system_uart_WriteString_CMockIgnore();

    system_uart_ReadByte_CMockIgnoreAndReturn(60, 0);

    turnOff_CMockIgnore();

    turnOn_CMockIgnore();





    systemAccess.mode = CONSOLE;





    button1.keyPressed = 1;





    fsm_systemUpdate(&systemAccess);





    UnityAssertEqualNumber((UNITY_INT)((CONSOLE)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((CLOSE)), (UNITY_INT)((systemAccess.state)), (

   ((void *)0)

   ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

}





void test_button_1(void){



    fsm_debounceUpdate_CMockIgnore();

    system_uart_WriteString_CMockIgnore();

    system_uart_ReadByte_CMockIgnoreAndReturn(83, 0);

    turnOff_CMockIgnore();

    turnOn_CMockIgnore();





    button1.keyPressed = 1;





    fsm_systemUpdate(&systemAccess);





    UnityAssertEqualNumber((UNITY_INT)((MANUAL)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(94), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((OPEN)), (UNITY_INT)((systemAccess.state)), (

   ((void *)0)

   ), (UNITY_UINT)(95), UNITY_DISPLAY_STYLE_INT);





    systemAccess.mode = CONSOLE;

    systemAccess.state = CLOSE;



    fsm_systemUpdate(&systemAccess);



    UnityAssertEqualNumber((UNITY_INT)((CONSOLE)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((CLOSE)), (UNITY_INT)((systemAccess.state)), (

   ((void *)0)

   ), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_INT);

}





void test_button_2(void){



    fsm_debounceUpdate_CMockIgnore();

    system_uart_WriteString_CMockIgnore();

    system_uart_ReadByte_CMockIgnoreAndReturn(112, 0);

    turnOff_CMockIgnore();

    turnOn_CMockIgnore();





    button2.keyPressed = 1;





    fsm_systemUpdate(&systemAccess);





    UnityAssertEqualNumber((UNITY_INT)((MANUAL)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((CLOSE)), (UNITY_INT)((systemAccess.state)), (

   ((void *)0)

   ), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_INT);





    systemAccess.mode = CONSOLE;



    fsm_systemUpdate(&systemAccess);

    UnityAssertEqualNumber((UNITY_INT)((CONSOLE)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((CLOSE)), (UNITY_INT)((systemAccess.state)), (

   ((void *)0)

   ), (UNITY_UINT)(131), UNITY_DISPLAY_STYLE_INT);

}





void test_button_3(void){



    fsm_debounceUpdate_CMockIgnore();

    system_uart_WriteString_CMockIgnore();

    system_uart_ReadByte_CMockIgnoreAndReturn(139, 0);

    turnOff_CMockIgnore();

    turnOn_CMockIgnore();





    button3.keyPressed = 1;





    fsm_systemUpdate(&systemAccess);





    UnityAssertEqualNumber((UNITY_INT)((MANUAL)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(150), UNITY_DISPLAY_STYLE_INT);

}





void test_button_4(void){



    fsm_debounceUpdate_CMockIgnore();

    system_uart_WriteString_CMockIgnore();

    system_uart_ReadByte_CMockIgnoreAndReturn(158, 0);

    turnOff_CMockIgnore();

    turnOn_CMockIgnore();





    button4.keyPressed = 1;





    fsm_systemUpdate(&systemAccess);





    UnityAssertEqualNumber((UNITY_INT)((CONSOLE)), (UNITY_INT)((systemAccess.mode)), (

   ((void *)0)

   ), (UNITY_UINT)(169), UNITY_DISPLAY_STYLE_INT);

}
