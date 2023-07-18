#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double v[7],b[7];   //x eh v e y eh b
	double x=0,xquad=0,xcub=0,xquart=0;
	double y=0,xy=0,x2y=0;
	
	v[0] = 4;
	v[1] = 8;
	v[2] = 16;
	v[3] = 32;
	v[4] = 64;
	v[5] = 128;
	v[6] = 256;
	
	b[0] = 4.037074603;
	b[1] = 8.016786794;
	b[2] = 16.00810747;
	b[3] = 32.00401644;
	b[4] = 64.00203533;
	b[5] = 128.0010748;
	b[6] = 256.0006228;
	
	
	
	int i;
	
	for(i = 0;i<7;i++){
		x = x + v[i];
		xquad = xquad + pow(v[i],2);
		xcub = xcub + pow(v[i],3);
		xquart = xquart + pow(v[i],4);
		y = y + b[i];
		xy = xy + v[i]*b[i];
		x2y = x2y + pow(v[i],2)*b[i];
		
	}
	
	printf("valor de x %lf\nvalor de xquad %lf\nvalor de xcub %lf\nvalor de xquart %lf\n",x,xquad,xcub,xquart);
	printf("valor de y %lf\nvalor de xy %lf\nvalor de x2y %lf\n",y,xy,x2y);
	
	
	return 0;
}
