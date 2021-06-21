/********************************************************
 * Original -- Number count. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: usar las difenrentes habilidades con for y switch case. *
 * *
 * Usage: *
 * ingresa el numero y el programa te dira tus numeros fraccionados. *
 ********************************************************/
#include <stdio.h>

int main(void) {
  int x,a,b,c,d,e,f,g,h,i,j,k;
  printf("put the number guy\n");
  scanf("%d",&x);
  a=(x-x/10*10);
  b=(x-x/100*100-a)/10;
  c=(x-x/1000*1000-a-b)/100;
  d=(x-x/10000*10000-a-b-c)/1000;
  e=(x-x/100000*100000-a-b-c-d)/10000;
  f=(x-x/1000000*1000000-a-b-c-d-e)/100000; //se haecen operaciones donde F es la centena de millar y a la unidad
  if (x <= 999999){
  switch (f){
    case 0:
    printf("CERO ");
    break;
    case 1:
    printf("UNO ");
    break;
    case 2:
    printf("DOS ");
    break;
     case 3:
    printf("TRES ");
    break;
     case 4:
    printf("CUATRO ");
    break;
     case 5:
    printf("CINCO ");
    break;
     case 6:
    printf("SEIS ");
    break;
     case 7:
    printf("SIETE ");
    break;
     case 8:
    printf("OCHO ");
    break;
     case 9:
    printf("NUEVE ");
    break;
  }
  switch (e){
     case 0:
    printf("CERO ");
    break;
    case 1:
    printf("UNO ");
    break;
    case 2:
    printf("DOS ");
    break;
     case 3:
    printf("TRES ");
    break;
     case 4:
    printf("CUATRO ");
    break;
     case 5:
    printf("CINCO ");
    break;
     case 6:
    printf("SEIS ");
    break;
     case 7:
    printf("SIETE ");
    break;
     case 8:
    printf("OCHO ");
    break;
     case 9:
    printf("NUEVE ");
    break;
  }
   switch (d){
      case 0:
    printf("CERO ");
    break;
    case 1:
    printf("UNO ");
    break;
    case 2:
    printf("DOS ");
    break;
     case 3:
    printf("TRES ");
    break;
     case 4:
    printf("CUATRO ");
    break;
     case 5:
    printf("CINCO ");
    break;
     case 6:
    printf("SEIS ");
    break;
     case 7:
    printf("SIETE ");
    break;
     case 8:
    printf("OCHO ");
    break;
     case 9:
    printf("NUEVE ");
    break;
  }
   switch (c){
      case 0:
    printf("CERO ");
    break;
    case 1:
    printf("UNO ");
    break;
    case 2:
    printf("DOS ");
    break;
     case 3:
    printf("TRES ");
    break;
     case 4:
    printf("CUATRO ");
    break;
     case 5:
    printf("CINCO ");
    break;
     case 6:
    printf("SEIS ");
    break;
     case 7:
    printf("SIETE ");
    break;
     case 8:
    printf("OCHO ");
    break;
     case 9:
    printf("NUEVE ");
    break;
  }
   switch (b){
      case 0:
    printf("CERO ");
    break;
    case 1:
    printf("UNO ");
    break;
    case 2:
    printf("DOS ");
    break;
     case 3:
    printf("TRES ");
    break;
     case 4:
    printf("CUATRO ");
    break;
     case 5:
    printf("CINCO ");
    break;
     case 6:
    printf("SEIS ");
    break;
     case 7:
    printf("SIETE ");
    break;
     case 8:
    printf("OCHO ");
    break;
     case 9:
    printf("NUEVE ");
    break;
  }
   switch (a){
      case 0:
    printf("CERO ");
    break;
    case 1:
    printf("UNO ");
    break;
    case 2:
    printf("DOS ");
    break;
     case 3:
    printf("TRES ");
    break;
     case 4:
    printf("CUATRO ");
    break;
     case 5:
    printf("CINCO ");
    break;
     case 6:
    printf("SEIS ");
    break;
     case 7:
    printf("SIETE ");
    break;
     case 8:
    printf("OCHO ");
    break;
     case 9:
    printf("NUEVE "); 
    break; 
       /*practicamente lo que se realiza es que dados los digitos, cada uno tiene un switch case menu, deonde se compara e iran poniendose en cada parte segun corresponda 
       los numeros, asi que poniendo a F como el valor de mayor perso a la A con valor de menor peso */
  }
  }
  else
   {
    printf("este numero sera valido en nuevas versiones \n"); // si se pone un numero mayor a 999999 se pondra ese mensaje dando a entender que se haran mejoras en el progranma
}
return 0;
}
