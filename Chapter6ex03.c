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
 else if (res>61 && res<63) {
   printf ("D-\n");
 }
  else if (res>63.99999999 && res<67) {
   printf ("D\n");
 }
  else if (res>67.9999999 && res<70.99999999) {
   printf ("D+\n");
 }
 else if (res>71 && res<73) {
   printf ("C-\n");
 }
  else if (res>73.99999999 && res<77) {
   printf ("C\n");
 }
  else if (res>77.9999999 && res<80.99999999) {
   printf ("C+\n");
 }
  else if (res>81 && res<83) {
   printf ("B-\n");
 }
  else if (res>83.99999999 && res<87) {
   printf ("B\n");
 }
  else if (res>87.9999999 && res<90.99999999) {
   printf ("B+\n");
 }
  else if (res>91 && res<93) {
   printf ("D-\n");
 }
  else if (res>93.99999999 && res<97) {
   printf ("D\n");
 }
  else if (res>97.9999999 && res<100) {
   printf ("D+\n");
 }
}
