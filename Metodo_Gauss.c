#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n=3,i,j,i_comp,k;      //n e o tamanho da matriz
    double a[n][n+1],x[n], valor;

    a[0][0]=7;
    a[0][1]=508;
    a[0][2]=87376;
    a[0][3]=508.069718;
    a[1][0]=508;
    a[1][1]=87376;
    a[1][2]=19173952;
    a[1][3]=87376.968111;
    a[2][0]=87376;
    a[2][1]=19173952;
    a[2][2]=4581298432;
    a[2][3]=19174026.617951;
		
	
	for(i=0;i<n-1;i++){
		i_comp=i;
		valor=a[i][i];
		for(j=i+1;j<n;j++){
			if(fabs(a[j][i])>fabs(valor)){
				i_comp=j;
				valor=a[j][i];
			}
		}
		if(i_comp!=i){
			for(j=i;j<=n;j++){
				valor=a[i][j];
				a[i][j]=a[i_comp][j];
				a[i_comp][j]=valor;
			}
		}
		for(j=i+1;j<n;j++){
			valor=a[j][i]/a[i][i];
			for(k=i;k<=n;k++){
				a[j][k]=a[j][k]-valor*a[i][k];
			}
		}
	}
	
	//printa matriz
	for(i=0;i<n;i++){
            for(j=0;j<n+1;j++){
                printf("%f\t",a[i][j]);
            }
            printf("\n");
    }
    
	x[n-1] = a[n-1][n]/a[n-1][n-1];
	
	for(i=n-2;i>=0;i--){
		x[i] = a[i][n];
		for(j=i+1;j<n;j++){
			x[i]=x[i]-x[j]*a[i][j];
		}
		x[i]=x[i]/a[i][i];
	}
	for(i=0;i<n;i++){
		printf("x[%d] e %f\n",i,x[i]);
	}
	
	return 0;
}
