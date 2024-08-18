#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    virtual int readSensor() = 0;
    virtual bool determineState() = 0;
};

#endif