// Copyright 2014-2015 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

#include "TXDevice.h"

TXDevice::TXDevice() {
   _txpin = -1;
}

void TXDevice::sendPulseLowHigh(int lowDuration, int highDuration) {
   // seems that output from transmitter is inverse of what pin is set to
   digitalWrite(_txpin, HIGH );
   delayMicroseconds(lowDuration);
   digitalWrite(_txpin, LOW);
   delayMicroseconds(highDuration);
}

void TXDevice::sendPulseHighLow(int highDuration, int lowDuration) {
   // seems that output from transmitter is inverse of what pin is set to
   digitalWrite(_txpin, LOW );
   delayMicroseconds(highDuration);
   digitalWrite(_txpin, HIGH);
   delayMicroseconds(lowDuration);
   // seems like we better end up on LOW or we end up jamming the airwaves
   // low must allow transmitter to float as needed
   digitalWrite(_txpin, LOW);
}
