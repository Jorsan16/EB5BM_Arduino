#include <SoftwareSerial.h>	

SoftwareSerial miBT(10, 11); 	// pin 10 como RX, pin 11 como TX

char DATO = 0;			// variable para almacenar caracter recibido
int LEDROJO = 13;		// LED rojo a pin digital numero 2

void setup(){
  miBT.begin(9600);		// comunicacion serie entre Arduino y el modulo a 38400 bps
  Serial.begin(9600);
  pinMode(LEDROJO, OUTPUT);	// pin 2 como salida
  pinMode(LEDVERDE, OUTPUT);	// pin 3 como salida
}

void loop(){
if (miBT.available() > 0){    	// si hay informacion disponible desde modulo
  DATO = miBT.read();		// almacena en DATO el caracter recibido desde modulo
  Serial.println(DATO);
  
  if( DATO == '1' )		// si el caracter recibido es el numero 1
  digitalWrite(LEDROJO, HIGH);	// enciende LED rojo

  if( DATO == '2' )		// si el caracter recibido es el numero 2
  digitalWrite(LEDROJO, LOW);	// apaga LED rojo
}
}
