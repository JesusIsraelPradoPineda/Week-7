#include "stdio.h"
int main(void) {
  int xd;
  int i;
  float num;
  float res = 0;
  float resfin;
  printf("cuantos numeros vamos a promediar?\n");
  scanf("%d",&xd);
  for (i = 1; i<=xd;i++){
    printf("\n");
    printf("dame numero %d \n",i);
    scanf("%f",&num);
    res=res+num;
    if (i==xd){
      break;
    }
    printf("el numero %d de esta cadena de operaciones es %0.2f\n",i,num);
   }
   resfin=res/xd;
   
    printf("el numero %d fue %0.2f, el promedio de todos estos es %0.2f",i,num,resfin);
  return 0;
}
