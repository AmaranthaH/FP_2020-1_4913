#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//tomar los valores que se necesitan, que es la base y a que exponente se quiere aumentar
int b= atoi(argv[1]); // base
int e = atoi(argv[2]); //exponente
int p= 1;
//iteracion para sacar el exponente
for(int i=1;i<=e;i++){
  p = p * b;
}
printf("%i\n",p);//mostrar el exponente
return 0;
}
