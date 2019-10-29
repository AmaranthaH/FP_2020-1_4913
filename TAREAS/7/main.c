#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//tomar los valores que se necesitan, que es la base y a que exponente se quiere aumentar
int b= atoi(argv[1]); // base
int e = atoi(argv[2]); //exponente
int p= pow(b,e); //funcion que realiza la operacion de aumentar ell exponente
printf("%i\n",p);//mostrar el exponente
return 0;
}
