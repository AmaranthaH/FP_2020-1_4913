#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int x= atoi(argv[1]); //numero del cual sumaran sus digitos
int digito;
int suma=0;

while(x!=0){
  digito = x % 10; //saca el ultimo digito del numero para su manipulacion
  x = x/10; //quita el digito ya quitado anteriormente
  suma = suma + digito; //se almacenan los digitos
}
printf("%i",suma); //muestra la suma de los digitos
 
}
