//Uso de Interrupciones Por Software

//*******************LIBRERIAS******************
#include <Ticker.h>  //Libreria que me permite hacer uso de las interrupciones por timer

void Evento(void);   //Funcion que no posee retorno, ni parametros.


Ticker Interrupcion(Evento, 3000);  //Cada 3 segundos, realiza una interrupcion


void setup(){
	Serial.begin(9600);    //Inicio la comunicacion serial	
	Interrupcion.start();   //Inicializa la libreria y las interrupciones por software
}

void loop(){
	Interrupcion.update(); //Actualiza la libreria para poder mantener la interrupcion al pendiente

  digitalWrite(13,HIGH); //programa principal
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);

}

void Evento(void){ //Funcion del evento a realizar con la interrupcion
	Serial.println("Hubo una interrupcion");
}