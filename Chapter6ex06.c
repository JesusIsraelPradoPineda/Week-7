#include <stdio.h>
#include <math.h>
char at[100];

int main(void) {
  float x1;
  float extra;
  printf("give the hours worked \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%f",&x1);
  if (x1 > 40)
  {
    extra = x1-40;
    printf("he should to be payed with %fX where X is the salary that the worker recives",extra*1.5+x1);
  }
  else {
    printf("he should to be payed with %fX where X is the salary that the worker recives",x1);
  
  }
}
