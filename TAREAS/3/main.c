#include <stdio.h>
#include <stdlib.h>

double suma(double x, double y){
	double z;
	z= x + y;
	return z;
}
double resta(double x, double y){
	double z;
	z= x - y;	
	return z;
}
double multiplicacion(double x, double y){
	double z;
	z=x*y;
	return z;
}
double division(double x, double y){
	double z;
	z= x/y;
	return z;
}

int main(int argc, char*argv[]){
	double x,y;
	x = atof(argv[1]);
	y = atof(argv[2]);
	double resultados;
	double resultador;
	double resultadom;
	double resultadod;
	
	resultados= suma(x,y);
	resultador = resta(x,y);
	resultadom= multiplicacion(x,y);
	resultadod = division(x,y);
	printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n",resultados,resultador,resultadom,resultadod);
	return 0;
	
}
