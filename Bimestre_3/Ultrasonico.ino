#define Trig 8
#define Echo 9
float DURACION;
float DISTANCIA;
void setup() {
pinMode(Trig, OUTPUT);
pinMode(Echo, INPUT);
Serial.begin(9600);

}

void loop() {
  digitalWrite(Trig, HIGH);
  delay(1);
  digitalWrite(Trig, LOW);
  DURACION = pulseIn(Echo, HIGH);
  DISTANCIA = DURACION *0.0343/2;
  Serial.println(DISTANCIA);
  delay(200);
}
