#include <stdio.h>
#include <math.h>
char at[100];

int main(void) {
  float x1,x2,x3,res;
  printf("resultado final de 3 unidades \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at, "%f %f %f \n", &x1,&x2,&x3);
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
  else if (res>91 && res<100) {
   printf ("A\n");
 }
}
