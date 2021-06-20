#include <stdio.h>
//Include<16f877a.h>
//include<keyboard.h>

int main(void) {
  int c;
  int cp;
  int i;
  printf ("ingresa alguna contraseña de n caracteres\n");
  scanf("%d",&c);

  for (i=0;i<=2;i++){
      printf ("registra la contraseña\n");
  scanf("%d",&cp);
  if (cp == c){
    //pinA0 == High;
    //delay (200ms);
    printf ("puedes pasar \n");
    break;}
  else if (i==0){
    printf("te quedan 2 intentos restantes\n");
  }
  else if (i==1){
    printf("te quedan 1 intento restante\n");
  }
  else if (i==2){
    printf("ya no tienes intentos, reinicia el programa nuevamente\n");
  }
  }

}
