# Light Sensor

This sensor provides a light sensor which I use to make sure
that when lights are turned off they actually went off.

To receive the data from these sensors use the following from the
[PI433WirelessRecvManager](https://github.com/mhdawson/PI433WirelessRecvManager) project:

* ArduinoLightSensor


On the arduino side the project uses the following sensors
from arduino-sensors/433Tx:

* ArduinoLightSensor


# Configuration

The following constants can be adjusted to fit your build
and configuration

* SENSOR_SEND_INTERVAL - interval at which the sensor sends out updates 
  in milliseconds

* PHOTOCELL_PIN            - analog pin to which the light sensor is connected

* TH_SENSOR_DEVICE_ID      - The id for the TH sensor, if you have more than 
                             one of these sensor make shure this is unique0

* LIGHT_SENSOR_DEVICE_ID   - device id assigned to the light sensor. If you have more
                             than one of these make sure this id is unique

# Building

To build you need to do the following:

* Create a new directory called LightSensor 
* Copy LightSensor.ino into the directory
* Copy either the specific files referenced in LightSensor.ino
  from arduino-sensors/433Tx or the whole directory
* Open LightSensor.ino with the Arduino GUI,
  build and then flash into the Arduino

# Schematic

The following is the schematic for the sensor hardware that I
used:

![schematic](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/lightSensor_diag.jpg)

# Main Components

* [433Mhz Transmitter](http://www.ebay.ca/itm/280909343896?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [Light Sensor - 5516 GL5516 NT00183] (http://www.ebay.ca/itm/20Pcs-Light-Sensitive-Inductor-Photo-Resistor-Photoresistor-5516-GL5516-NT00183-/261420488934?hash=item3cdde018e6)



