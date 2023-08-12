
#include "adxl335.hpp"
#define ADC_STEPS       1024
#define ADC_REFERENCE   5
ADXL335::ADXL335(int pinX, int pinY, int pinZ)
{
    _pinX = pinX;
    _pinY = pinY;
    _pinZ = pinZ;
}
/**
 * @brief Get the raw X axis value
 * 
 * @return int 
 */
int ADXL335::getRawX()
{
    int xRaw = analogRead(_pinX);
    return xRaw;
}
/**
 * @brief Get the raw Y axis value
 * 
 * @return int 
 */
int ADXL335::getRawY()
{
    int yRaw = analogRead(_pinY);
    return yRaw;
}
/**
 * @brief Get the raw Z axis value
 * 
 * @return int 
 */
int ADXL335::getRawZ()
{
    int zRaw = analogRead(_pinZ);
    return zRaw;
}
/**
 * @brief Initialize the input pins 
 * 
 */
void ADXL335::begin()
{
    pinMode(_pinX, INPUT);
    pinMode(_pinY, INPUT);
    pinMode(_pinZ, INPUT);
}
