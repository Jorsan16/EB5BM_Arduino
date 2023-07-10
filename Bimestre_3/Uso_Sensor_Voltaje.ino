const float Factor = 1.25;
int lectura = 0;
void setup() {
Serial.begin(9600);
}

void loop() {
lectura = analogRead(A0);
float voltaje =  (25*lectura*Factor)/1023;
Serial.print("Voltaje medido =  ");
Serial.print(voltaje);
Serial.println("V");
delay(250);
}
