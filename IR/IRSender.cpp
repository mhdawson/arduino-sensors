// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include "IRSender.h"

IRSender::IRSender(int pin) {
  _pin = pin;
  pinMode(pin, OUTPUT);
}


/* Send one pulse from the ir code. 
 * Modulate the pin output at ~38khz for 
 * the length of the pulse.
 */
void IRSender::sendPulse(int length) {
  while(length > 0) {
    digitalWrite(_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_pin, LOW);
    delayMicroseconds(10);
    // adjust to get timing for specific arduino
    // this is for an arduino nano
    length = length - 34; 
  }
}


/* Send an ir code. The ir code
 * For a mark the pin is modulated at ~38khz for 
 * the length of the mark by sendPulse.  
 * For a space we simply  set the pin low.
 * We pass the ir code as an array in PROGMEM of 
 * the length specified where the entries in the array
 * are the duration of the mark or space
 */
void IRSender::sendIrCode(const uint16_t* code, int length) {
  cli();
  for (int i=0; i<length; i++) {
    sendPulse(pgm_read_word_near(code + i));
    i++;
    if (i < length) {
      delayMicroseconds(pgm_read_word_near(code + i));
    }
  }
  sei();
}
