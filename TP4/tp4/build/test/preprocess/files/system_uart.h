#include "src/fsm_access_system.h"
void system_uartInit( uartMap_t uart, uint32_t baudRate);



void system_uart_WriteString( uartMap_t uart, const char* str );





_Bool 

    system_uart_ReadByte( uartMap_t uart, uint8_t* receivedByte );



void system_uart_WriteByte( uartMap_t uart, const uint8_t value );
