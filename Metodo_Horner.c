#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float v[] = {-136,-85,-9,5,1};   //c[0] corresponde ao termo independente
	int a = sizeof(v)/4;
	int i = a-2;
	float x = 100;
	int	n=0;   //numero de interacoes
	float y2,y;
	float erro = 1;
	float e = 0.000001;

	while(erro>e){
    	y = v[a-1];
    	while(i>=0){
        	if(i == a-2){
            	y2 = y;
			}
        	y = v[i] + y*x;
        	if(i>0){
            	y2 = y + y2 * x;
            }
        	i = i-1;
	}
   		printf("%f\n",x);
    	float x2 = x;
		x = x - (y/y2);
    	i = a - 2;
    	n = n+1;
    	erro = fabs((x-x2)/x);
    }
	
	printf("o valor do x eh %f",x);
	
	return 0;
}
