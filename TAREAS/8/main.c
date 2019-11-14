#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  // x es lo que se quiere sacar
  //y el valor a convertir
double x= atof(argv[1]);
double y = atof(argv[2]);
if(x!=0){
  //este pasa de fahrenhait a celsius
double c = (y -32)/1.8;
printf("%.2lf",c);
}
  else{
    // este es de celsius a fahrenhait
    double f = (y*1.8)+ 32;
    printf("%.2lf",f);

  }
}
