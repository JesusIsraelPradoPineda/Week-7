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
int verdad(int numero); //se definen las variables de entrada y salida

int main(void) {
  int numero; //defino la variable numero
  printf("Dime un número: \n"); //pido el numero y se guarda
  scanf("%d", &numero);
  if (verdad(numero)) {
    printf("Es primo");
  } else {
    printf("No es primo");
  }
  return 0;
}

int verdad(int numero) {
  if (numero == 0 || numero == 1) return 0;
  if (numero == 4) return 0;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return 0;
  }
  return 1;
}
