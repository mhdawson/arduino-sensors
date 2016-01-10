// Copyright 2014-2015 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#ifndef _TXDEVICE
#define _TXDEVICE
#include <Arduino.h>
#include <string.h>

class TXDevice {
   private:
      int _txpin; 
 
   protected:
      void sendPulseHighLow(int highDuration, int lowDuration);
      void sendPulseLowHigh(int lowDuration, int highDuration);

   public:
      TXDevice();

      void setTxPin(int txpin) {
         _txpin = txpin;
         pinMode(_txpin, OUTPUT);
      }

      // must be implemented by subclass
      virtual int sendMessage(char* message) {};
};

#endif
