/*
 * sistema_acceso.h
 *
 *  Created on: 22 abr. 2020
 *      Author: jorge
 */

#ifndef PDM_TRABAJOS_TRABAJOFINAL_INC_FSM_ACCESS_SYSTEM_H_
#define PDM_TRABAJOS_TRABAJOFINAL_INC_FSM_ACCESS_SYSTEM_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
//#include "Mocksapi.h"

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/
#define INITIAL_DEFAULT_MODE MANUAL
#define INITIAL_DEFAULT_STATE CLOSE
#define BAUD_RATE 115200
#define UART UART_USB
#define TRUE 1
#define FALSE 0

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
typedef enum {MANUAL, CONSOLE} system_mode_t;
typedef enum {OPEN, CLOSE} system_state_t;

typedef struct{
	system_mode_t mode;
	system_state_t state;
} system_t;

typedef uint64_t tick_t;

typedef enum {
	#if (BOARD == ciaa_nxp)
	   UART_485  = 1, // Hardware UART0 via RS_485 A, B and GND Borns
					  // Hardware UART1 not routed
	   UART_USB  = 3, // Hardware UART2 via USB DEBUG port
	   UART_232  = 5, // Hardware UART3 via 232_RX and 232_tx pins on header P1
	#elif (BOARD == edu_ciaa_nxp)
	   UART_GPIO = 0, // Hardware UART0 via GPIO1(TX), GPIO2(RX) pins on header P0
	   UART_485  = 1, // Hardware UART0 via RS_485 A, B and GND Borns
		// Hardware UART1 not routed
	   UART_USB  = 3, // Hardware UART2 via USB DEBUG port
	   UART_ENET = 4, // Hardware UART2 via ENET_RXD0(TX), ENET_CRS_DV(RX) pins on header P0
	   UART_232  = 5, // Hardware UART3 via 232_RX and 232_tx pins on header P1
	#else
	   #error BOARD not supported yet!
	#endif
   UART_MAXNUM,
} uartMap_t;

typedef enum {

   // Configure GPIO pins for each board
      VCC = -2, GND = -1,
      // P1 header
      T_FIL1,    T_COL2,    T_COL0,    T_FIL2,      T_FIL3,  T_FIL0,     T_COL1,
      CAN_TD,    CAN_RD,    RS232_TXD, RS232_RXD,
      // P2 header
      GPIO8,     GPIO7,     GPIO5,     GPIO3,       GPIO1,
      LCD1,      LCD2,      LCD3,      LCDRS,       LCD4,
      SPI_MISO,
      ENET_TXD1, ENET_TXD0, ENET_MDIO, ENET_CRS_DV, ENET_MDC, ENET_TXEN, ENET_RXD1,
      GPIO6,     GPIO4,     GPIO2,     GPIO0,
      LCDEN,
      SPI_MOSI,
      ENET_RXD0,
      // Switches
      // 36   37     38     39
      TEC1,  TEC2,  TEC3,  TEC4,
      // Leds
      // 40   41     42     43     44     45
      LEDR,  LEDG,  LEDB,  LED1,  LED2,  LED3,
      //#error EDU-CIAA-NXP

} gpioMap_t;

typedef struct{
   tick_t startTime;
   tick_t duration;
   bool running;
} delay_t;

/*=====[Prototypes (declarations) of public functions]=======================*/
void fsm_systemError( void );

void fsm_systemInit( system_t  * pSystem );

void fsm_systemUpdate( system_t  * pSystem );

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif



#endif /* PDM_TRABAJOS_TRABAJOFINAL_INC_FSM_ACCESS_SYSTEM_H_ */
