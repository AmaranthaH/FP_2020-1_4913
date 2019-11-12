#include<stdio.h>
#include<stdlib.h>

double raiz(double x, double tol, double res){
double div, separacion;
//se necesita algo que contenga al numero que se evalua
div= x/res;
separacion= res-div;
//si se tiene el valor en negativo lo cambia a positivo y lo mantiene absoluto
if(separacion <0){
separacion = -(separacion);
}
//este es ek if que cuando se cumpla terminara, en este caso cuando sea menor a la tolerancia 
if(separacion<tol){
return res;}
//sigue evaluando los valores, disminuyendo
res = (res+div)/2;
return raiz(x,tol,res);
}

int main(int argc, char *argv[]){
double x, y, z;
	x = atof(argv[1]);
	y = atof(argv[2]);
  z = atof(argv[3]);
double r=raiz(x,y,z);
printf("%lf",r);
}
