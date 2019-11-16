#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
double a= atof(argv[1]); //numero a, b y c
double b= atof(argv[2]);
double c= atof(argv[3]);
double g;
double r,r2;
if(a!=0){  
	//se evaluara primero el valor dentro de la raiz para saber como tratar a los numeros
  g=(b*b)-(4*(a*c));
//segun si sale  mayor a 0, menor a 0 o igual a 0, mostrara las raices que tiene
// y las mostrara al final
  if(g>0){
    r=(-(b)+sqrt(g))/(2*a);
    printf("%.2lf\n",r);
    r2=(-(b)-sqrt(g))/(2*a);
    printf("%.2lf\n",r2);
  }
    if(g==0){
      r=(-b)/(2*a);
      printf("%.2lf\n",r);
    }
    if(g<0){
      g=(-g);
      g=sqrt(g);
      a= 2*a;
      b=(-b);
      if(b==0){
        b=0;
      }
      b=b/a,
      g=g/a;
      
      printf("%.2lf + %.2lfi\n",b,g);
      printf("%.2lf - %.2lfi\n",b,g);
    }
  }

}
