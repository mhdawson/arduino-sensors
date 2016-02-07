# DoorAndTemp Sensor

This sensor provides a DHT based temperature and humidity sensor.
It is the sensor part of what will be my humidifier controller
for the basement.

To receive the data from these sensors use the following from the
[PI433WirelessRecvManager](https://github.com/mhdawson/PI433WirelessRecvManager) project:

* ArduinoTHSensor


It uses the following sensors from arduino-sensors/433Tx

* ArduinoTHSensor

to implemenent the arduino sensor.


# Configuration

The following constants can be adjusted to fit your build
and configuration

* TH_SENSOR_DEVICE_ID - The device id assigned to the sensor. If
  you have multiple sensors make this unique 
* DHT_PIN 2 - the digital pin to which the DHT device is wired
* TRANSMIT_INTERVAL_SECONDS - The interval at which the sensor sends
                              updates.  In addition the sensor
                              will send an update when the door
                              open/close state changes

# Building

To build you need to do the following:

* Create a new directory called DHTSensor
* Copy DHTSensor.ino into the directory
* Copy either the specific files referenced in DHTSensor.ino
  from arduino-sensors/433Tx or the whole directory
* Open DHTSensor.ino with the Arduino GUI,
  build and then flash into the Arduino

# Schematic

The following is the schematic for the sensor hardware that I
used:

![schematic](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/DHTSensor_diag.jpg)

# Pictures

The following are a few pictures of my build:

tdb.

# Main Components

* [433Mhz Transmitter](http://www.ebay.ca/itm/280909343896?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [DHT11 Temp/humidity sensor](ww.ebay.ca/itm/262136732897?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [Arduino Nano] (http://www.ebay.ca/itm/291185213328?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)


