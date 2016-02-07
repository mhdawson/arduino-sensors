// Copyright 2015-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include "Device2272.h"
#include "ArduinoDS18B20Sensor.h"

// define the arduino pins used to connect to door sensor
// the DS18B20 and the transmitter
#define OPEN_CLOSE_PIN 5
#define TEMP_PIN 2
#define TXPIN 3

// device id used in message transmitted for the
// temp sensor
#define DS18B20_SENSOR_ID 0x55

// 2272 codes used to signify open or closed door
#define DEVICE_2272_ID "1111FFFF000"
#define CLOSED "1"
#define OPEN "0"

#define TRANSMIT_INTERVAL_SECONDS 120

Device2272 tx(TXPIN, 350);
ArduinoDS18B20Sensor tempSensor(DS18B20_SENSOR_ID, TEMP_PIN, TXPIN);
int counter = 0;
int lastState = 0;

void setup() {
  pinMode(OPEN_CLOSE_PIN, INPUT);
}

void loop() {
  // we transmit the state of the door and the temperature every
  // TRANSMIT_INTERVAL_SECONDS or when the state (open/close) of
  // the door changes
  delay(1000);
  counter++;
  int state = digitalRead(OPEN_CLOSE_PIN);
  if ((lastState != state) || (counter == TRANSMIT_INTERVAL_SECONDS)) {
     char message[NUM_CHARS_IN_MESSAGE+1];
     memset(message, 0, NUM_CHARS_IN_MESSAGE+1);
     strncat(message, DEVICE_2272_ID, NUM_CHARS_IN_MESSAGE);
     if(state == 0) {
       strncat(message, OPEN, NUM_CHARS_IN_MESSAGE);
     } else {
       strncat(message, CLOSED, NUM_CHARS_IN_MESSAGE);
     }
     tx.sendMessage(message);
     tempSensor.sendTemp();
     counter = 0;
  }
  
  lastState = state;
}
