#include<stdio.h>
#include <stdlib.h>
 
int main(int argc, char* argv[]){
  int a, aux;
  //da el numero de valores que entran
  int c = argc-1;
  //teniendo ya la cantidada de valores que entran se crea un arreglo con ese tamaño
  int n[c];
  //se le incresan a ese arreglo nuevo los valores que esta recibiendo
	for(int i=0;i<c;i++){
    //recibe un solo valor para su manupulacion
		a=atoi(argv[i+1]);
    //ya teniendolo lo que hace es meterlo en la nueva variable
    n[i]=a;
	}
  //usdando el metodo de burbujo lo que hace es una vez teniendo el arreglo se recorre y se compara los valores (segun para que se quiera) y se reposicionan 
  //en este caso lo que hace es que mueve el valor anterior si resulta ser mayor al anterior
 for(int i=1; i<c; i++){
		for(int j=0; j<c-i; j++){
			if(n[j]>n[j+1]){
			    aux = n[j+1];
				n[j+1] = n[j];
				n[j]   = aux;
			}
		}
	}
// el este ultimoo for lo que hace es mostrar el nuevo orden de los valores ingresados
	for(int i=0;i<c;i++){
		printf("%d\n",n[i]);
	}
	return 0;
}
