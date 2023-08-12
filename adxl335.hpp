#ifndef _ADXL335_H
#define _ADXL335_H
#include <Arduino.h>
class ADXL335{
    public:
    ADXL335(int pinX,int pinY, int pinZ);
    void begin();
    int getRawX();
    int getRawY();
    int getRawZ();
    private:
    int _pinX;
    int _pinY;
    int _pinZ;
};

#endif
