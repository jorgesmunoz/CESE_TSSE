/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_system_uart.h"

static const char* CMockString_baudRate = "baudRate";
static const char* CMockString_receivedByte = "receivedByte";
static const char* CMockString_str = "str";
static const char* CMockString_system_uartInit = "system_uartInit";
static const char* CMockString_system_uart_ReadByte = "system_uart_ReadByte";
static const char* CMockString_system_uart_WriteByte = "system_uart_WriteByte";
static const char* CMockString_system_uart_WriteString = "system_uart_WriteString";
static const char* CMockString_uart = "uart";
static const char* CMockString_value = "value";

typedef struct _CMOCK_system_uartInit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  uartMap_t Expected_uart;
  uint32_t Expected_baudRate;

} CMOCK_system_uartInit_CALL_INSTANCE;

typedef struct _CMOCK_system_uart_WriteString_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  uartMap_t Expected_uart;
  const char* Expected_str;

} CMOCK_system_uart_WriteString_CALL_INSTANCE;

typedef struct _CMOCK_system_uart_ReadByte_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  _Bool ReturnVal;
  int CallOrder;
  uartMap_t Expected_uart;
  uint8_t* Expected_receivedByte;

} CMOCK_system_uart_ReadByte_CALL_INSTANCE;

typedef struct _CMOCK_system_uart_WriteByte_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  uartMap_t Expected_uart;
  uint8_t Expected_value;

} CMOCK_system_uart_WriteByte_CALL_INSTANCE;

static struct mock_system_uartInstance
{
  char system_uartInit_IgnoreBool;
  char system_uartInit_CallbackBool;
  CMOCK_system_uartInit_CALLBACK system_uartInit_CallbackFunctionPointer;
  int system_uartInit_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE system_uartInit_CallInstance;
  char system_uart_WriteString_IgnoreBool;
  char system_uart_WriteString_CallbackBool;
  CMOCK_system_uart_WriteString_CALLBACK system_uart_WriteString_CallbackFunctionPointer;
  int system_uart_WriteString_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE system_uart_WriteString_CallInstance;
  char system_uart_ReadByte_IgnoreBool;
  _Bool system_uart_ReadByte_FinalReturn;
  char system_uart_ReadByte_CallbackBool;
  CMOCK_system_uart_ReadByte_CALLBACK system_uart_ReadByte_CallbackFunctionPointer;
  int system_uart_ReadByte_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE system_uart_ReadByte_CallInstance;
  char system_uart_WriteByte_IgnoreBool;
  char system_uart_WriteByte_CallbackBool;
  CMOCK_system_uart_WriteByte_CALLBACK system_uart_WriteByte_CallbackFunctionPointer;
  int system_uart_WriteByte_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE system_uart_WriteByte_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_system_uart_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.system_uartInit_CallInstance;
  if (Mock.system_uartInit_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_system_uartInit);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.system_uartInit_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.system_uart_WriteString_CallInstance;
  if (Mock.system_uart_WriteString_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_system_uart_WriteString);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.system_uart_WriteString_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.system_uart_ReadByte_CallInstance;
  if (Mock.system_uart_ReadByte_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_system_uart_ReadByte);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.system_uart_ReadByte_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.system_uart_WriteByte_CallInstance;
  if (Mock.system_uart_WriteByte_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_system_uart_WriteByte);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.system_uart_WriteByte_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_system_uart_Init(void)
{
  mock_system_uart_Destroy();
}

void mock_system_uart_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void system_uartInit(uartMap_t uart, uint32_t baudRate)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_system_uartInit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_system_uartInit);
  cmock_call_instance = (CMOCK_system_uartInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.system_uartInit_CallInstance);
  Mock.system_uartInit_CallInstance = CMock_Guts_MemNext(Mock.system_uartInit_CallInstance);
  if (Mock.system_uartInit_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.system_uartInit_CallbackBool &&
      Mock.system_uartInit_CallbackFunctionPointer != NULL)
  {
    Mock.system_uartInit_CallbackFunctionPointer(uart, baudRate, Mock.system_uartInit_CallbackCalls++);
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
    UNITY_SET_DETAILS(CMockString_system_uartInit,CMockString_uart);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart), sizeof(uartMap_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_system_uartInit,CMockString_baudRate);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_baudRate, baudRate, cmock_line, CMockStringMismatch);
  }
  if (Mock.system_uartInit_CallbackFunctionPointer != NULL)
  {
    Mock.system_uartInit_CallbackFunctionPointer(uart, baudRate, Mock.system_uartInit_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_system_uartInit(CMOCK_system_uartInit_CALL_INSTANCE* cmock_call_instance, uartMap_t uart, uint32_t baudRate)
{
  memcpy((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart),
         sizeof(uartMap_t[sizeof(uart) == sizeof(uartMap_t) ? 1 : -1])); /* add uartMap_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_baudRate = baudRate;
}

void system_uartInit_CMockIgnore(void)
{
  Mock.system_uartInit_IgnoreBool = (char)1;
}

void system_uartInit_CMockStopIgnore(void)
{
  Mock.system_uartInit_IgnoreBool = (char)0;
}

void system_uartInit_CMockExpect(UNITY_LINE_TYPE cmock_line, uartMap_t uart, uint32_t baudRate)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_uartInit_CALL_INSTANCE));
  CMOCK_system_uartInit_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_uartInit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_uartInit_CallInstance = CMock_Guts_MemChain(Mock.system_uartInit_CallInstance, cmock_guts_index);
  Mock.system_uartInit_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_system_uartInit(cmock_call_instance, uart, baudRate);
}

void system_uartInit_AddCallback(CMOCK_system_uartInit_CALLBACK Callback)
{
  Mock.system_uartInit_IgnoreBool = (char)0;
  Mock.system_uartInit_CallbackBool = (char)1;
  Mock.system_uartInit_CallbackFunctionPointer = Callback;
}

void system_uartInit_Stub(CMOCK_system_uartInit_CALLBACK Callback)
{
  Mock.system_uartInit_IgnoreBool = (char)0;
  Mock.system_uartInit_CallbackBool = (char)0;
  Mock.system_uartInit_CallbackFunctionPointer = Callback;
}

void system_uart_WriteString(uartMap_t uart, const char* str)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_system_uart_WriteString_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_system_uart_WriteString);
  cmock_call_instance = (CMOCK_system_uart_WriteString_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.system_uart_WriteString_CallInstance);
  Mock.system_uart_WriteString_CallInstance = CMock_Guts_MemNext(Mock.system_uart_WriteString_CallInstance);
  if (Mock.system_uart_WriteString_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.system_uart_WriteString_CallbackBool &&
      Mock.system_uart_WriteString_CallbackFunctionPointer != NULL)
  {
    Mock.system_uart_WriteString_CallbackFunctionPointer(uart, str, Mock.system_uart_WriteString_CallbackCalls++);
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
    UNITY_SET_DETAILS(CMockString_system_uart_WriteString,CMockString_uart);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart), sizeof(uartMap_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_system_uart_WriteString,CMockString_str);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_str, str, cmock_line, CMockStringMismatch);
  }
  if (Mock.system_uart_WriteString_CallbackFunctionPointer != NULL)
  {
    Mock.system_uart_WriteString_CallbackFunctionPointer(uart, str, Mock.system_uart_WriteString_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_system_uart_WriteString(CMOCK_system_uart_WriteString_CALL_INSTANCE* cmock_call_instance, uartMap_t uart, const char* str)
{
  memcpy((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart),
         sizeof(uartMap_t[sizeof(uart) == sizeof(uartMap_t) ? 1 : -1])); /* add uartMap_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_str = str;
}

void system_uart_WriteString_CMockIgnore(void)
{
  Mock.system_uart_WriteString_IgnoreBool = (char)1;
}

void system_uart_WriteString_CMockStopIgnore(void)
{
  Mock.system_uart_WriteString_IgnoreBool = (char)0;
}

void system_uart_WriteString_CMockExpect(UNITY_LINE_TYPE cmock_line, uartMap_t uart, const char* str)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_uart_WriteString_CALL_INSTANCE));
  CMOCK_system_uart_WriteString_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_uart_WriteString_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_uart_WriteString_CallInstance = CMock_Guts_MemChain(Mock.system_uart_WriteString_CallInstance, cmock_guts_index);
  Mock.system_uart_WriteString_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_system_uart_WriteString(cmock_call_instance, uart, str);
}

void system_uart_WriteString_AddCallback(CMOCK_system_uart_WriteString_CALLBACK Callback)
{
  Mock.system_uart_WriteString_IgnoreBool = (char)0;
  Mock.system_uart_WriteString_CallbackBool = (char)1;
  Mock.system_uart_WriteString_CallbackFunctionPointer = Callback;
}

void system_uart_WriteString_Stub(CMOCK_system_uart_WriteString_CALLBACK Callback)
{
  Mock.system_uart_WriteString_IgnoreBool = (char)0;
  Mock.system_uart_WriteString_CallbackBool = (char)0;
  Mock.system_uart_WriteString_CallbackFunctionPointer = Callback;
}

_Bool system_uart_ReadByte(uartMap_t uart, uint8_t* receivedByte)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_system_uart_ReadByte_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_system_uart_ReadByte);
  cmock_call_instance = (CMOCK_system_uart_ReadByte_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.system_uart_ReadByte_CallInstance);
  Mock.system_uart_ReadByte_CallInstance = CMock_Guts_MemNext(Mock.system_uart_ReadByte_CallInstance);
  if (Mock.system_uart_ReadByte_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.system_uart_ReadByte_FinalReturn;
    memcpy((void*)(&Mock.system_uart_ReadByte_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(_Bool[sizeof(cmock_call_instance->ReturnVal) == sizeof(_Bool) ? 1 : -1])); /* add _Bool to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.system_uart_ReadByte_CallbackBool &&
      Mock.system_uart_ReadByte_CallbackFunctionPointer != NULL)
  {
    _Bool cmock_cb_ret = Mock.system_uart_ReadByte_CallbackFunctionPointer(uart, receivedByte, Mock.system_uart_ReadByte_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_system_uart_ReadByte,CMockString_uart);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart), sizeof(uartMap_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_system_uart_ReadByte,CMockString_receivedByte);
    if (cmock_call_instance->Expected_receivedByte == NULL)
      { UNITY_TEST_ASSERT_NULL(receivedByte, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_receivedByte, receivedByte, 1, cmock_line, CMockStringMismatch); }
  }
  if (Mock.system_uart_ReadByte_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.system_uart_ReadByte_CallbackFunctionPointer(uart, receivedByte, Mock.system_uart_ReadByte_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_system_uart_ReadByte(CMOCK_system_uart_ReadByte_CALL_INSTANCE* cmock_call_instance, uartMap_t uart, uint8_t* receivedByte)
{
  memcpy((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart),
         sizeof(uartMap_t[sizeof(uart) == sizeof(uartMap_t) ? 1 : -1])); /* add uartMap_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_receivedByte = receivedByte;
}

void system_uart_ReadByte_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, _Bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_uart_ReadByte_CALL_INSTANCE));
  CMOCK_system_uart_ReadByte_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_uart_ReadByte_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_uart_ReadByte_CallInstance = CMock_Guts_MemChain(Mock.system_uart_ReadByte_CallInstance, cmock_guts_index);
  Mock.system_uart_ReadByte_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.system_uart_ReadByte_IgnoreBool = (char)1;
}

void system_uart_ReadByte_CMockStopIgnore(void)
{
  if(Mock.system_uart_ReadByte_IgnoreBool)
    Mock.system_uart_ReadByte_CallInstance = CMock_Guts_MemNext(Mock.system_uart_ReadByte_CallInstance);
  Mock.system_uart_ReadByte_IgnoreBool = (char)0;
}

void system_uart_ReadByte_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uartMap_t uart, uint8_t* receivedByte, _Bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_uart_ReadByte_CALL_INSTANCE));
  CMOCK_system_uart_ReadByte_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_uart_ReadByte_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_uart_ReadByte_CallInstance = CMock_Guts_MemChain(Mock.system_uart_ReadByte_CallInstance, cmock_guts_index);
  Mock.system_uart_ReadByte_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_system_uart_ReadByte(cmock_call_instance, uart, receivedByte);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(_Bool[sizeof(cmock_to_return) == sizeof(_Bool) ? 1 : -1])); /* add _Bool to :treat_as_array if this causes an error */
}

void system_uart_ReadByte_AddCallback(CMOCK_system_uart_ReadByte_CALLBACK Callback)
{
  Mock.system_uart_ReadByte_IgnoreBool = (char)0;
  Mock.system_uart_ReadByte_CallbackBool = (char)1;
  Mock.system_uart_ReadByte_CallbackFunctionPointer = Callback;
}

void system_uart_ReadByte_Stub(CMOCK_system_uart_ReadByte_CALLBACK Callback)
{
  Mock.system_uart_ReadByte_IgnoreBool = (char)0;
  Mock.system_uart_ReadByte_CallbackBool = (char)0;
  Mock.system_uart_ReadByte_CallbackFunctionPointer = Callback;
}

void system_uart_WriteByte(uartMap_t uart, const uint8_t value)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_system_uart_WriteByte_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_system_uart_WriteByte);
  cmock_call_instance = (CMOCK_system_uart_WriteByte_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.system_uart_WriteByte_CallInstance);
  Mock.system_uart_WriteByte_CallInstance = CMock_Guts_MemNext(Mock.system_uart_WriteByte_CallInstance);
  if (Mock.system_uart_WriteByte_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (!Mock.system_uart_WriteByte_CallbackBool &&
      Mock.system_uart_WriteByte_CallbackFunctionPointer != NULL)
  {
    Mock.system_uart_WriteByte_CallbackFunctionPointer(uart, value, Mock.system_uart_WriteByte_CallbackCalls++);
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
    UNITY_SET_DETAILS(CMockString_system_uart_WriteByte,CMockString_uart);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart), sizeof(uartMap_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_system_uart_WriteByte,CMockString_value);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_value, value, cmock_line, CMockStringMismatch);
  }
  if (Mock.system_uart_WriteByte_CallbackFunctionPointer != NULL)
  {
    Mock.system_uart_WriteByte_CallbackFunctionPointer(uart, value, Mock.system_uart_WriteByte_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_system_uart_WriteByte(CMOCK_system_uart_WriteByte_CALL_INSTANCE* cmock_call_instance, uartMap_t uart, const uint8_t value)
{
  memcpy((void*)(&cmock_call_instance->Expected_uart), (void*)(&uart),
         sizeof(uartMap_t[sizeof(uart) == sizeof(uartMap_t) ? 1 : -1])); /* add uartMap_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_value = value;
}

void system_uart_WriteByte_CMockIgnore(void)
{
  Mock.system_uart_WriteByte_IgnoreBool = (char)1;
}

void system_uart_WriteByte_CMockStopIgnore(void)
{
  Mock.system_uart_WriteByte_IgnoreBool = (char)0;
}

void system_uart_WriteByte_CMockExpect(UNITY_LINE_TYPE cmock_line, uartMap_t uart, const uint8_t value)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_uart_WriteByte_CALL_INSTANCE));
  CMOCK_system_uart_WriteByte_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_uart_WriteByte_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_uart_WriteByte_CallInstance = CMock_Guts_MemChain(Mock.system_uart_WriteByte_CallInstance, cmock_guts_index);
  Mock.system_uart_WriteByte_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_system_uart_WriteByte(cmock_call_instance, uart, value);
}

void system_uart_WriteByte_AddCallback(CMOCK_system_uart_WriteByte_CALLBACK Callback)
{
  Mock.system_uart_WriteByte_IgnoreBool = (char)0;
  Mock.system_uart_WriteByte_CallbackBool = (char)1;
  Mock.system_uart_WriteByte_CallbackFunctionPointer = Callback;
}

void system_uart_WriteByte_Stub(CMOCK_system_uart_WriteByte_CALLBACK Callback)
{
  Mock.system_uart_WriteByte_IgnoreBool = (char)0;
  Mock.system_uart_WriteByte_CallbackBool = (char)0;
  Mock.system_uart_WriteByte_CallbackFunctionPointer = Callback;
}

