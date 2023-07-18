#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double n = 7;
	double x[10],y[10],sx=0,sy=0,sxy=0,sx2=0;
	
	x[0] = 4;
	x[1] = 8;
	x[2] = 16;
	x[3] = 32;
	x[4] = 64;
	x[5] = 128;
	x[6] = 256;

	y[0] = 4.037074603;
	y[1] = 8.016786794;
	y[2] = 16.00810747;
	y[3] = 32.00401644;
	y[4] = 64.00203533;
	y[5] = 128.0010748;
	y[6] = 256.0006228;
	
	

	
	int i;
	for(i=0;i<n;i++){
		sx=sx+x[i];
		sy=sy+y[i];
		sx2=sx2+x[i]*x[i];
		sxy=sxy+x[i]*y[i];
	}
	double a0=(sy*sx2-sxy*sx)/(n*sx2-sx*sx);
	double a1=(n*sxy-sx*sy)/(n*sx2-sx*sx);
	
	printf("a0 = %f termo independente \na1 = %f acompanha o x",a0,a1);

	
	
	return 0;
}
