#include <stdio.h>
//Include<16f877a.h>
//include<keyboard.h>
#define K = 900000000;
char at[1000];

int main(void) {
  int Eleccion;
  int num = Eleccion;
  float F;
  float R;
  float Q;
  int xd;

  printf ("nosotros sabemos que el campo electrico se puede calcular de 2 formas, una es usando la constante K por la carga entre la distancia al cuadrado y otra dividiendo la fuerza entre la carga, la unidad de este en N/C usando las unidades fundamentales \n");
  printf ("\n");
  printf ("como nota, para pasar de la fisica de magnetismo a la fisica comun la union es F=ma, y postriormente puedes calcular aceleraciones, densidad, etc ya que tendras varias cosas\n");
  printf ("\n");
  printf ("pulsa 1 si tienes fuerza o pulsa 2 si tienes distancia\n");
  scanf("%d",&Eleccion); 
  switch (Eleccion) {
  case 1: 
  printf("Dame tu Fuerza\n");
   scanf("%f",&F);
  printf("Dame tu carga\n");
   scanf("%f",&Q);
   printf ("En fraccion queda como %0.2f/%0.2f y en decimales como %0.2f N/C redondeado\n",F,Q,F/Q);
  break;
  case 2:
  printf("Dame tu Distancia\n");
  scanf("%f",&R);
  printf("Dame tu carga\n");
  scanf("%f",&Q);
  printf ("En fraccion queda como %0.2f*10^9/%0.2f y en decimales como %0.2f*10^9 N/C redondeado\n",9*R,Q,9*Q/(R*R));
  break;
  default: 
  printf ("opcion no valida");
  break;
}
return 0;
}

