#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, x, fa, fad, erro, ep;  	//fad é a derivada de fa, a é o chute inicial
	
	a= 0.5;
	erro = 1;
	ep = 0.0000000000000001;
	int cont = 0;

	
	while (erro>ep){
		fa = exp(-a)-a;
		fad = -exp(-a)-1;
		x = a - (fa/fad);
		erro = fabs((a-x)/x);
		a = x;
		cont = cont + 1;
	}
	printf("O valor de x eh %f, com %d interacoes",x, cont);
	
	return 0;
}
