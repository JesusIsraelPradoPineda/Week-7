#include "stdio.h"
int main(void) {
  int xd;
  int i;
  float num;
  float res = 0;
  float resfin;
  printf("cuantas resistencias necesitas sumar\n");
  scanf("%d",&xd);
  for (i = 1; i<=xd;i++){
    printf("\n");
    printf("dame resistencia %d \n",i);
    scanf("%f",&num);
    res=res+(1/num);
    if (i==xd){
      break;
    }
    printf("la resistencia %d de esta cadena de operaciones es %0.2f Xohms\n",i,num);
   }
   resfin=1/res;
   
    printf("la resistencia %d fue %0.2f Xohms, la resistencia total en paralelo es %0.2f Xohms donde X es el amplificador de unidades (mili, micro, kilo, etc)",i,num,resfin);
  return 0;
}
