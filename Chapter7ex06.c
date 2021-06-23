#include <stdio.h>

int main(void) {
  int a;
  int b;
  int n = 0;
  int p = 0;
  int o = 0;
  char at[1000];
  printf("cuantos numeros imprimimos?\n");
 fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&a);
  for (int i=1;i<=a;i++)
  {
  printf("dame numeros\n");
  fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&b);
  if(b < 0){
    n=n+1;
  }
  else if (b > 0){
    p=p+1;
  }
  else if( b == 0){
    o=o+1;

  }
  }
  printf("En total tenemos %d numeros negativos, %d numeros positivos y %d ceros",n,p,o);
  return 0;
}
