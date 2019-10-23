#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

for(int i=1;i<argc;i++){
  char n=argv[i][0];
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
