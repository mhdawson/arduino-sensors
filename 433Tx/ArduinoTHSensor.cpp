// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <string.h>
#include "ArduinoTHSensor.h"

#define MESSAGE_REPEAT_COUNT 15
#define REGISTER_TRANSMITS 4

ArduinoTHSensor::ArduinoTHSensor(char deviceCode, int sensorPin, uint8_t sensorType, int txPin) {
   _deviceCode = deviceCode;
   _dht = new DHT(sensorPin, sensorType);
   setTxPin(txPin);
   _dht->begin();
}

void ArduinoTHSensor::sendSync(void) {
   for(int i=0;i<5;i++) {
      sendPulseLowHigh(1000,1000);
   }
}

void ArduinoTHSensor::sendByte(char byte) {
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

int ArduinoTHSensor::sendMessage() {
   char bytes[4];

   int humidity = (int) _dht->readHumidity();
   int temp = (int) (_dht->readTemperature() + 0.5);
   
   bytes[3] = _deviceCode;
   bytes[1] = (char) (temp + 128);
   bytes[2] = (char) humidity;
   addChecksum(bytes);
   sendMessageOut(bytes);
   return 0;
}

void ArduinoTHSensor::sendMessageOut(char* bytes) {
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
void ArduinoTHSensor::addChecksum(char* bytes) {
   char calcChecksum = 0x77;

   for (int i = 1;i<4;i++) {
      calcChecksum += ((bytes[i] >> 4) & 0x0F) + ((bytes[i] & 0x0F) << 4);
   }

   // swap the nibbles around and store in the checksum byt
   bytes[0] = ((calcChecksum >> 4) & 0x0F) + ((calcChecksum & 0x0F) << 4);
}
