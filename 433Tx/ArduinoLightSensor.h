// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _ARDUINO_LIGHT_SENSOR
#define _ARDUINO_LIGHT__SENSOR

#include "TXDevice.h"

class ArduinoLightSensor : public TXDevice {
   public:
      ArduinoLightSensor(char deviceCode, int lightPin, int txPin);
      int sendLightReading();

   private:
      char _deviceCode;
      int _lightPin;
      void sendSync(void);
      void sendByte(char byte);
      void addChecksum(char* bytes);
      void sendMessageOut(char* bytes);
};

#endif
