#include <stdio.h>
#include <math.h>
char at[100];

int main(void) {
  float x1;
  printf("give me the amount of money (the max amount should be 1.00, else you won't get a result) \n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%f",&x1);
  if (x1 > 1)
  {
    printf("input not valid \n");
  }
  else {
  printf("you need %f quarters \n",x1/0.25);
  printf("you need %f dimes \n",x1/0.10);
  printf("you need %f nickles \n",x1/0.05);
  printf("you need %f pennys \n",x1/0.01);
  }
}
