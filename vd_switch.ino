// super fast lightweight Velocidrone combat foot switch trigger by alex @ designtuneoperate . co . uk

#include <Keyboard.h>
 
#define PIN_SPACEBAR 10 // pin to attach our switch too
#define PIN_SPARE 11 // another pin if we ever need more switches

#define PIN_LED 13 // there is an LED attached to this pin on the itsy

byte space_button_is_pushed = 0; // this will be set to 1 to help the code know the state of the switch

unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 1; // debounce time in ms, not needed for this application but included anyway

void setup() {

  pinMode(PIN_SPACEBAR, INPUT_PULLUP); // add pullup to pins so they will be triggered by a low (ground) state
  pinMode(PIN_SPARE, INPUT_PULLUP);  
  
  Keyboard.begin(); // start USB keyboard library
  digitalWrite(PIN_LED, LOW); // make sure LED is off after boot 
  
}

void loop() {

    // this code checks the pin state to see if the space needs pressing
    if (digitalRead(PIN_SPACEBAR) == LOW && space_button_is_pushed == 0
       && (millis() - lastDebounceTime) > debounceDelay) { 
      space_button_is_pushed = 1;
      lastDebounceTime = millis();
      Keyboard.press(' ');
      digitalWrite(PIN_LED, HIGH); // turn the LED on to help debug        
    }

    // this code checks the pin state to see if the space needs unpressing
    if (digitalRead(PIN_SPACEBAR) == HIGH && space_button_is_pushed == 1) { 
      space_button_is_pushed = 0;
      Keyboard.release(' ');
      digitalWrite(PIN_LED, LOW); // turn the LED off to help debug 
    }
    
}       
