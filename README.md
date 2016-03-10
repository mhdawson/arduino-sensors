# Aduino Sensors/Controllers

This project provides components for building Arduino based
sensors/controller, initially using the following projects
to bridge into the home monitoring/control logic:

* [PI433WirelessRecvManager](https://github.com/mhdawson/PI433WirelessRecvManager)
* [PI433WirelessTXManager](https://github.com/mhdawson/PI433WirelessTXManager)

The components are located within:

* arduino-sensors/433Tx
* arduino-sensors/443Rx
* arduino-sensors/IR

These can be combined in order to build specific sensors that combine
one or more of the sensor/controller capabilities

# Examples

Sample sensors built from these components include:

* [DoorAndTempSensor](https://github.com/mhdawson/arduino-sensors/tree/master/DoorAndTempSensor)
* [DHTSensor](https://github.com/mhdawson/arduino-sensors/tree/master/DHTSensor)
* [ACRemote](https://github.com/mhdawson/arduino-sensors/tree/master/ACRemote)
* [LightSensor](https://github.com/mhdawson/arduino-sensors/tree/master/LightSensor)


