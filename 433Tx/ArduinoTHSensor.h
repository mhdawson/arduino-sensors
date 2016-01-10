// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _ARDUINO_TH_SENSOR
#define _ARDUINO_TH_SENSOR

#include "Device.h"

class ArduinoTHSensor : public TXDevice {
   public:
      ArduinoTHSensor(char deviceCode);
      int sendMessage(int temp, int humidity);

   private:
      char _deviceCode;
      void sendSync(void);
      void sendByte(char byte);
      void addChecksum(char* bytes);
      void sendMessageOut(char* bytes);
};

#endif
