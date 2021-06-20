/********************************************************
 * Ex02 -- grades. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: put some letters when you get a grade. *
 * *
 * Usage: *
 * put 3 units and then you'll see the letter. *
 ********************************************************/
#include <stdio.h>
#include <math.h>
char at[100]; // I'll do a string

int main(void) {
  float x1,x2,x3,res;
  printf("resultado final de 3 unidades \n"); 
  fgets(at, sizeof(at), stdin);
  sscanf(at, "%f %f %f \n", &x1,&x2,&x3); //I ask the numbers as a b c form, because i am in a string
  res = (x1+x2+x3)/3;
  printf("promedio es %f \n",res);

 if (res > 0 && res < 60.99999999999){
 printf ("F\n");
 }
 else if (res>61 && res<70.999999999999) {
   printf ("D\n");
 }
  else if (res>71 && res<80.99999999999) {
   printf ("C\n");
 }
  else if (res>81 && res<90.9999999999) {
   printf ("B\n");
 }
  else if (res>91 && res<100) { //I put the conditions if the average of the numbers is equal of some number, and i put taht in a differwent form
   printf ("A\n");
 }
}
