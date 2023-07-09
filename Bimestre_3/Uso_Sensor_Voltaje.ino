int Sensor = A0;

void setup() {
Serial.begin(9600);
}

void loop() {
  
float voltaje =  (float)25*analogRead(A0)/1023;
Serial.print("Voltaje medido =  ");
Serial.println(voltaje);
delay(500);
}
