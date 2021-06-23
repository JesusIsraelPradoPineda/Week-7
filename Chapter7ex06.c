/********************************************************
 * Ex06 -- negative, positives and 0 count. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: pracitce the sum of the positives numbers, negatives and 0 and then show it in screen. *
 * *
 * Usage: *
 * put an amount of numbers and then the numbers. *
 ********************************************************/
#include <stdio.h>

int main(void) {
  int a;
  int b;
  int n = 0;
  int p = 0;
  int o = 0;
  char at[1000]; //se definen las variables a usar en el programa
  printf("cuantos numeros imprimimos?\n"); 
 fgets(at, sizeof(at), stdin); //pido la cantidad de numeros y guardo el resultado
  sscanf(at,"%d",&a);
  for (int i=1;i<=a;i++)
  {
  printf("dame numero %d\n",i);
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&b); // pido que me de los numeros
  if(b < 0){ //si es menor que 0, se agrega a la cuenta de los negativos
    n=n+1;
  }
  else if (b > 0){  //si es mayor de cer0, se agrega a la cuenta de los positivos
    p=p+1;
  }
  else if( b == 0){ //si es cero, se cuenta dentro los ceros
    o=o+1;

  }
  }
  printf("En total tenemos %d numeros negativos, %d numeros positivos y %d ceros",n,p,o);
  return 0;
}
