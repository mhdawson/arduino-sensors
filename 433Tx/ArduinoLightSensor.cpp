// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ArduinoLightSensor.h"

#define MESSAGE_REPEAT_COUNT 15
#define REGISTER_TRANSMITS 4

ArduinoLightSensor::ArduinoLightSensor(char deviceCode, int lightPin, int txPin) {
   _deviceCode = deviceCode;
   _lightPin = lightPin;
   setTxPin(txPin);
}

void ArduinoLightSensor::sendSync(void) {
   for(int i=0;i<5;i++) {
      sendPulseLowHigh(1000,1000);
   }
}

void ArduinoLightSensor::sendByte(char byte) {
   char mask = 0x80;
   for(int i=0;i<8;i++) {
      if ((byte & mask) != 0) {
         sendPulseLowHigh(490,160);
      } else {
         sendPulseLowHigh(160,490);
      }
      mask = (mask >> 1) & 0x7F;
   }
}

int ArduinoLightSensor::sendLightReading() {
   char bytes[4];
   int currentLightReading = analogRead(_lightPin);
   bytes[3] = _deviceCode;
   bytes[1] = (char) currentLightReading;
   bytes[2] = (char) (currentLightReading/256);
   addChecksum(bytes);
   sendMessageOut(bytes);
   return 0;
}

void ArduinoLightSensor::sendMessageOut(char* bytes) {
   for (int i=0;i<MESSAGE_REPEAT_COUNT;i++){ 
      sendSync();
      for(int i=3;i>=0;i--) { 
         sendByte(bytes[i]);
      }
   }
}

// to calculate the checksum first reverse the nibbles in each byte
// then add the 3 message bytes together, add 0x77 and the swap
// the nibbles to get the expected checksum which is stored in byte 0
void ArduinoLightSensor::addChecksum(char* bytes) {
   char calcChecksum = 0x55;

   for (int i = 1;i<4;i++) {
      calcChecksum += ((bytes[i] >> 4) & 0x0F) + ((bytes[i] & 0x0F) << 4);
   }

   // swap the nibbles around and store in the checksum byt
   bytes[0] = ((calcChecksum >> 4) & 0x0F) + ((calcChecksum & 0x0F) << 4);
}
