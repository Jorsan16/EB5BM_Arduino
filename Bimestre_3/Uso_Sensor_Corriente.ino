const float Factor_1 = 0.185; //Factor de Medicion para lectura de -5A a 5A
const float Factor_2 = 0.1; //Factor de Medicion para lectura de -20A a 20A
const float Factor_3 = 0.066; //Factor de Medicion para lectura de -30A a 30A
int Lectura = 0; // Lectura del pin A////7ds l0
double Corriente = 0; //Guarda el valor de la corriente leida en el sensor
float voltajeSensor = 0; //guarda los valores de 0 a 5 

void setup() {
  Serial.begin(9600); //Inicializa la comunicacion Serial
}

void loop() {
  Lectura = analogRead(A0); //Leer el pin analogico
  voltajeSensor = (Lectura*5.0) / 1023.0; //lectura del sensor   
  Corriente = (voltajeSensor - 2.5)/Factor_3; //Ecuación  para obtener la corriente
  Serial.print("Corriente: ");
  Serial.print(Corriente,3); 
  Serial.println(" A"); 
  delay(200);     
}
