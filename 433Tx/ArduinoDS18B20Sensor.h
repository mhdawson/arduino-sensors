// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _ARDUINO_DS18B20_SENSOR
#define _ARDUINO_DS18B20_SENSOR

#include "TXDevice.h"
#include <OneWire.h>
#include <DallasTemperature.h>

class ArduinoDS18B20Sensor : public TXDevice {
   public:
      ArduinoDS18B20Sensor(char deviceCode, int tempPin, int txPin);
      int sendTemp();

   private:
      void* _tempSensors;
      char _deviceCode;
      void sendSync(void);
      void sendByte(char byte);
      void addChecksum(char* bytes);
      void sendMessageOut(char* bytes);
};

#endif
