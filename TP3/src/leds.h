#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

void LedsCreate(uint16_t * direccion);

void LedsTurnOn(uint8_t led);

void LedsTurnOff(uint8_t led);

void LedsTurnAllOn();

void LedsTurnAllOff();

void LedsTest(uint16_t * direccion, uint8_t led);