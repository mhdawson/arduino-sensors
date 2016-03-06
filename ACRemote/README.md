# ACRemote

This is actually a remote for our split air conditioner along with
a number of sensors that are useful in the same room.  It has the 
ability to control the AC through IR as well as the sensors to 
capture the temperature, humidity and light level in the room

To receive the data from these sensors use the following from the
[PI433WirelessRecvManager](https://github.com/mhdawson/PI433WirelessRecvManager) project:

* ArduinoLightSensor 
* ArduinoTHSensor

To send command to the AC use the following from the 
[PI433WirelessTXManager](https://github.com/mhdawson/PI433WirelessTXManager) project:

* Device2272


It uses the following from arduino-sensors/433Rx to received the IR commands

* Device2262n


It uses the following from arduino-sensors/433Tx for the sensors:

* ArduinoLightSensor
* ArduinoTHSensor

# Configuration

The following constants can be adjusted to fit your build
and configuration

* IR_CHECK_INTERVAL        - The interval at which it checks for new IR
                             commands

* SEND_INTERVAL_MULTIPLIER - The multiplier for how often sensor data is 
                             sent.  The sensors will send an update
                             every IR_CHECK_INTERVAL * SEND_INTERVAL_MULTIPLIER
                             milliseconds

* RX_433_PIN               - digital pin to which the receiver is connected

* TX_433_PIN               - digital pin to which the 433Mhz transmitter is connected

* DHT_PIN                  - digital pin to which the DHT sensor is connected

* IR_TX_PIN                - digital pin to which the IR transmitter is connectd

* PHOTOCELL_PIN            - analog pin to which the light sensor is connected

* TH_SENSOR_DEVICE_ID      - The id for the TH sensor, if you have more than 
                             one of these sensor make shure this is unique0

* LIGHT_SENSOR_DEVICE_ID   - device id assigned to the light sensor. If you have more
                             than one of these make sure this id is unique

In addition you will need to configure for the IR codes for the device you want to control.
Instructions for how to do this with LIRC are outlined (or will be) in the arduino-sensors/IR
subdirs and then manage the message to IR code mapping in IRSend2262 (also in arduino-sensors/IR).

# Building

To build you need to do the following:


* Add the [DHT-Sensor-library](https://github.com/adafruit/DHT-sensor-library) 
  as a library in your Arduino GUI 
* Create a new directory called ACRemote
* Copy ACRemote.ino into the directory
* Copy either the specific files referenced in ACRemote.ino
  from arduino-sensors/433Tx or the whole directory
* Copy either the specific files referenced in ACRemote.ino
  from arduino-sensors/433Rx or the whole directory
* Copy either the specific files referenced in ACRemote.ino
  from arduino-sensors/IR or the whole directory
* Open ACRemote.ino with the Arduino GUI,
  build and then flash into the Arduino

# Schematic

The following is the schematic for the sensor hardware that I
used:

![schematic](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/ACRemote_diag.jpg)

# Pictures

The following are a few pictures of my build:

![picture1](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/ACRemote.jpg)
![picture2](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/ACRemote2.jpg)

# Main Components

* [433Mhz Transmitter](http://www.ebay.ca/itm/280909343896?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [433Mhz Receiver - RBX6](http://www.ebay.ca/itm/321557609019?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [DHT11 Temp/humidity sensor](ww.ebay.ca/itm/262136732897?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [Arduino Nano] (http://www.ebay.ca/itm/291185213328?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [IR Sensor] details to come
* [Light Sensor - 5516 GL5516 NT00183] (http://www.ebay.ca/itm/20Pcs-Light-Sensitive-Inductor-Photo-Resistor-Photoresistor-5516-GL5516-NT00183-/261420488934?hash=item3cdde018e6)


