#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

for(int i=1;i<argc;i++){
  //el for se repetira hasta que ya no tenga valores argv
  //se tiene que ingresar a n de esta manera para que el programa no lo marque como error
  char n=argv[i][0];
  //los if funcionan para encontrar los valores que se quieren
  //si el valor ingresado no pertenesiera a ninguno de estos simplemente no regresaria ese valor
  if(n =='2'|| n =='3'|| n =='4'|| n =='5'|| n =='6'|| n =='7'|| n =='6'||n =='9' ){
  printf("%c\n",n);
  }
  if(n=='J'|| n == 'Q'|| n=='K'){
  printf("%i\n",10);
  }
  if(n=='A'){
    printf("%i\n",11);
  }
}
return 0;
}
