#include <stdio.h>
char at[1000];
int main(void) {
  int x,a,b,c,d,e,f,g,h,i,j,k;
  printf("put the number guy (SOLO LLEGA AL 999,999)\n");
   fgets(at, sizeof(at), stdin);
  sscanf(at,"%d",&x);
  a=(x-x/10*10);
  b=(x-x/100*100-a)/10;
  c=(x-x/1000*1000-a-b)/100;
  d=(x-x/10000*10000-a-b-c)/1000;
  e=(x-x/100000*100000-a-b-c-d)/10000;
  f=(x-x/1000000*1000000-a-b-c-d-e)/100000;
  if (x <= 999999){
        if (f==1 && e==0 && d==0){
      printf("CIEN ");
    }
    else{
  switch (f){
    case 0:
    printf("");
    break;
    case 1:
    printf("CIENTO ");
    break;
    case 2:
    printf("DOSCIENTOS ");
    break;
     case 3:
    printf("TRESCIENTOS ");
    break;
     case 4:
    printf("CUATROCIENTOS ");
    break;
     case 5:
    printf("QUINIENTOS ");
    break;
     case 6:
    printf("SEISCIENTOS ");
    break;
     case 7:
    printf("SETECIENTOS ");
    break;
     case 8:
    printf("OCHOCHIENTOS ");
    break;
     case 9:
    printf("NOVECIENTOS ");
    break;
  }
  }
      if(e==1){
    if (d==0||d == 1 || d==2 || d==3 || d==4 || d==5){
    switch (d){
      case 0:
    printf("");
    break;
    case 1:
    printf("ONCEMIL ");
    break;
    case 2:
    printf("DOCEMIL ");
    break;
     case 3:
    printf("TRECEMIL ");
    break;
     case 4:
    printf("CATORCEMIL ");
    break;
    case 5:
    printf("QUINCEMIL ");
    }
    }
    }
    else{
  switch (e){
     case 0:
    printf("");
    break;
    case 1:
    printf("DIEZ");
    break;
    case 2:
    printf("VEINTI");
    break;
     case 3:
    printf("TREINTA Y ");
    break;
     case 4:
    printf("CUARENTA Y ");
    break;
     case 5:
    printf("CINCUENTA Y ");
    break;
     case 6:
    printf("SESENTA Y ");
    break;
     case 7:
    printf("SETENTA Y ");
    break;
     case 8:
    printf("OCHENTA Y ");
    break;
     case 9:
    printf("NOVENTA Y ");
    break;
  }
    }
   if ((d== 0)&& (a!=0 || b!=0 || c!=0)){
    printf("");
    }
    else if(e==1){
   if (d==0 || d==1 || d==2 ||d==3 ||d==4){
  printf("");
} 
}
  else {
   switch (d){
      case 0:
    printf("MIL");
    break;
    case 1:
    printf("UN MIL ");
    break;
    case 2:
    printf("DOS MIL ");
    break;
     case 3:
    printf("TRES MIL ");
    break;
     case 4:
    printf("CUATRO MIL ");
    break;
     case 5:
    printf("CINCO MIL ");
    break;
     case 6:
    printf("SEIS MIL ");
    break;
     case 7:
    printf("SIETE MIL ");
    break;
     case 8:
    printf("OCHO MIL ");
    break;
     case 9:
    printf("NUEVE MIL");
    break;
  }
  } 
  if(b==0){
    switch (c){
     case 0:
    printf("");
    break;
    case 1:
    printf("CIEN");
    break;
    case 2:
    printf("DOSCIENTOS");
    break;
     case 3:
    printf("TRECIENTOS");
    break;
     case 4:
    printf("CUATROCIENTOS");
    break;
     case 5:
    printf("QUINIENTOS");
    break;
     case 6:
    printf("SEICIENTOS");
    break;
     case 7:
    printf("SETECIENTOS");
    break;
     case 8:
    printf("OCHOCIENTOS");
    break;
     case 9:
    printf("NOVECIENTOS");
    break;
  }}
  else{
 switch (c){
    case 0:
    printf("");
    break;
    case 1:
    printf("CIENTO ");
    break;
    case 2:
    printf("DOSCIENTOS ");
    break;
     case 3:
    printf("TRESCIENTOS ");
    break;
     case 4:
    printf("CUATROCIENTOS ");
    break;
     case 5:
    printf("QUINIENTOS ");
    break;
     case 6:
    printf("SEISCIENTOS ");
    break;
     case 7:
    printf("SETECIENTOS ");
    break;
     case 8:
    printf("OCHOCHIENTOS ");
    break;
     case 9:
    printf("NOVECIENTOS ");
    break;
  }
  }
    if(b==1){
    if (a==0||a == 1 || a==2 || a==3 || a==4 || a==5 ){
    switch (a){
      case 0:
    printf("");
    break;
    case 1:
    printf("ONCE \n");
    break;
    case 2:
    printf("DOCE\n");
    break;
     case 3:
    printf("TRECE\n");
    break;
     case 4:
    printf("CATORCE\n");
    break;
    case 5:
    printf("QUINCE\n") ;
      }
    }
    }
    else if(a==0){
    switch (b){
     case 0:
    printf("");
    break;
    case 1:
    printf("DIEZ");
    break;
    case 2:
    printf("VEINTE");
    break;
     case 3:
    printf("TREINTA");
    break;
     case 4:
    printf("CUARENTA");
    break;
     case 5:
    printf("CINCUENTA");
    break;
     case 6:
    printf("SESENTA");
    break;
     case 7:
    printf("SETENTA");
    break;
     case 8:
    printf("OCHENTA");
    break;
     case 9:
    printf("NOVENTA");
    break;
  }}
else{
  switch (b){
     case 0:
    printf("");
    break;
    case 1:
    printf("DIEZ Y ");
    break;
    case 2:
    printf("VEINTI ");
    break;
     case 3:
    printf("TREINTA Y ");
    break;
     case 4:
    printf("CUARENTA Y ");
    break;
     case 5:
    printf("CINCUENTA Y ");
    break;
     case 6:
    printf("SESENTA Y ");
    break;
     case 7:
    printf("SETENTA Y ");
    break;
     case 8:
    printf("OCHENTA Y ");
    break;
     case 9:
    printf("NOVENTA Y ");
    break;
  }
}
if(b==1){
if (a==0 || a==1 || a==2 ||a==3 ||a==4 || a==5){
  printf("");
} 
}
else if (a== 0 && b == 0 && c==0 && d == 0 && e==0 && f == 0) {
printf("CERO");
}
else {
   switch (a){
      case 0:
    printf("");
    break;
    case 1:
    printf("UNO\n");
    break;
    case 2:
    printf("DOS\n");
    break;
     case 3:
    printf("TRES\n");
    break;
     case 4:
    printf("CUATRO\n");
    break;
     case 5:
    printf("CINCO\n");
    break;
     case 6:
    printf("SEIS\n");
    break;
     case 7:
    printf("SIETE\n");
    break;
     case 8:
    printf("OCHO\n");
    break;
     case 9:
    printf("NUEVE\n ");
    break;
   }
  }
  }
  else
   {
    printf("este numero sera valido en nuevas versiones \n");
}
return 0;
  }

