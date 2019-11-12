#include <stdio.h>
#include <stdlib.h>

int abrazos(int n){
  if(n == 1){
    n=0;
    return n;
  }
  int z = abrazos(n-1)+(n-1);
  return z;
  }
int main(int argc, char*argv[]){
  int x;
	x = atoi(argv[1]);
  int b = abrazos(x);
  printf("%i",b);
	return 0;	
}
