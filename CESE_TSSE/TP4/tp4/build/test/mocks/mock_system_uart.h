/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_SYSTEM_UART_H
#define _MOCK_SYSTEM_UART_H

#include "unity.h"
#include "system_uart.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_system_uart_Init(void);
void mock_system_uart_Destroy(void);
void mock_system_uart_Verify(void);




#define system_uartInit_Ignore() system_uartInit_CMockIgnore()
void system_uartInit_CMockIgnore(void);
#define system_uartInit_StopIgnore() system_uartInit_CMockStopIgnore()
void system_uartInit_CMockStopIgnore(void);
#define system_uartInit_Expect(uart, baudRate) system_uartInit_CMockExpect(__LINE__, uart, baudRate)
void system_uartInit_CMockExpect(UNITY_LINE_TYPE cmock_line, uartMap_t uart, uint32_t baudRate);
typedef void (* CMOCK_system_uartInit_CALLBACK)(uartMap_t uart, uint32_t baudRate, int cmock_num_calls);
void system_uartInit_AddCallback(CMOCK_system_uartInit_CALLBACK Callback);
void system_uartInit_Stub(CMOCK_system_uartInit_CALLBACK Callback);
#define system_uartInit_StubWithCallback system_uartInit_Stub
#define system_uart_WriteString_Ignore() system_uart_WriteString_CMockIgnore()
void system_uart_WriteString_CMockIgnore(void);
#define system_uart_WriteString_StopIgnore() system_uart_WriteString_CMockStopIgnore()
void system_uart_WriteString_CMockStopIgnore(void);
#define system_uart_WriteString_Expect(uart, str) system_uart_WriteString_CMockExpect(__LINE__, uart, str)
void system_uart_WriteString_CMockExpect(UNITY_LINE_TYPE cmock_line, uartMap_t uart, const char* str);
typedef void (* CMOCK_system_uart_WriteString_CALLBACK)(uartMap_t uart, const char* str, int cmock_num_calls);
void system_uart_WriteString_AddCallback(CMOCK_system_uart_WriteString_CALLBACK Callback);
void system_uart_WriteString_Stub(CMOCK_system_uart_WriteString_CALLBACK Callback);
#define system_uart_WriteString_StubWithCallback system_uart_WriteString_Stub
#define system_uart_ReadByte_IgnoreAndReturn(cmock_retval) system_uart_ReadByte_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void system_uart_ReadByte_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, _Bool cmock_to_return);
#define system_uart_ReadByte_StopIgnore() system_uart_ReadByte_CMockStopIgnore()
void system_uart_ReadByte_CMockStopIgnore(void);
#define system_uart_ReadByte_ExpectAndReturn(uart, receivedByte, cmock_retval) system_uart_ReadByte_CMockExpectAndReturn(__LINE__, uart, receivedByte, cmock_retval)
void system_uart_ReadByte_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uartMap_t uart, uint8_t* receivedByte, _Bool cmock_to_return);
typedef _Bool (* CMOCK_system_uart_ReadByte_CALLBACK)(uartMap_t uart, uint8_t* receivedByte, int cmock_num_calls);
void system_uart_ReadByte_AddCallback(CMOCK_system_uart_ReadByte_CALLBACK Callback);
void system_uart_ReadByte_Stub(CMOCK_system_uart_ReadByte_CALLBACK Callback);
#define system_uart_ReadByte_StubWithCallback system_uart_ReadByte_Stub
#define system_uart_WriteByte_Ignore() system_uart_WriteByte_CMockIgnore()
void system_uart_WriteByte_CMockIgnore(void);
#define system_uart_WriteByte_StopIgnore() system_uart_WriteByte_CMockStopIgnore()
void system_uart_WriteByte_CMockStopIgnore(void);
#define system_uart_WriteByte_Expect(uart, value) system_uart_WriteByte_CMockExpect(__LINE__, uart, value)
void system_uart_WriteByte_CMockExpect(UNITY_LINE_TYPE cmock_line, uartMap_t uart, const uint8_t value);
typedef void (* CMOCK_system_uart_WriteByte_CALLBACK)(uartMap_t uart, const uint8_t value, int cmock_num_calls);
void system_uart_WriteByte_AddCallback(CMOCK_system_uart_WriteByte_CALLBACK Callback);
void system_uart_WriteByte_Stub(CMOCK_system_uart_WriteByte_CALLBACK Callback);
#define system_uart_WriteByte_StubWithCallback system_uart_WriteByte_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
