// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include "IRSend2262.h"
#include "IRSender.h"

IRSend2262::IRSend2262(int irPin) {
   _irsender = new IRSender(irPin);
}

void IRSend2262::handleMessage(Message* message) {
   if (strncmp(message->text, "0F0FFFFF0101", 12) == 0) {
      _irsender->sendIrCode(off_cmd, sizeof(off_cmd)/sizeof(off_cmd[0]));
   } else if (strncmp(message->text, "0F0FFFFF0110",12) == 0) {
      _irsender->sendIrCode(on_22, sizeof(on_22)/sizeof(on_22[0]));
   }
}
