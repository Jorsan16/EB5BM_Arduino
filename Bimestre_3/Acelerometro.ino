#include <Wire.h> //Libreria I2C
#include <Adafruit_Sensor.h> // Libreria para Acelerometro
#include <Adafruit.ADXL345_U.h> //Libreria para Acelerometro

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified();
int Eje_X = 0;
int Eje_Y = 0;
int Eje_Z = 0;

void setup(void) {
Serial.begin(9600);
accel.begin();
}

void loop(void) {
sensors_event_t event;
accel.getEvent(&event);
Eje_X = event.acceleration.x;
Eje_Y = event.acceleration.y;
Eje_Z = event.acceleration.z;
  
Serial.print("X: "); Serial.print(Eje_X); Serial.print(" ");
Serial.print("Y: "); Serial.print(Eje_Y); Serial.print(" ");
Serial.print("Z: "); Serial.print(Eje_Z); Serial.println(" ");
delay(100);
}
