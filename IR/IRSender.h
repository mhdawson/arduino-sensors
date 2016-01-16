// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _IR_SENDER
#define _IR_SENDER
#include <Arduino.h>
#include "IrCodes.h"

class IRSender {
   public:
      IRSender(int pin);
      void sendIrCode(const uint16_t* code, int length);

   private:
      char _pin;
      void sendPulse(int length);
};

#endif
