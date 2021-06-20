  
/********************************************************
 * Original -- Quizz. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: conocer el conocimiento de la persona del for. *
 * *
 * Usage: *
 * simplemente es seguir las instrucciones que te va indicando el programa. *
 ********************************************************/
#include <stdio.h>

int main(void) {
  int b;
  float trash;
  printf("este es un resumen de for, si queremos leer numeros de Mayor a menor se debe poner for (i=b;i>=0;i--) , dame un numero para mostrartelo\n");
  scanf("%d",&b);
  printf("\n");
  int i;
  for (i=b;i>=0;i--){
    printf("%d\n",i); //Doy retro del for y pongo un ejemplo de como se aplica este y su condicion mas importante
  }
  printf("si quieres que sea de menor a mayor es (i=0;i<=b;i++), dame un numero para mostrartelo\n");
  scanf("%d",&b);
   printf("\n");
  for (i=0;i<=b;i++){
    printf("%d\n",i); //se hace la cuenta reversiva
  }
  printf("i=algun numero o variable es en donde inicias, la i<= algun numero significa en donde quiero terminar, y i++ o -- es para subir o bajar la condicion (pulsa cualquier tecla para continuar)\n");
  scanf("%f",&trash); //solo quuiero avanzar, no me importa la variable de trash
  printf("\n");
  printf("vamos a ver que tanto aprendiste, tienes 2 intentos\n");
int n = 0;
  printf("cual es el incremento de la funcion?(tienes incisos, selecciona el correcto del 1 al 5\n");
  printf("1.- --\n");
  printf("2.- +\n");
  printf("3.- ++\n");
  printf("4.- -\n");
  printf("5.- ninguna es correcta\n");
  int Q;
  for (i=0;i<2;i++){
    scanf("%d",&Q);
    if (Q == 3) {printf("correcto\n");
    n=n+1; //se realiza una pregunta con 2 oportunidades la cual, si aciertas se te agrega un punto a puntaje final, de lo contrario, no sera asi
    break;}
    else if (i==0){printf("intenta de nuevo\n");}
    else if (i==1){printf("incorrecto\n");
    printf("la respuesta es 3.-++ \n");}
  }
  printf("\n");
  printf("si yo quiero hacer una cuenta regresiva, donde debo iniciar y debo terminar la variable?(tienes incisos, selecciona el correcto del 1 al 5\n");
  printf("1.- la inicializacion en el primer bloque es la variable propuesta asi como en el segundo bloque se pondra esa variable\n");
  printf("2.- la inicializacion en el primer bloque es la variable propuesta, en el segundo bloque se pone el numero a donde quiero llegar \n");
  printf("3.- Ambos bloques deben llevar numero, aun que pida una variable, siempre iran numeros \n");
  printf("4.- No se puede debido a que esta funcion no puede realizar estas funciones\n");
  printf("5.- Se puede de la manera 1,2 y 3 anteriormente propuesta \n");

  for (i=0;i<2;i++){
    scanf("%d",&Q);
    if (Q == 2) {printf("correcto\n");
    n=n+1;
    break;} //se realiza una pregunta con 2 oportunidades la cual, si aciertas se te agrega un punto a puntaje final, de lo contrario, no sera asi
    else if (i==0){printf("intenta de nuevo\n");} 
    else if (i==1){printf("incorrecto\n");
    printf("la respuesta es 2.- la inicializacion en el primer bloque es la variable propuesta, en el segundo bloque se pone el numero a donde quiero llegar \n");}
  }
   printf("\n");
   printf("El for es una funcion? pon 1 si es verdadero y 2 si es falso\n");
  printf("1.- Verdadero\n");
  printf("2.- Falso \n");
  for (i=0;i<2;i++){
    scanf("%d",&Q);
    if (Q == 1) {printf("correcto\n");
    n=n+1;
    break;} //se realiza una pregunta con 2 oportunidades la cual, si aciertas se te agrega un punto a puntaje final, de lo contrario, no sera asi
    else if (i==0){printf("incorrecto\n");
    printf("la respuesta es 1.- Verdadero \n");}
  }
   printf("\n");
   printf("4.- todos se pueden hacer con for, menos 1 ¿cual es?\n");
  printf("1.- Me gustaria saber todos los numeros que estan entre 2 y 100, pero no quiero escribir :(\n");
  printf("2.- llegue tarde a clase y me pusieron a escribir 100 veces (no debo llegar tarde), pero quiero irme a jugar fut, quiero hacer esta tarea en un segundo :) \n");
  printf("3.- quiero hacer 100 sumas distintas para meter 100 numeros, pero necesito terminar esta programacion lo mas rapido posible\n");
  printf("4.- Tengo una tarea de resistencias en serie, y para conseguir la resistencia total, debo sumar todas las resistencias existentes en el circuito, pero no quiero pensar, ya quiero irme a jugar \n");
  printf("5.- quiero imprimir los numeros que quiera, pero cuando un numero sea multiplo de 3, escriba Buzz\n");
  for (i=0;i<2;i++){
    scanf("%d",&Q);
    if (Q == 5) {printf("correcto\n");
    n=n+1;
    break;} //se realiza una pregunta con 2 oportunidades la cual, si aciertas se te agrega un punto a puntaje final, de lo contrario, no sera asi
    else if (i==0){printf("intenta de nuevo \n");}
    else if (i==1){printf("intenta de nuevo \n");
    printf("la respuesta es 5.- quiero imprimir los numeros que quiera, pero cuando un numero sea multiplo de 3, escriba Buzz\n");}
  }
  printf("\n");
printf("tu resultado fue %d de 4",n); //te doy tu puntuacion final

  return 0;
}
