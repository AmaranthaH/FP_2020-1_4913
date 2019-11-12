#include <stdio.h>
#include <stdlib.h>

int abrazos(int n){
//esto sera lo que detenga el programa  puesto su minimo sera 1
  if(n == 1){
    n=0;
    return n;
  }
//esto ingresa de nuevo a la funcion y deja el valor del momento hasta arriba para que cuando regrese se sume tambien ese valor
  int z = abrazos(n-1)+(n-1);
  return z;
  }
int main(int argc, char*argv[]){
  int x;
//esto toma el numero de personas que se considerara
	x = atoi(argv[1]);
  int b = abrazos(x);
  printf("%i",b);
	return 0;	
}
