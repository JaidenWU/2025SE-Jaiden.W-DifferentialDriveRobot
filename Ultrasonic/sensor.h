#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    virtual long readSensor() = 0;
    virtual int readLeftSensor() = 0;
    virtual int readRightSensor() = 0;
    virtual bool determineState() = 0;
};

#endif