
#include <stdio.h>
int main(void) {
  int xd;
  int abajo;
  printf("cuantos quieres ver rey para la derecha\n");
  scanf("%d",&xd);
  printf("y a pa abajo? \n");
  scanf("%d",&abajo);
  for (int e=0 ; e <abajo; e++){
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
  printf("    |");
  }
  printf("\n");
  }
   for (int i=0 ; i <xd;i++){
  printf("+-----");
  }
return 0;
}
