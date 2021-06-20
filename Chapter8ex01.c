/********************************************************
 * Ex01 -- the square. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: el uso del for muchas veces par generar cuadrados diseñados por el usuario. *
 * *
 * Usage: *
 * pon cuantos cuadros en alto quieres y en ancho lo mismo. *
 ********************************************************/
#include <stdio.h>
int main(void) {
  int xd;
  int abajo;
  printf("cuantos quieres ver rey para la derecha\n");
  scanf("%d",&xd);
  printf("y a pa abajo? \n");
  scanf("%d",&abajo); //pido las dimensiones de este cuadrado
  for (int e=0 ; e <abajo; e++){ //antes de poner aabajo, los pondre a la derecha
  for (int i=0 ; i <xd;i++){ 
  printf("+-----");
  }
  printf("+");
  printf("\n");
  printf("|");
  for (int i=0 ; i <xd;i++){
  printf("    |");
  }
  printf("\n");
  printf("|");
  for (int i=0 ; i <xd;i++){
  printf("    |");
  }
  printf("\n");
  printf("|");
  for (int i=0 ; i <xd;i++){
  printf("    |"); //a partir de las especificaciones, se repite varias veces el mismo codigo para subir y bajar el nivel de cuadritos dependeiendo de lo que se necesite
  }
  printf("\n");
  }
   for (int i=0 ; i <xd;i++){
  printf("+-----"); //se define solo lo mismo pero ahora crecera hacia abajo
  }
return 0;
}
