#include "src/fsm_access_system.h"
typedef enum {

 UP,

 FALLING,

 DOWN,

 RISING

} debounce_state_t;



typedef struct {

 

_Bool 

     keyPressed;

 

_Bool 

     buttonReleased;

 gpioMap_t button;

 debounce_state_t buttonState;

 delay_t buttonFSMdelay;

} debounce_button_t;













void fsm_debounceError( void );



void fsm_debounceInit( debounce_button_t * pButton, gpioMap_t button );



void fsm_debounceUpdate( debounce_button_t * pButton );
