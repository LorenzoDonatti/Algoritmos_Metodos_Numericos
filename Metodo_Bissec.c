#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
double	a = 1;
double	b = 2;
double	e = 0.00001;
double	fa = sin(a*sin(a));
double	fb = sin(b*sin(b));
int 	cont = 0;
double 	x,fx, erro, erroa = 1;

if (fa*fb<0) {
    while (erroa>e){
    	x = (a+b)/2;
   		fx = sin(x*sin(x));
   		erro = (a-x)/x;
   		erroa= erro;
   		if(erroa<0){
   			erroa = -erro;
		   }
        if (fa*fx>0) {
			a = x;
            fa = sin(a*sin(a));
            cont = cont+1;
        }
        else{
            b = x;
            fb = sin(b*sin(b));
            cont = cont + 1;
        }
    printf("a = %lf, b= %lf, x= %lf,erro = %lf\n",a,b,x,erro);
	        
}
    printf("a raiz do intervalo e %lf, com %d interacoes\n",x, cont);
}
else{
    printf("o intervalo nao possui raizes");
}
	
	
	return 0;
}
