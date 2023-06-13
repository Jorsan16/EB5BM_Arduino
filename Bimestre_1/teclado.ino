#include <Keypad.h>
#define FILAS 4
#define COLUMNAS 4

char keys[FILAS][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;
byte Filas[FILAS]={11,10,9,8};
byte Columnas[COLUMNAS] = {7,6,5,4};

Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS);

void setup()
{
 Serial.begin(9600); 
}

void loop(){
  key = teclado.getKey();
  
  if(key){
  Serial.println(key);
  }

  switch(key){
  case '1':
    Serial.println("Hola mundo");
   break;
   
  case '2':
    Serial.println("Soy un ejemplo");
   break;
  
  case '3':
    Serial.println("para el teclado");
    break;
  
  case '4':
    Serial.println("Matricial");
    break;
  }
}
