#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int p;
	p = atoi(argv[1]);
	if(p%2==0){
		printf("%i",1);
	}
	else
		printf("%i",0);
		
}