// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _DEVICE2272
#define _DEVICE2272

#include "TXDevice.h"

#define NUM_CHARS_IN_MESSAGE 12

class Device2272 : public TXDevice {
   public:
      Device2272(int pin, int pulseWidth);
      int sendMessage(char* message);

   private:
      int sendTristate(char tristateValue);
      int _pulseWidth;
};

#endif
