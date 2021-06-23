  
/********************************************************
 * Ex06 -- program to print out if a year is leap or not. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: know if the year is leap or not. *
 * *
 * Usage: *
 * put the year in the program and it will say if this is leap or not. *
 ********************************************************/

#include <stdlib.h>
#include <stdio.h> // input output data
#include <math.h> 
#include <string.h> // string handling operations
#define MAX 1000
char at[1000];

int main(void) {
  int a1 ; //I defined the variable type integer because we do not have fraction years :(

  printf("what year do you want know?\n"); //I ask the year to analizate
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%f",&a1);
  if (a1 % 400 == 0){ //If it is a multiple of 400, it will be 
    printf ("%d",a1);
    printf (" is the year and therefore is bisiesto");
  }
  else if (a1 % 100 == 0 ) { //else if it is multiple of 100, it will not be a leap year
    printf ("%d",a1);
    printf (" is the year and therefore is not bisiesto");
  }
  else if (a1 % 4 == 0) { //else if it is multiple of 4, it will be
    printf ("%d",a1);
    printf (" is the year and therefore is bisiesto");
  }
  else {
    printf ("%d",a1); //if i dont have any condition, it will not be 
    printf (" is the year and therefore is not bisiesto");
  }
  return 0;


}
