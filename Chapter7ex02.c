#include <stdio.h>

int main(void) {
  int x,a,b,c,d,e,f,g,h,i,j,k,en=31,feb=28,mar=31,ab=30,mayo=31,junio=30,Julio=31,ago=31,sep=30,oct=31,nov=30,dic=31,n=0,m=0,res,v1,v2;
  printf("dame la fecha con el formato DD MM AAAA\n");
  scanf("%d",&x);
  scanf("%d",&a);
  scanf("%d",&b);
  printf("dame la otra fecha con el mismo formato \n");
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  printf ("Tu pusiste %d/%d/%d y %d/%d/%d\n",x,a,b,c,d,e);
  if (a<=12&&d<=12){
    switch(a){
      case 1:
      printf("mes de Enero\n");
      if (x<=31){
        x=31-x+feb+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que enero no tiene %d dias\n",x);
      }
      break;
      case 2:
      printf("mes de febrero\n");
            if (x<=28){
        x=28-x+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que febrero no tiene %d dias\n",x);
      }
      break;
      case 3:
      printf("mes de Marzo\n");
      if (x<=31){
        x=31-x+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Marzo no tiene %d dias\n",x);
      }
      break;
      case 4:
      printf("mes de Abril\n");
      if (x<=30){
        x=30-x+mayo+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Abril no tiene %d dias\n",x);
      }
      break;
      case 5:
      printf("mes de Mayo\n");
      if (x<=31){
        x=31-x+junio+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Mayo no tiene %d dias\n",x);
      }
      break;
      case 6:
      printf("mes de Junio\n");
      if (x<=30){
        x=30-x+Julio+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Junio no tiene %d dias\n",x);
      }
      break;
      case 7:
      printf("mes de Julio\n");
      if (x<=31){
        x=31-x+ago+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Julio no tiene %d dias\n",x);
      }
      case 8:
      printf("mes de Agosto\n");
      if (x<=31){
        x=31-x+sep+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Agosto no tiene %d dias\n",x);
      }
      break;
      case 9:
      printf("mes de Semptiembre\n");
      if (x<=30){
        x=30-x+oct+nov+dic;
        n=n+1;
      }
      else {
        printf("no valido debido a que Septiembre no tiene %d dias\n",x);
      }
      break;
      case 10:
      printf("mes de Octubre \n");
      if (x<=31){
        x=31-x+nov+dic;;
        n=n+1;
      }
      else {
        printf("no valido debido a que Octubre no tiene %d dias\n",x);
      }
      break;
      case 11:
      printf("mes de Noviembre \n");
      if (x<=30){
        x=30-x+dic;;
        n=n+1;
      }
      else {
        printf("no valido debido a que Noviembre no tiene %d dias \n",x);
      }
      break;
      case 12:
      printf("mes de Diciembre\n");
      if (x<=31){
        x=31-x;
        n=n+1;
      }
      else {
        printf("no valido debido a que Diciembre no tiene %d dias\n",x);
      }
      break;
    }
    switch(d){
      case 1:
      printf("mes de Enero\n");
      if (c<=31){
        c=31-c+feb+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que enero no tiene %d dias\n",c);
      }
      break;
      case 2:
      printf("mes de febrero\n");
            if (c<=28){
        c=28-c+mar+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que febrero no tiene %d dias\n",c);
      }
      break;
      case 3:
      printf("mes de Marzo\n");
      if (c<=31){
        c=31-c+ab+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Marzo no tiene %d dias\n",c);
      }
      break;
      case 4:
      printf("mes de Abril\n");
      if (c<=30){
         c=30-c+mayo+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Abril no tiene %d dias\n",c);
      }
      break;
      case 5:
      printf("mes de Mayo\n");
      if (c<=31){
         c=31-c+junio+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Mayo no tiene %d dias\n",c);
      }
      break;
      case 6:
      printf("mes de Junio\n");
      if (c<=30){
         c=30-c+Julio+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Junio no tiene %d dias\n",c);
      }
      break;
      case 7:
      printf("mes de Julio\n");
      if (c<=31){
         c=31-c+ago+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Julio no tiene %d dias\n",c);
      }
      case 8:
      printf("mes de Agosto\n");
      if (c<=31){
         c=31-c+sep+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Agosto no tiene %d dias\n",c);
      }
      break;
      case 9:
      printf("mes de Semptiembre\n");
      if (c<=30){
         c=30-c+oct+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Septiembre no tiene %d dias\n",c);
      }
      break;
      case 10:
      printf("mes de Octubre \n");
      if (c<=31){
        c=31-c+nov+dic;
        m=m+1;
      }
      else {
        printf("no valido debido a que Octubre no tiene %d dias\n",c);
      }
      break;
      case 11:
      printf("mes de Noviembre \n");
      if (c<=30){
        c=31-c+dic;
        m=m+1;
        
      }
      else {
        printf("no valido debido a que Noviembre no tiene %d dias\n",c);
      }
      break;
      case 12:
      printf("mes de Diciembre\n");
      if (c<=31){
        c=31-c;
        m=m+1;
      }
      else {
        printf("no valido debido a que Diciembre no tiene %d dias\n",c);
      }
      break;
    }
if (n==1 && m==1){
v1=((e-b)*365);
v2=(x-c);
res= v1+v2;
    if(b-e<0){
printf("la distancia en dias entre las 2 fechas es de %d dias\n",res); }
  else{printf("la distancia en dias entre las 2 fechas es de %d dias\n",res);}
  }
  }
  
  else {
    printf("no es valido el mes debido que no existe ya sea este mes %d o este %d \n",a,d);
  }
  }
