#include <stdio.h>
#include <math.h>
char at[100];

int main(void) {
  float x1,x2,res;
  printf("dame los dos puntos a medir usando espacio \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at, "%f %f \n", &x1,&x2);
  res=(x1-x2)*(x1-x2);

  if (res < 0){
    res=res*(-1);
    printf ("tu distancia es de %f unidades cuadradas \n",res);
  }
  else {
    printf ("tu distancia es de %f unidades cuadradas \n",res);
  }
  return 0;
}
