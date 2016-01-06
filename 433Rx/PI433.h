// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _PI433
#define _PI433

#include "Device.h"

class PI433 {
   public:
      PI433(int interrupt);
      void handleMessage();
      bool registerDevice(Device* newDevice);

   private:
      Message _lastHandledMessage;
      static void handleInterrupt();
};

#endif
