// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _ARDUINO_TH_SENSOR2
#define _ARDUINO_TH_SENSOR2

#include "DHT.h"
#include "TXDevice.h"

class ArduinoTHSensor2 : public TXDevice {
   public:
      ArduinoTHSensor2(char deviceCode, int sensorPin, uint8_t sensorType, int txPin);
      int sendMessage();

   private:
      char _deviceCode;
      DHT* _dht;
      void sendSync(void);
      void sendByte(char byte);
      void addChecksum(char* bytes);
      void sendMessageOut(char* bytes);
};

#endif
