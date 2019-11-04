#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
int a= atoi(argv[1]); //numero a, b y c
int b= atoi(argv[2]);
int c= atoi(argv[3]);
int g;
float r,r2;
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
      printf("%.2lf",r);
    }

    if(g<0){
      g=(-g);
      a= 2*a;
      b=(-b);
      printf("(%i + v%di)/%i\n",b,g,a);
      printf("(%i - v%di)/%i\n",b,g,a);
    }
  }

}

