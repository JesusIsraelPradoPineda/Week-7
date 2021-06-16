/********************************************************
 * Ex03 -- Upload time. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: the use of some functions. *
 * *
 * Usage: *
 * put a value in bytes and it will show the upload time in hours and days. *
 ********************************************************/
#include "stdio.h" //define the c library
int main(void) { 
  float x1; //este pide un valor para ser ingresado
  float res; //se realiza la operacion para saber las horas
  float res2; //se realiza la opracion para saber los dias 
  printf("dame el valor de peso de tu archivo a subir en bytes\n"); //pido los valores necesarios
  scanf("%f",&x1); //lo guardo en variable x1
  res = (x1*1)/34560000; //se resuelve la operacion y se guarda en la variable res
  printf("el tiempo que tardara en subir el archivo es de %f horas \n",res); //imprimo el resultado
    res2 = res/24; //para saber dias solo hago la division entre 24
    printf ("se tardaria aproximadamente %f days",res2); //imprimo resultados
  return 0;
}
