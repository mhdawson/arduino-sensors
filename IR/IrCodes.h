// Copyright 2014-2016 the project authors as listed in the AUTHORS file.
// All rights reserved. Use of this source code is governed by the
// license that can be found in the LICENSE file.

const uint16_t off_cmd[] PROGMEM = {
4530,4483,585,1634,579,519,
588,1628,590,1626,587,519,
588,523,584,1635,581,521,
588,518,588,1630,588,519,
587,520,587,1635,584,1625,
588,519,587,1630,587,520,
587,1634,581,1638,579,1625,
588,1625,593,519,588,1625,
588,1632,585,1625,586,521,
588,519,588,519,592,519,
588,1632,581,519,586,521,
594,1625,586,1627,587,1630,
611,502,583,518,588,519,
591,519,588,519,587,519,
588,520,587,517,595,1632,
581,1625,588,1630,588,1623,
591,1625,592,5291,4595,4450,
610,1605,612,494,588,1630,
597,1619,587,517,587,522.,
585,1630,588,519,586,520,
588,1637,576,524,583,523,
588,1625,588,1629,564,544,
563,1657,561,544,562,1650,
566,1649,567,1651,562,1657,
557,544,567,1651,563,1650,
563,1651,567,544,562,545,
563,544,567,540,566,1651,
562,545,562,545,597,1617,
566,1658,555,1652,566,540,
592,517,591,518,589,518,
587,520,588,525,586,518,
588,519,588,1624,591,1629,
587,1626,588,1632,583,1629,
587 }; 

const uint16_t on_17[] PROGMEM = {
4558,4436,623,1584,636,497,
620,1576,633,1581,631,483,
630,473,634,1583,634,472,
635,493,613,1591,626,473,
633,477,630,1582,635,1598,
620,473,633,1607,610,1579,
633,473,635,1602,615,1583,
630,1589,628,1583,632,1582,
634,1599,613,498,613,1586,
635,470,633,472,635,472,
634,477,634,471,634,473,
634,476,630,475,644,485,
613,495,611,495,616,473,
634,472,635,476,630,1582,
636,1588,628,1579,634,1600,
615,1604,612,1583,636,1583,
628,1582,636,5281,4579,4435,
627,1614,606,477,629,1583,
634,1583,631,492,619,493,
613,1591,627,471,634,473,
634,1581,636,473,634,476,
631,1611,606,1579,633,478,
632,1602,613,1583,634,471,
634,1590,625,1586,629,1584,
633,1584,630,1587,630,1600,
617,472,634,1583,630,477,
634,470,637,472,634,484,
626,494,613,472,634,477,
629,477,635,476,631,493,
613,476,634,473,635,471,
635,492,613,1604,612,1585,
634,1579,634,1583,634,1581,
632,1604,614,1599,618,1578,
634 };

const uint16_t on_18[] PROGMEM = {
4558,4466,601,1608,610,497,
612,1607,604,1610,608,498,
607,504,605,1609,608,498,
616,495,609,1604,609,496,
610,503,609,1604,609,1609,
618,489,609,1602,612,1608,
609,497,609,1611,607,1603,
611,1609,608,1605,609,1609,
606,1607,615,496,609,1604,
610,503,607,498,608,498,
610,502,604,502,609,498,
613,493,609,498,608,502,
609,1603,611,497,610,502,
608,498,609,498,616,1602,
609,1604,609,1608,610,497,
610,1608,607,1607,608,1609,
610,1605,608,5298,4567,4464,
599,1609,610,498,607,1609,
609,1606,608,508,603,498,
609,1602,610,503,609,497,
609,1609,605,502,609,529,
578,1604,609,1609,609,497,
609,1609,608,1607,608,502,
605,1607,634,1583,611,1603,
610,1609,609,1603,610,1606,
611,498,609,1604,613,498,
609,497,611,497,608,497,
610,503,608,498,610,497,
610,497,609,501,609,1633,
582,502,608,498,609,498,
608,499,608,1609,609,1603,
610,1609,610,497,609,1609,
609,1603,610,1609,609,1604,
610 }; 

const uint16_t on_19[] PROGMEM = {
4536,4484,578,1631,588,518,
588,1627,587,1629,588,519,
587,524,592,1633,572,523,
588,517,590,1630,583,523,
588,519,588,1630,584,1629,
584,523,588,1625,588,1628,
590,521,585,1627,587,1630,
588,1623,591,1629,584,1639,
579,1630,585,532,573,1630,
588,518,588,523,584,523,
583,524,589,517,587,524,
584,523,583,524,587,1625,
588,1630,581,526,588,518,
588,519,588,523,584,1629,
588,1624,590,523,583,522,
586,1629,588,1630,583,1629,
587,1630,586,5294,4569,4475,
591,1624,588,520,587,1628,
596,1620,588,518,588,519,
588,1630,587,520,585,522,
587,1636,603,499,608,498,
614,1600,609,1605,587,525,
582,1635,583,1625,588,522,
585,1630,587,1625,588,1636,
578,1628,565,1651,566,1651,
604,532,531,1660,557,545,
566,544,562,545,562,544,
563,544,563,544,565,543,
566,545,563,1650,562,1651,
568,543,563,545,562,544,
563,544,562,1658,560,1652,
562,542,564,545,567,1651,
587,1626,590,1638,574,1630,
588 }; 

const uint16_t on_20[] PROGMEM = {
4557,4438,629,1599,615,497,
613,1601,613,1600,613,478,
633,470,638,1607,606,476,
660,447,635,1583,630,477,
660,446,630,1584,640,1594,
614,477,633,1599,615,1600,
613,498,613,1607,606,1582,
632,1584,634,1583,630,1605,
614,1604,609,493,615,1603,
614,493,613,494,614,474,
632,493,613,499,613,472,
634,494,614,493,613,1584,
631,497,612,473,634,494,
613,494,613,498,613,1601,
611,1601,613,498,613,1578,
635,1606,608,1605,613,1599,
614,1585,632,5274,4589,4454,
607,1604,614,492,616,1599,
613,1611,607,493,614,493,
613,1582,636,494,612,473,
634,1584,636,491,614,474,
630,1586,631,1604,612,494,
613,1601,636,1561,633,477,
630,1600,613,1606,612,1599,
621,1598,614,1600,613,1580,
638,471,634,1601,619,487,
614,477,633,494,613,494,
612,478,632,491,613,498,
639,468,613,1606,608,478,
628,477,634,494,613,493,
614,494,612,1584,634,1599,
615,477,629,1583,635,1600,
613,1582,636,1607,607,1583,
630 };

const uint16_t on_21[] PROGMEM = {
4536,4490,574,1629,589,518,
587,1630,581,1633,588,519,
587,524,584,1631,586,519,
588,518,588,1630,584,523,
588,518,588,1631,582,1628,
591,518,588,1630,563,1651,
562,545,562,1655,564,1649,
563,1651,567,1648,565,1651,
562,1655,562,545,562,1649,
564,544,569,543,562,542,
565,544,562,545,567,540,
566,542,565,1651,562,1655,
563,552,554,545,562,542,
591,518,588,523,588,1625,
588,521,586,523,587,1624,
590,1626,588,1630,587,1626,
585,1640,580,5296,4572,4466,
590,1630,587,519,588,1632,
582,1627,590,519,588,519,
588,1629,585,522,587,521,
593,1620,586,523,584,523,
588,1630,583,1630,583,524,
594,1624,583,1630,583,524,
588,1628,585,1630,590,1628,
583,1630,581,1633,587,1630,
584,523,590,1624,587,522,
585,523,584,523,584,523,
584,522,584,528,583,525,
588,1622,586,1634,583,523,
583,524,583,524,583,527,
582,525,589,1625,583,523,
584,527,583,1631,580,1637,
580,1640,579,1630,581,1632,
587 };

const uint16_t on_22[] PROGMEM = {
4560,4469,598,1597,615,477,
630,1604,613,1607,606,498,
611,496,613,1605,610,496,
612,495,613,1611,602,496,
615,493,614,1605,608,1604,
613,494,612,1610,608,1602,
611,498,613,1600,614,1601,
612,1606,611,1605,609,1603,
610,1609,607,499,612,1604,
610,498,609,497,611,496,
613,497,609,498,609,498,
613,493,613,1606,613,1597,
615,1604,609,498,614,493,
613,497,609,496,611,1604,
615,498,608,497,609,498,
613,1604,607,1607,613,1611,
602,1604,614,5294,4566,4455,
612,1606,605,500,614,1604,
608,1605,612,498,609,498,
609,1610,608,497,609,497,
609,1603,614,497,609,496,
611,1605,612,1607,607,498,
609,1608,609,1604,613,494,
613,1613,600,1609,606,1608,
608,1608,610,1604,612,1603,
612,497,608,1605,614,497,
608,498,609,498,614,495,
611,504,603,498,608,498,
611,1607,608,1603,615,1604,
609,504,603,498,612,498,
609,498,609,1602,615,498,
609,497,609,498,613,1611,
602,1602,612,1608,608,1605,
613 }; 

const uint16_t on_23[] PROGMEM = {
4561,4453,613,1604,614,492,
640,1585,603,1603,612,498,
609,497,615,1598,613,498,
610,497,612,1611,606,494,
614,476,630,1603,614,1581,
632,498,612,1608,605,1605,
613,490,645,1553,634,1602,
611,1611,606,1602,616,1600,
613,1603,613,493,613,1602,
616,493,613,493,614,497,
614,492,613,477,630,497,
608,498,614,1607,605,499,
612,1600,613,498,613,470,
636,494,612,494,613,1607,
611,494,612,1604,612,495,
612,1604,613,1605,613,1599,
611,1606,613,5281,4577,4455,
611,1588,630,493,613,1605,
612,1602,611,498,612,494,
613,1604,613,494,613,493,
613,1581,636,493,613,498,
613,1606,607,1601,616,492,
614,1603,614,1600,614,496,
610,1601,616,1604,613,1599,
614,1604,610,1614,602,1603,
613,494,614,1603,613,494,
612,498,613,494,613,499,
607,493,614,498,613,492,
613,1603,610,498,613,1605,
608,505,606,494,613,497,
608,499,613,1600,612,498,
608,1605,612,504,601,1606,
613,1604,613,1600,613,1602,
616 };

const uint16_t on_24[] PROGMEM = {
4564,4458,604,1631,587,493,
613,1604,613,1601,612,504,
607,494,612,1605,613,493,
613,494,613,1604,613,493,
613,501,606,1605,612,1601,
613,493,613,1604,614,1609,
608,493,613,1605,609,1604,
614,1603,613,1600,613,1605,
612,1599,615,498,608,1604,
613,494,613,498,613,493,
610,496,613,494,613,498,
612,494,613,1604,608,499,
614,493,612,493,614,497,
613,494,612,494,613,1604,
615,490,616,1603,611,1603,
612,1605,613,1598,616,1603,
614,1606,607,5293,4593,4430,
613,1604,608,498,612,1608,
603,1610,612,492,613,498,
608,1602,615,495,612,505,
606,1601,612,493,613,498,
629,1585,612,1604,613,499,
607,1605,613,1597,616,496,
613,1600,613,1611,607,1581,
633,1603,614,1599,613,1604,
611,502,607,1604,613,494,
613,493,613,497,613,494,
623,484,614,497,612,500,
609,1598,612,498,613,493,
613,492,616,497,613,493,
613,494,612,1604,615,493,
612,1603,615,1599,614,1604,
613,1599,612,1606,614,1603,
609 };

const uint16_t on_25[] PROGMEM = {
4558,4462,605,1600,613,495,
615,1600,613,1611,606,494,
613,493,614,1601,616,494,
613,497,608,1605,612,500,
607,498,610,1603,614,1603,
613,493,613,1605,614,1605,
607,498,608,1604,638,1579,
613,1598,615,1607,612,1603,
609,1613,604,493,613,1603,
613,501,606,497,613,494,
613,493,611,496,614,496,
615,1598,613,1604,614,494,
614,492,613,497,615,492,
613,493,613,499,608,497,
613,494,613,1608,611,1599,
613,1604,613,1620,608,1592,
610,1605,608,5294,4578,4443,
616,1603,609,497,614,1597,
616,1604,613,494,612,498,
608,1605,610,495,615,497,
613,1601,612,493,618,493,
613,1598,615,1609,611,491,
612,1603,613,1599,615,498,
613,1600,612,1604,614,1599,
615,1604,612,1600,613,1605,
613,494,610,1607,613,494,
614,492,612,499,608,498,
613,493,611,495,614,1605,
613,1604,609,497,614,492,
613,493,614,498,609,496,
614,495,611,499,608,498,
613,1598,615,1604,612,1604,
611,1604,613,1601,612,1605,
612 };

const uint16_t on_26[] PROGMEM = {
613,1584,629,1602,616,493,
613,496,613,1603,613,492,
614,476,630,1602,616,493,
614,498,611,1600,614,1604,
612,494,614,1582,633,1600,
613,504,603,1602,616,1601,
615,1601,612,1604,611,1601,
614,1606,612,493,614,1604,
612,492,615,493,613,505,
607,493,612,494,613,498,
609,1602,616,1604,608,499,
611,1610,603,498,613,494,
611,500,608,498,613,495,
612,493,613,1611,606,494,
610,1608,609,1603,613,1605,
612,1604,609,5295,4569,4453,
613,1603,609,498,613,1606,
606,1604,613,491,616,497,
609,1604,613,498,608,498,
620,1595,612,497,609,498,
613,1604,608,1605,613,493,
617,1601,613,1600,614,496,
614,1600,610,1607,618,1595,
614,1603,613,1602,616,1599,
613,493,621,1597,612,494,
613,495,612,497,613,493,
614,497,609,498,613,1606,
607,1601,616,493,613,1604,
614,493,613,497,609,498,
610,497,613,493,613,498,
612,1600,614,493,614,1601,
616,1609,608,1599,612,1604,
613 } ;

const uint16_t on_27[] PROGMEM = {
4560,4453,607,1612,607,498,
612,1600,612,1610,611,515,
592,492,614,1614,602,493,
614,497,609,1605,611,496,
613,498,608,1611,606,1605,
612,494,620,1598,608,1605,
612,494,613,1612,606,1599,
614,1604,613,1605,607,1621,
597,1604,613,494,612,1600,
613,497,613,494,611,496,
613,496,616,492,613,494,
613,1604,613,493,611,496,
614,1603,613,501,606,493,
613,498,613,493,636,471,
614,1604,609,1604,612,506,
601,1602,618,1602,609,1604,
613,1604,612,5290,4570,4455,
612,1602,616,476,630,1605,
607,1606,612,493,613,499,
610,1621,594,499,608,498,
612,1590,624,497,611,495,
613,1601,612,1603,613,494,
613,1603,615,1600,612,498,
613,1600,613,1603,640,1582,
607,1603,613,1600,613,1602,
615,494,614,1610,606,493,
614,497,613,493,611,496,
613,498,608,499,612,1601,
612,504,603,498,611,1602,
614,497,612,472,635,493,
613,497,614,494,612,1598,
616,1603,614,493,613,1604,
614,1597,615,1612,605,1605,
613 };

const uint16_t on_28[] PROGMEM = {
4561,4456,611,1610,600,480,
634,1600,612,1605,613,493,
614,494,609,1608,613,493,
613,498,613,1599,613,494,
613,498,613,1600,613,1611,
607,493,612,1603,615,1600,
637,473,614,1600,613,1583,
633,1602,612,1584,634,1599,
613,1602,615,494,612,1605,
613,495,611,494,613,498,
610,497,613,493,612,499,
608,1605,612,494,613,498,
613,491,616,492,614,497,
609,498,619,487,613,493,
613,1602,616,1603,609,1604,
614,1588,628,1598,616,1582,
634,1600,614,5293,4572,4455,
609,1603,615,492,611,1603,
612,1610,607,494,613,498,
609,1601,616,493,613,498,
613,1600,613,504,603,498,
612,1598,615,1605,613,493,
613,1605,612,1598,616,498,
608,1604,613,1605,612,1599,
615,1610,607,1599,612,1605,
610,497,612,1604,614,499,
607,494,612,498,609,498,
612,491,616,498,613,1599,
613,494,613,497,616,492,
613,492,615,498,612,494,
612,494,639,467,614,1605,
612,1606,607,1604,613,1604,
610,1603,610,1627,597,1596,
614 };

const uint16_t on_29[] PROGMEM = {
4561,4455,612,1580,638,493,
612,1600,614,1604,613,494,
613,476,628,1606,614,493,
614,497,609,1603,614,476,
627,501,612,1600,621,1597,
612,494,613,1598,616,1604,
613,476,630,1590,627,1581,
632,1605,613,1604,608,1606,
612,1603,615,494,612,1583,
634,494,613,493,614,493,
611,484,629,473,633,494,
612,1605,613,493,614,1602,
615,472,634,494,613,498,
608,498,612,495,612,477,
630,1602,616,493,614,1603,
613,1581,632,1602,615,1598,
615,1604,613,5295,4564,4460,
608,1603,613,476,629,1606,
612,1607,607,498,613,493,
613,1598,615,497,614,493,
613,1584,637,491,612,494,
610,1607,609,1587,631,475,
630,1605,618,1596,612,498,
612,1585,630,1603,638,1573,
616,1583,634,1600,613,1604,
611,496,613,1604,620,487,
613,493,613,499,612,493,
611,496,614,476,629,1604,
614,495,617,1577,635,492,
614,494,613,498,613,493,
613,477,629,476,634,1599,
614,478,629,1605,612,1601,
613,1583,632,1591,624,1605,
614 };

const uint16_t on_30[] PROGMEM = {
4556,4462,599,1612,606,493,
612,1605,613,1622,601,495,
609,495,616,1610,602,498,
613,494,613,1604,608,496,
612,497,613,1604,609,1605,
612,494,613,1603,615,1604,
608,498,613,1606,607,1602,
615,1605,608,1604,613,1603,
611,1602,614,493,613,1604,
614,493,613,498,608,496,
616,493,615,493,613,497,
608,1606,612,493,613,1603,
615,1600,612,499,610,497,
612,494,613,498,610,496,
613,1600,613,498,609,499,
609,1607,606,1607,613,1604,
609,1604,613,5294,4565,4460,
608,1605,611,492,616,1603,
613,1607,606,497,614,494,
613,1602,612,497,612,494,
613,1609,603,498,614,493,
610,1607,608,1605,613,497,
609,1604,612,1607,608,498,
609,1605,612,1606,612,1606,
608,1603,613,1601,613,1602,
615,494,612,1611,607,494,
612,494,612,499,608,498,
613,494,612,494,613,1604,
613,500,607,1604,611,1602,
614,497,609,498,613,493,
613,493,614,505,604,1602,
613,497,609,497,614,1600,
614,1601,616,1606,607,1604,
613 };
