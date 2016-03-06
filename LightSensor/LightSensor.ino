
// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include "ArduinoLightSensor.h"

#define SENSOR_SEND_INTERVAL 60000

#define TX_433_PIN 4

#define LIGHT_SENSOR_DEVICE_ID 0x44
#define PHOTOCELL_PIN 0

ArduinoLightSensor arduinoLightSensor(LIGHT_SENSOR_DEVICE_ID, PHOTOCELL_PIN, TX_433_PIN);

// the setup function runs once when you press reset or power the board
void setup() {
}

// the loop function runs over and over again forever
void loop() {
  arduinoLightSensor.sendLightReading();
  delay(SENSOR_SEND_INTERVAL);
}



