//#define Led 12
//#define On(pin) digitalWrite(pin, HIGH)
//#define Off(pin) digitalWrite(pin, LOW)

void Mostrar(int a){
	Serial.println(a);
}

void PinOn(int a){
 digitalWrite(a, HIGH);
}

void PinOff(int a){
digitalWrite(a, LOW);
}

/*void Encender(){
  On(Led);
  delay(1000); 
  Off(Led);
  delay(1000); 
}*/

void setup(){
  //pinMode(Led, OUTPUT);
  Serial.begin(9600);
  Mostrar(15);
}




void loop(){
	//Encender();
  PinOn(12);
  delay(1000);
  PinOff(12);
  delay(1000);
  
}
