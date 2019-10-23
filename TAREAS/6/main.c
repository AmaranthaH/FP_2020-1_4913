#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  
  int n;
  for(int c=1;c<argc; c++){
    int m=1;
    for(int i = 1; i<argc; i++){
      n = atoi(argv[i]);
      if(i!=c){
          m = m * n;       
          }
  }
   printf("%i\n",m);
}
} 
