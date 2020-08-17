#include "leds.h"

static uint16_t * puerto;
uint16_t estado_puerto;

static bool VerifyLed(uint8_t led){
    if((led == 0) || (led > 16)){
        return false;
    }
    else{
        return true;
    }
}

uint8_t LedToBit(uint8_t led){
    return (led - LEDS_TO_BITS_OFFSET);
}

uint16_t BitMask(uint16_t bit){
    return (LEDS_BIT_ON << bit);
}

void LedsCreate(uint16_t * direccion){
    puerto = direccion;
    *puerto = LEDS_ALL_OFF;
}

void LedsTurnOn(uint8_t led){
    // Verifica led
    if(!VerifyLed(led)){
        return;
    }
    else{
        *puerto |= BitMask(LedToBit(led));
    }    
}

void LedsTurnOff(uint8_t led){
    // Verifica led
    if(!VerifyLed(led)){
        return;
    }
    else{
        *puerto &= ~BitMask(LedToBit(led));
    }
}

void LedsTurnAllOn(){
    *puerto = LEDS_ALL_ON;
}

void LedsTurnAllOff(){
    *puerto = LEDS_ALL_OFF;
}

void LedsTest(uint16_t * direccion, uint8_t led){
    // Verifica led
    if(!VerifyLed(led)){
        return;
    }
    else{
        estado_puerto = *puerto;
        *direccion = (estado_puerto & BitMask(LedToBit(led)));
    }
}