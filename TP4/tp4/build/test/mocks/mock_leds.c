/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_leds.h"

static const char* CMockString_blink = "blink";
static const char* CMockString_lamp = "lamp";
static const char* CMockString_turnOff = "turnOff";
static const char* CMockString_turnOn = "turnOn";

typedef struct _CMOCK_turnOn_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  lamp_t Expected_lamp;

} CMOCK_turnOn_CALL_INSTANCE;

typedef struct _CMOCK_turnOff_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  lamp_t Expected_lamp;

} CMOCK_turnOff_CALL_INSTANCE;

typedef struct _CMOCK_blink_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  lamp_t Expected_lamp;

} CMOCK_blink_CALL_INSTANCE;

static struct mock_ledsInstance
{
  char turnOn_IgnoreBool;
  char turnOn_CallbackBool;
  CMOCK_turnOn_CALLBACK turnOn_CallbackFunctionPointer;
  int turnOn_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE turnOn_CallInstance;
  char turnOff_IgnoreBool;
  char turnOff_CallbackBool;
  CMOCK_turnOff_CALLBACK turnOff_CallbackFunctionPointer;
  int turnOff_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE turnOff_CallInstance;
  char blink_IgnoreBool;
  char blink_CallbackBool;
  CMOCK_blink_CALLBACK blink_CallbackFunctionPointer;
  int blink_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE blink_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_leds_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.turnOn_CallInstance;
  if (Mock.turnOn_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_turnOn);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.turnOn_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.turnOff_CallInstance;
  if (Mock.turnOff_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_turnOff);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.turnOff_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.blink_CallInstance;
  if (Mock.blink_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_blink);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.blink_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_leds_Init(void)
{
  mock_leds_Destroy();
}

void mock_leds_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void turnOn(lamp_t lamp)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_turnOn_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_turnOn);
  cmock_call_instance = (CMOCK_turnOn_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.turnOn_CallInstance);
  Mock.turnOn_CallInstance = CMock_Guts_MemNext(Mock.turnOn_CallInstance);
  if (Mock.turnOn_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.turnOn_CallbackBool &&
      Mock.turnOn_CallbackFunctionPointer != NULL)
  {
    Mock.turnOn_CallbackFunctionPointer(lamp, Mock.turnOn_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_turnOn,CMockString_lamp);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_lamp), (void*)(&lamp), sizeof(lamp_t), cmock_line, CMockStringMismatch);
  }
  if (Mock.turnOn_CallbackFunctionPointer != NULL)
  {
    Mock.turnOn_CallbackFunctionPointer(lamp, Mock.turnOn_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_turnOn(CMOCK_turnOn_CALL_INSTANCE* cmock_call_instance, lamp_t lamp)
{
  memcpy((void*)(&cmock_call_instance->Expected_lamp), (void*)(&lamp),
         sizeof(lamp_t[sizeof(lamp) == sizeof(lamp_t) ? 1 : -1])); /* add lamp_t to :treat_as_array if this causes an error */
}

void turnOn_CMockIgnore(void)
{
  Mock.turnOn_IgnoreBool = (char)1;
}

void turnOn_CMockStopIgnore(void)
{
  Mock.turnOn_IgnoreBool = (char)0;
}

void turnOn_CMockExpect(UNITY_LINE_TYPE cmock_line, lamp_t lamp)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_turnOn_CALL_INSTANCE));
  CMOCK_turnOn_CALL_INSTANCE* cmock_call_instance = (CMOCK_turnOn_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.turnOn_CallInstance = CMock_Guts_MemChain(Mock.turnOn_CallInstance, cmock_guts_index);
  Mock.turnOn_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_turnOn(cmock_call_instance, lamp);
}

void turnOn_AddCallback(CMOCK_turnOn_CALLBACK Callback)
{
  Mock.turnOn_IgnoreBool = (char)0;
  Mock.turnOn_CallbackBool = (char)1;
  Mock.turnOn_CallbackFunctionPointer = Callback;
}

void turnOn_Stub(CMOCK_turnOn_CALLBACK Callback)
{
  Mock.turnOn_IgnoreBool = (char)0;
  Mock.turnOn_CallbackBool = (char)0;
  Mock.turnOn_CallbackFunctionPointer = Callback;
}

void turnOff(lamp_t lamp)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_turnOff_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_turnOff);
  cmock_call_instance = (CMOCK_turnOff_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.turnOff_CallInstance);
  Mock.turnOff_CallInstance = CMock_Guts_MemNext(Mock.turnOff_CallInstance);
  if (Mock.turnOff_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.turnOff_CallbackBool &&
      Mock.turnOff_CallbackFunctionPointer != NULL)
  {
    Mock.turnOff_CallbackFunctionPointer(lamp, Mock.turnOff_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_turnOff,CMockString_lamp);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_lamp), (void*)(&lamp), sizeof(lamp_t), cmock_line, CMockStringMismatch);
  }
  if (Mock.turnOff_CallbackFunctionPointer != NULL)
  {
    Mock.turnOff_CallbackFunctionPointer(lamp, Mock.turnOff_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_turnOff(CMOCK_turnOff_CALL_INSTANCE* cmock_call_instance, lamp_t lamp)
{
  memcpy((void*)(&cmock_call_instance->Expected_lamp), (void*)(&lamp),
         sizeof(lamp_t[sizeof(lamp) == sizeof(lamp_t) ? 1 : -1])); /* add lamp_t to :treat_as_array if this causes an error */
}

void turnOff_CMockIgnore(void)
{
  Mock.turnOff_IgnoreBool = (char)1;
}

void turnOff_CMockStopIgnore(void)
{
  Mock.turnOff_IgnoreBool = (char)0;
}

void turnOff_CMockExpect(UNITY_LINE_TYPE cmock_line, lamp_t lamp)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_turnOff_CALL_INSTANCE));
  CMOCK_turnOff_CALL_INSTANCE* cmock_call_instance = (CMOCK_turnOff_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.turnOff_CallInstance = CMock_Guts_MemChain(Mock.turnOff_CallInstance, cmock_guts_index);
  Mock.turnOff_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_turnOff(cmock_call_instance, lamp);
}

void turnOff_AddCallback(CMOCK_turnOff_CALLBACK Callback)
{
  Mock.turnOff_IgnoreBool = (char)0;
  Mock.turnOff_CallbackBool = (char)1;
  Mock.turnOff_CallbackFunctionPointer = Callback;
}

void turnOff_Stub(CMOCK_turnOff_CALLBACK Callback)
{
  Mock.turnOff_IgnoreBool = (char)0;
  Mock.turnOff_CallbackBool = (char)0;
  Mock.turnOff_CallbackFunctionPointer = Callback;
}

void blink(lamp_t lamp)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_blink_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_blink);
  cmock_call_instance = (CMOCK_blink_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.blink_CallInstance);
  Mock.blink_CallInstance = CMock_Guts_MemNext(Mock.blink_CallInstance);
  if (Mock.blink_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.blink_CallbackBool &&
      Mock.blink_CallbackFunctionPointer != NULL)
  {
    Mock.blink_CallbackFunctionPointer(lamp, Mock.blink_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_blink,CMockString_lamp);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_lamp), (void*)(&lamp), sizeof(lamp_t), cmock_line, CMockStringMismatch);
  }
  if (Mock.blink_CallbackFunctionPointer != NULL)
  {
    Mock.blink_CallbackFunctionPointer(lamp, Mock.blink_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_blink(CMOCK_blink_CALL_INSTANCE* cmock_call_instance, lamp_t lamp)
{
  memcpy((void*)(&cmock_call_instance->Expected_lamp), (void*)(&lamp),
         sizeof(lamp_t[sizeof(lamp) == sizeof(lamp_t) ? 1 : -1])); /* add lamp_t to :treat_as_array if this causes an error */
}

void blink_CMockIgnore(void)
{
  Mock.blink_IgnoreBool = (char)1;
}

void blink_CMockStopIgnore(void)
{
  Mock.blink_IgnoreBool = (char)0;
}

void blink_CMockExpect(UNITY_LINE_TYPE cmock_line, lamp_t lamp)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_blink_CALL_INSTANCE));
  CMOCK_blink_CALL_INSTANCE* cmock_call_instance = (CMOCK_blink_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.blink_CallInstance = CMock_Guts_MemChain(Mock.blink_CallInstance, cmock_guts_index);
  Mock.blink_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_blink(cmock_call_instance, lamp);
}

void blink_AddCallback(CMOCK_blink_CALLBACK Callback)
{
  Mock.blink_IgnoreBool = (char)0;
  Mock.blink_CallbackBool = (char)1;
  Mock.blink_CallbackFunctionPointer = Callback;
}

void blink_Stub(CMOCK_blink_CALLBACK Callback)
{
  Mock.blink_IgnoreBool = (char)0;
  Mock.blink_CallbackBool = (char)0;
  Mock.blink_CallbackFunctionPointer = Callback;
}

