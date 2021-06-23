/********************************************************
 * Ex03 -- Consonant or Voocal?. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: the ascii code is the most important and we are going to study the characters of vocals. *
 * *
 * Usage: *
 * put a valid value and then you will show the diferrence. *
 ********************************************************/
#include <stdio.h>
int main(void) {

  int xd;
  char at[1000];
  printf("el codigo ascii es un codigo maquina que utilizan las computadoras para decodificar de letras a numeros binarios, entonces, las letras mayusculas corresponden del 65 hasta el 90 y las minusculas del 97 al 122, pon un numero dentro de esos rango y te dire si es consonante o vocal \n");
   fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&xd);// doy informacion y luego pido informacion
  while ((xd >= 65 && xd <=90)||(xd >=95 && xd <= 122)) { //mientras el numero que introduzcas este en esos rangos entras a la funcion, de lo contrario sales
    if (xd == 65 || xd== 69 || xd == 73 || xd==79 || xd==85 ||xd == 65 || xd== 69 || xd == 73 || xd==79 || xd==85) {
    printf("es vocal\n"); //si se cumple la condicion del codigo muestra vocal, de lo contrario es consonante
    printf("dame otro numero \n");
       fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&xd);
    }
    else {
      printf("es consonante\n");
      printf("dame otro numero \n");
       fgets(at, sizeof(at), stdin);
     sscanf(at,"%d",&xd);
    }
  }
  printf("no es un valor valido");
return 0;
}
