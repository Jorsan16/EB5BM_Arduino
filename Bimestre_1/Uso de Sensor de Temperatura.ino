
#include <OneWire.h> //Incluye libreria de protocolo de comunicacion One-Wire
#include <DallasTemperature.h> //Incluye libreria para el uso de sensor de temperatura

#define ONE_WIRE_BUS 7 //asigna al pin 7 del arduino para que nos pase el dato de temperatura
OneWire oneWire(ONE_WIRE_BUS); //En la libreria OneWire se le asigna en que pin se va a estar realizando la comunicacion
DallasTemperature sensors(&oneWire); //Se le asigna al objeto (Sensors) el pin donde se utiliza el protocolo One-Wire

void setup(void){

  Serial.begin(9600);
  sensors.begin(); //Inicializa la libreria DallasTemperature

}

void loop(void){ 

  sensors.requestTemperatures();  //Envia una solicitud al sensor para ver que temperatura nos devolvera el sensor
  float tempC = sensors.getTempCByIndex(0); //asignamos a la variable "tempC" la lectura en el sensor 
  Serial.println(tempC); //mostramos los valore mostrados en la variable tempC
  delay(1000);

}


