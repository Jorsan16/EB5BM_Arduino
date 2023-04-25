#include <Keypad.h>

const int FILAS = 4;
const int COLUMNAS= 4;
char keys[FILAS][COLUMNAS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte pinesFila[FILAS]={9,8,7,6};
byte pinesColumna[COLUMNAS]={5,4,3,2};

Keypad teclado=Keypad(makeKeymap(keys), pinesFila, pinesColumna,FILAS,COLUMNAS);

char teclaPrecionada;

char pass[4]="123"; //Poner en el arreglo 1 posicion mas a la que tendra la contraseña correcta
char ingresaPass[4]; // tiene que tener el mismo tamaño del arreglo de la contraseña correcta
int indice=0;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
  teclaPrecionada=teclado.getKey(); //detecta que en el teclado se pulso un boton
  if(teclaPrecionada){
    ingresaPass[indice]=teclaPrecionada; // le asigna lo que ingresamos a el arreglo que va a ser comparado
    indice++; //cambiara la posicion del arreglo para poder asignar los caracteres
    Serial.print(teclaPrecionada);
  }
  if(indice==3){ //cuando se llegue al limite del arreglo verificara si esta correcta o no la contraseña
    if(strcmp(pass,ingresaPass)==0){ //Verifica que la contraseña esta correcta
      Serial.println(" Acceso permitido");
    }
    else{
      Serial.println(" Acceso denegado");
    }
    indice=0;
  }
}



