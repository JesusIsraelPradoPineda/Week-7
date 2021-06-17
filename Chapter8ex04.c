#include "stdio.h"
int main(void) {
 int xd;
 int xdx;
 int i;
 printf("que tabla quieres saber?\n");
 scanf("%d",&xd);  
 printf("cuantos valores quieres ver en as tablas?\n");
 scanf("%d",&xdx);
 for (i=1;i<=xdx;i++){
   printf("%d x %d == %d \n",xd,i,xd*i);
 }
 return 0;
}
