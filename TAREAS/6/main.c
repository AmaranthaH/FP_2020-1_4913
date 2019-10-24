#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  
  int n;
  for(int c=1;c<argc; c++){
    //primero evalua que numero no pondra
    int m=1;
    for(int i = 1; i<argc; i++){
      n = atoi(argv[i]);
      //el primer for hace que el valor que sea igual en este if sea el unico que no se multiplicara
      //esto hace que la multiplicacion se lleve con normalidad solo excluyendo a uno en espeficico
      if(i!=c){
          m = m * n;       
          }
      
  }
    //segun donde este el printf regresara cosas diferentes puesto si se pone en el primer for no mostrara los valores que se quieren
   printf("%i\n",m);
}
} 
