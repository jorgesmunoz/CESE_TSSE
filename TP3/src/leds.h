#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#define LEDS_ALL_ON         0xFFFF
#define LEDS_ALL_OFF        0x0000
#define LEDS_TO_BITS_OFFSET 1
#define LEDS_BIT_ON         1

void LedsCreate(uint16_t * direccion);

void LedsTurnOn(uint8_t led);

void LedsTurnOff(uint8_t led);

void LedsTurnAllOn();

void LedsTurnAllOff();

void LedsTest(uint16_t * direccion, uint8_t led);