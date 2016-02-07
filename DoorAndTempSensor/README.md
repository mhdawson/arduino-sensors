# DoorAndTemp Sensor

This sensor combines the Door open/close sensor along with a temperature
sensor.  I used it to monitor the state of our garage door and
the temperature in the garage.

To receive the data from these sensors use the following from the
[PI433WirelessRecvManager](https://github.com/mhdawson/PI433WirelessRecvManager) project:

* ArduinoDS18B20Sensor
* Device2262n


# Configuration

The following constants can be adjusted to fit your build
and configuration

* TRANSMIT_INTERVAL_SECONDS - The interval at which the sensor sends
                              updates.  In addition the sensor
                              will send an update when the door
                              open/close state changes
* DS18B20_SENSOR_ID  - The devide id assigned to the sensor.  If you
                       have mnultiple sensors make this unique
                       for each one
* DEVICE_2272_ID     - The 2272 code used for this sensor. If you have 
                       multiple sensors make this unique for each one 
* OPEN_CLOSE_PIN     - the digital pin on which the door sensor is wired
* TEMP_PIN           - the digital pin on which the temp sensor is wired
* TXPIN              - the digital pin to which the transmitter is wired

# Building

To build you need to do the following:

* Create a new directory called DoorAndTempSensor
* Copy DoorAndTenmpSensor.ino into the directory
* Copy either the specific files referenced in DoorAndTempSensor.ino
  from arduino-sensors/433Tx or the whole directory
* Open DoorAndTempSensor.ino with the Arduino GUI,
  build and then flash into the Arduino

# Schematic

The following is the schematic for the sensor hardware that I
used:

![schematic](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/DoorAndTempSensor_diag.jpg)

# Pictures

The following are a few pictures of my build:

![picture1](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/DoorAndTempSensor.jpg)
![picture2](https://raw.githubusercontent.com/mhdawson/arduino-sensors/master/pictures/DoorAndTempSensor2.jpg)

# Main Components

* [433Mhz Transmitter](http://www.ebay.ca/itm/280909343896?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)
* [DS18B20 Temp Sensor](http://www.ebay.ca/itm/10PCS-Waterproof-Digital-Thermal-Probe-or-Sensor-DS18B20-/130702483183?hash=item1e6e799eef)
* [Door contact](http://www.ebay.ca/itm/5-Set-Recessed-Door-Window-Contact-Magnetic-Reed-Switch-Sensor-Security-Alarm-/381198534569?hash=item58c13407a9:g:U7IAAOSw-7RVCm9F)
* [Arduino Nano] (http://www.ebay.ca/itm/291185213328?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT)


