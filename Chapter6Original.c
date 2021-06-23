  
/********************************************************
 * Original -- Ley de campo electrico. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: hacer uso de los conocimientos de electricidad y magnetismo para obtener algo. *
 * *
 * Usage: *
 * poner un opcion del menu en ingresar los datos requeridos para hcaer las operaciones *
 ********************************************************/
#include <stdio.h>
//Include<16f877a.h>
//include<keyboard.h>
#define K = 900000000;
char at[1000];
chat at2[1000];
int main(void) {
  int Eleccion;
  int num = Eleccion;
  float F;
  float R;
  float Q; //defino todas las variables a usar

  printf ("nosotros sabemos que el campo electrico se puede calcular de 2 formas, una es usando la constante K por la carga entre la distancia al cuadrado y otra dividiendo la fuerza entre la carga, la unidad de este en N/C usando las unidades fundamentales \n");
  printf ("\n");
  printf ("como nota, para pasar de la fisica de magnetismo a la fisica comun la union es F=ma, y postriormente puedes calcular aceleraciones, densidad, etc ya que tendras varias cosas\n");
  printf ("\n");
  printf ("pulsa 1 si tienes fuerza o pulsa 2 si tienes distancia\n"); //doy un poco de retroalimentacion y meto el menu para elegir segun lo que tengas
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%f",&Eleccion);
  switch (Eleccion) {
  case 1: 
      
  printf("Dame tu Fuerza y tu carga\n");
  fgets(at2, sizeof(at2), stdin);
  sscanf(at2,"%f %f",&F,&Q);
   scanf("%f",&Q);
   printf ("En fraccion queda como %0.2f/%0.2f y en decimales como %0.2f N/C redondeado\n",F,Q,F/Q); //si elegiste 1. te metera aqui y solo te pedira tus datos para hacer la operacion
  break;
  case 2:
  printf("Dame tu Distancia y tu carga\n");
   fgets(at2, sizeof(at2), stdin);
  sscanf(at2,"%f %f",&R,&Q);
  printf ("En fraccion queda como %0.2f*10^9/%0.2f y en decimales como %0.2f*10^9 N/C redondeado\n",9*R,Q,9*Q/(R*R)); //si elegiste 2, es lo mismo pero con otros datos
  break;
  default: 
  printf ("opcion no valida"); //si escojes otro, no podras hcaer nada 
  break;
}
return 0;
}

