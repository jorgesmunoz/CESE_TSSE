/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include "mock_debounce.h"
#include "mock_leds.h"
#include "mock_system_uart.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_inicio_del_sistema(void);
extern void test_console_state(void);
extern void test_button_1(void);
extern void test_button_2(void);
extern void test_button_3(void);
extern void test_button_4(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_debounce_Init();
  mock_leds_Init();
  mock_system_uart_Init();
}
static void CMock_Verify(void)
{
  mock_debounce_Verify();
  mock_leds_Verify();
  mock_system_uart_Verify();
}
static void CMock_Destroy(void)
{
  mock_debounce_Destroy();
  mock_leds_Destroy();
  mock_system_uart_Destroy();
}

/*=======Teardown (stub)=====*/
void tearDown(void) {}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_trabajo_final_fsm.c");
  run_test(test_inicio_del_sistema, "test_inicio_del_sistema", 41);
  run_test(test_console_state, "test_console_state", 55);
  run_test(test_button_1, "test_button_1", 79);
  run_test(test_button_2, "test_button_2", 108);
  run_test(test_button_3, "test_button_3", 135);
  run_test(test_button_4, "test_button_4", 154);

  CMock_Guts_MemFreeFinal();
  return UnityEnd();
}