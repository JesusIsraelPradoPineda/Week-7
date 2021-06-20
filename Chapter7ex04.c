/********************************************************
 * Ex04 -- redondeo. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: saber usar el redondeo en C. *
 * *
 * Usage: *
 * pon la cantidad y postriormente te dara la cantidad al centavo mas cercano. *
 ********************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
  float sell; //esta variable es la que se va a guardar
  float res; //esta es la variable de impuesto
  printf("cuanto vendiste el dia de hoy?\n");//ingresa y registra la variable
  scanf("%f",&sell);
  res= (sell*5)/100;//se realiza la operacion para poder definir el impuesto
  printf("you need to pay %0.2f of tax due you won %0.2f aprox\n",res,sell);//muestro los resultados redondeados a dos decimas
  return 0;
}
