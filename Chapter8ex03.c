/********************************************************
 * Ex03 -- numbers average. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: use a for in order to get an averge of n numbers. *
 * *
 * Usage: *
 * put the number of numbers to get the average. *
 ********************************************************/
#include "stdio.h"
int main(void) {
  int xd;
  int i;
  float num;
  float res = 0;
  float resfin; //I have the variables
  char at[1000];
  printf("cuantos numeros vamos a promediar?\n");
   fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&xd);
  for (i = 1; i<=xd;i++){ //I get in a for then i asked how much numbers do we need
    printf("\n");
    printf("dame numero %d \n",i);
    fgets(at, sizeof(at), stdin);
  sscanf(at,"%f&num);
    res=res+num; //I ask the numbers
    if (i==xd){ 
      break;
    }
    printf("el numero %d de esta cadena de operaciones es %0.2f\n",i,num); //I show that in screen
   }
   resfin=res/xd;
   
    printf("el numero %d fue %0.2f, el promedio de todos estos es %0.2f",i,num,resfin); //I show the average 
  return 0;
}
