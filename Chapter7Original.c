  
/********************************************************
 * Origina7 -- Password. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Use the for and the if getting along that. *
 * *
 * Usage: *
 * Put a password and then other person must to put the correct password. *
 ********************************************************/
#include <stdio.h>
//Include<16f877a.h>
//include<keyboard.h>

int main(void) {
  int c;
  int cp;
  int i; //I defined here the variables
  char at[1000];
  printf ("ingresa alguna contraseña de n caracteres\n");
  scanf("%d",&c); //I asked the new password in order to commit it
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&c);
  for (i=0;i<=2;i++){
      printf ("registra la contraseña\n"); 
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&cp); //I ask the password
  if (cp == c){
    //pinA0 == High;
    //delay (200ms);
    printf ("puedes pasar \n");
    break;}
  else if (i==0){
    printf("te quedan 2 intentos restantes\n"); //If you accuarate you'll pass, else you have some attemps but only 2 more
  }
  else if (i==1){
    printf("te quedan 1 intento restante\n");
  }
  else if (i==2){
    printf("ya no tienes intentos, reinicia el programa nuevamente\n"); //finish of the funcion
  }
  }

}
