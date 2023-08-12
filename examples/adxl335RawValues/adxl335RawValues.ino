#include <adxl335.hpp>

ADXL335 adxl335(A0,A1,A2);    //X,Y,Z pins 
void setup() {
  // put your setup code here, to run once:
  adxl335.begin();
  Serial.begin(9600);

}

void loop() {
  int x = adxl335.getRawX();
  int y = adxl335.getRawY();
  int z = adxl335.getRawZ();
  Serial.println("Values of x,y,z");
  Serial.println(x);
  Serial.println(y);
  Serial.println(z);
  delay(5000);
  // put your main code here, to run repeatedly:

}
