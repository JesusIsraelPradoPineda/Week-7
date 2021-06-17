#include <stdio.h>
#include <math.h>

int main(void) {
  float sell;
  float res;
  printf("cuanto vendiste el dia de hoy?\n");
  scanf("%f",&sell);
  res= (sell*5)/100;
  printf("you need to pay %0.2f of tax due you won %0.2f aprox\n",res,sell);
  return 0;
}
