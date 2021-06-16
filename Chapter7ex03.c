#include "stdio.h"
int main(void) {
  float x1;
  float res;
  float res2;
  printf("dame el valor de peso de tu archivo a subir en bytes\n");
  scanf("%f",&x1);
  res = (x1*1)/34560000;
  printf("el tiempo que tardara en subir el archivo es de %f horas \n",res);
    res2 = res/24;
    printf ("se tardaria aproximadamente %f days",res2);
  return 0;
}
