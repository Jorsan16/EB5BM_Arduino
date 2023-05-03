
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 7
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void){

  Serial.begin(9600);
  sensors.begin();

}

void loop(void){ 

  sensors.requestTemperatures(); 
  float tempC = sensors.getTempCByIndex(0);
  Serial.println(tempC);
  delay(1000);

}


