/********************************************************
 * Ex01 -- Unit conversion. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: to Know the conversion of some units. *
 * *
 * Usage: *
 * follow thw instruction an then you'll put your unit. *
 ********************************************************/

#include <stdio.h> //the general library of C 
#include <math.h> //this is for the math library ans their components
char at[100]; //this is no used here

int main(void) {
  int x1; //defined the menu option
  float extra; //is not used in this context
  float K; //the conversion for miles
  float L; //the conversion for galons 
  float M; //the conversion for inches 
  printf("what unit do you want know? put 1 to milies to km, put 2 for galons to lt and 3 for inches to cm\n"); //you only have that 3 options, no more
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&x1); //I recive the menu option that you have chossen
  if (x1 == 1) //if this is 1, you'll get in the miles section
  {
    printf("give me the miles\n"); //I ask the miles
    fgets(at, sizeof(at), stdin);
  sscanf(at,"%f",&K); //I scan in the variable K the miles
    printf("the result is %f KM \n",K*1.609); //I show the result in KM
  }
  else if (x1 == 2){ //if you gave 2, You'll be in Galons conversion
    printf("give me the galons\n"); // I ask the galons 
    fgets(at, sizeof(at), stdin);
  sscanf(at,"%f",&L); //I scan the galons 
    printf("the result is %f LT \n",L*4.546); //I print the result of the conversion
  }
    else if (x1 == 3){ //If you gave me 3, I'll show you the Inches
    printf("give me the Inches\n"); //I ask the inches
    fgets(at, sizeof(at), stdin);
  sscanf(at,"%f",&M); //I scan the Inches 
    printf("the result is %f CM \n",M*2.54); //I show that in CM
  }
  else //if you did not gave me the valid values
   {
     printf("please, input a valid value \n");//I ask a correct value
  }
}
