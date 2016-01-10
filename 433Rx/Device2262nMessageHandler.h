// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _DEVICE2262N_DEVICE_MESSAGE_HANDLER
#define _DEVICE2262N_DEVICE_MESSAGE_HANDLER

#include "Device.h"

class Device2262nMessageHandler {
   public:
      Device2262nMessageHandler() {};

      virtual void handleMessage(Message* message)= 0;

   private:
};

#endif
