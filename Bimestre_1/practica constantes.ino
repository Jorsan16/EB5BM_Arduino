//int Pot = A1 const int Pot= A1
#define Pot A1
//int Led = 3 const int Led = 3
#define Led 3 	
#define OutPin(pin) pinMode(pin, OUTPUT)
#define InPin(pin) pinMode(pin, INPUT)
#define Lectura(pin) analogRead(pin)
#define WAnalog(pin, b) analogWrite(pin, b)

int brillo; //brillo no se puede poner como constante porque varia el valor

void setup() {
Serial.begin(9600);

 OutPin(Led); //pinMode(3, OUTPUT)
 InPin(Pot);	//pinMode(A1, INPUT)

}

void loop() {
brillo = Lectura(Pot)/4; //analogRead(Pot)/4;
  WAnalog(Led, brillo); //analogWrite(Led, brillo);
  delay(100);


}
