const float Factor = 1.25; // Constante del Factor de Lectura
int lectura = 0; //Guardar La lectura hecha por el sensor

void setup() {
Serial.begin(9600); // Inicializamos la comunicacion Serial
}

void loop() {
lectura = analogRead(A0); //Para hacer la lectura del pin A0
float voltaje =  (25*lectura*Factor)/1023; // Conversion de lectura analogica a valores de medicion
Serial.print("Voltaje medido =  ");
Serial.print(voltaje); // Muestra en el monitor serial la lectura
Serial.println("V");
delay(250);
}
