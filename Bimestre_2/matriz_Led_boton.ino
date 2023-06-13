#include "LedControl.h" 	

LedControl MATLED = LedControl(11,13,10,1);	// crea objeto

#define demora 500		

byte caracter[8] = {		//Arreglo para mostrar el numero 1		
0x0, 0x18, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3c
};

byte caracter_2[8] = { //Arreglo para mostrar el numero 2
 0x0, 0x3c, 0x42, 0x4, 0x8, 0x10, 0x20, 0x7e
};


void setup() {
  MATLED.shutdown(0,false);			// enciende la matriz
  MATLED.setIntensity(0,4);			// establece brillo
  MATLED.clearDisplay(0);			// blanquea matriz
}

void loop(){

     for(int a = 0; a < 7; a++){
        mostrar();				
        delay(demora);
        mostrar_2();
        delay(demora);    
     }
}

void mostrar(){			// funcion mostrar_1
  for (int i = 0; i < 8; i++)  		// bucle itera 8 veces por el array
  {
    MATLED.setRow(0,i,caracter[i]);		// establece fila con valor de array cero en misma posicion
  }
}

void mostrar_2(){
    for (int i = 0; i < 8; i++)  		// bucle itera 8 veces por el array
  {
    MATLED.setRow(0,i,caracter_2[i]);		// establece fila con valor de array cero en misma posicion
  }
}
