
// Copyright 2014-2015 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include "IRSend2262.h"
#include "Device2262n.h"
#include "PI433.h"
#include "ArduinoTHSensor.h"
#include "ArduinoLightSensor.h"

#define IR_CHECK_INTERVAL 500
#define SEND_INTERVAL_MULTIPLIER 240

#define RX_433_PIN 2
#define TX_433_PIN 4

#define TH_SENSOR_DEVICE_ID 0x30
#define DHT_PIN 5 
#define DHT_TYPE DHT11

#define IR_TX_PIN 3

#define LIGHT_SENSOR_DEVICE_ID 0x40
#define PHOTOCELL_PIN 0

PI433 receiver(RX_433_PIN);
ArduinoTHSensor arduinoTHSensor(TH_SENSOR_DEVICE_ID, DHT_PIN, DHT_TYPE, TX_433_PIN);
IRSend2262 irMessageTransmitter(IR_TX_PIN);
ArduinoLightSensor arduinoLightSensor(LIGHT_SENSOR_DEVICE_ID, PHOTOCELL_PIN, TX_433_PIN);

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  Serial.println("Started\n");

  Device2262n* device2262 = new Device2262n(350,50,4);
  device2262->registerMessageHandler(&irMessageTransmitter);
  receiver.registerDevice(device2262);
}

// the loop function runs over and over again forever
int counter = 0;
void loop() {
  if (counter == SEND_INTERVAL_MULTIPLIER) {
     // reading the temperature takes some time so in this case
     // no need to delay
     arduinoTHSensor.sendMessage();
     arduinoLightSensor.sendLightReading();
     counter = 0;
  } else {
    delay(IR_CHECK_INTERVAL);
  }
  receiver.handleMessage();
  counter++;
}



