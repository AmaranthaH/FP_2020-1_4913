#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

for(int i=1;i<argc;i++){
char n = argv[i][0];
	//primero evalua los tipo char
if(n=='A'){
    printf("%i\n",11);
  }else{
	if(n == 'J'|| n== 'Q'|| n=='K'){
  	printf("%i\n",10);
  	}
else {
	//si no entra en nunguno de estos
	//se combierte en entero y ahora evalua esos valores
	n= atoi(argv[i]);

  if(n ==2|| n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8||n ==9|| n == 10 ){
  printf("%i\n",n);
  }
}

}
  
}
return 0;
}
