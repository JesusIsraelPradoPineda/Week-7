/********************************************************
 * Ex04 -- tablas de multiplicar. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: ver las tablas de multiplicar. *
 * *
 * Usage: *
 * follow thw instructions. *
 ********************************************************/
#include "stdio.h"
int main(void) {
 int xd;
 int xdx;
 int i; //defino variables
 printf("que tabla quieres saber?\n"); 
 scanf("%d",&xd);  
 printf("cuantos valores quieres ver en as tablas?\n");
 scanf("%d",&xdx);
 for (i=1;i<=xdx;i++){
   printf("%d x %d == %d \n",xd,i,xd*i); //segun el numero de tablas que se quieran visualizar asi como el numero que va a ser multipliccado, se pone en el programa
 }
 return 0;
}
