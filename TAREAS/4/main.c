#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int p =0;
	for(int i=1;i <argc;i++){
		//este ciclo lo que hace es llenar 
    // un valor con el anteror y de esta manera sumar los valore
    p = p + atoi(argv[i]);
  }
  //al final lo que hace es mostrar el promedio de todos estos valores
    float  resu = (float) p/(argc-1);
		printf("%.2lf", resu);


}
