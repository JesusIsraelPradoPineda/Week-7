/********************************************************
 * Ex01 -- resistencias en paralelo. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: dadas n resistencias, sacarlas en paralelo. *
 * *
 * Usage: *
 * mete el numero de resitencias y despues el valor de cada una. *
 ********************************************************/
#include "stdio.h"
int main(void) {
  int xd;
  int i;
  float num;
  float res = 0;
  float resfin; //defino todas las variables a utilizar
  printf("cuantas resistencias necesitas sumar\n");
  scanf("%d",&xd); //pido el numero de resistencias para sacar el paralelo
  for (i = 1; i<=xd;i++){
    printf("\n"); 
    printf("dame resistencia %d \n",i);  
    scanf("%f",&num);
    res=res+(1/num); 
    if (i==xd){ //cuando se iguale la I, nos salimos para poner el mensaje final
      break;
    }
    printf("la resistencia %d de esta cadena de operaciones es %0.2f Xohms\n",i,num); //aqui muestro lo que llevamos de resistencias asi como sus valores
   }
   resfin=1/res;
   
    printf("la resistencia %d fue %0.2f Xohms, la resistencia total en paralelo es %0.2f Xohms donde X es el amplificador de unidades (mili, micro, kilo, etc)",i,num,resfin);
  //al desconocer la unidad de medida, solo se especifica esta dando el resultado de las resistencias n en parlelo
  return 0;
}
