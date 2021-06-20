#include <stdio.h>
int main(void) {

  int xd;
  printf("el codigo ascii es un codigo maquina que utilizan las computadoras utilizan para decodificar de letras a numeros binarios, entonces, las letras mayusculas corresponden del 65 hasta el 90 y las minusculas del 97 al 122, pon un numero dentro de esos rango y te dire si es consonante o vocal \n");
  scanf("%d",&xd);
  while ((xd >= 65 && xd <=90)||(xd >=95 && xd <= 122)) {
    if (xd == 65 || xd== 69 || xd == 73 || xd==79 || xd==85 ||xd == 65 || xd== 69 || xd == 73 || xd==79 || xd==85) {
    printf("es vocal\n");
    printf("dame otro numero \n");
     scanf("%d",&xd);
    }
    else {
      printf("es consonante\n");
      printf("dame otro numero \n");
     scanf("%d",&xd);
    }
  }
  printf("no es un valor valido");
return 0;
}
