// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _IRSEND2262_DEVICE
#define _IRSEND2262_DEVICE

#include "Device2262n.h"
#include "IRSender.h"

class IRSend2262 : public Device2262nMessageHandler {
   public:
      IRSend2262(int irPin);
      virtual void handleMessage(Message* message);

   private:
      IRSender* _irsender;
};

#endif
