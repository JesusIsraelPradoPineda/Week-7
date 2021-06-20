/********************************************************
 * Ex05 -- numeros primos. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: ver si un numero es primo o no. *
 * *
 * Usage: *
 * ingresa el numero y el programa te dira si es o no. */
#include <stdio.h>
int verdad(int xd); //se definen las variables de entrada y salida

int main(void) {
  int xd; //defino la variable numero
  printf("Dime un número: \n"); //pido el numero y se guarda
  scanf("%d", &xd); 
  if (verdad(xd)) {
    printf("Es primo"); //se define como primo a numero que solo se puede dividir entre 1 y 0 sin dejar decimales
  } else {
    printf("No es primo"); //estos se pueden dividir con otros numero sin dejar decimales
  }
  return 0;
}

int verdad(int xd) {
  if (xd == 0 || xd 1) return 0; //se cumple la condicion y regresa al return 0
  if (xd == 4) return 0; //se cumple esta condicion y regresamos a retunr 0
  for (int x = 2; x < xd / 2; x++) {
    if (xd % x == 0) return 0; //se cumple la condicion y regresa a la variable de arriba
  }
  return 1;
}
