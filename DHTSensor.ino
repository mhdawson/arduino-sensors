#include "DHT.h"
#include "ArduinoTHSensor.h"

#define TX_433_PIN 3

#define TH_SENSOR_DEVICE_ID 0x21
#define DHT_PIN 2 
// Selecct the DHT type attached to your arduino 
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Use ArduinoTHSensor 2 if using DHT22 or DHT21, ArduinoTHSensor is fine for DHT11
//ArduinoTHSensor2 arduinoTHSensor(TH_SENSOR_DEVICE_ID, DHT_PIN, DHTTYPE, TX_433_PIN);
ArduinoTHSensor arduinoTHSensor(TH_SENSOR_DEVICE_ID, DHT_PIN, DHTTYPE, TX_433_PIN);

void setup() {
  Serial.begin(9600);
  Serial.println("Staring sensor loop");
}

void loop() {
  arduinoTHSensor.sendMessage();
  Serial.println("Sent Message");
  delay(30000);
}
