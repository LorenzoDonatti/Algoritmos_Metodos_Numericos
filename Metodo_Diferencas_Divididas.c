#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n=3,i,j;
    double x[n],dd[n][n],v[n-1],pi=3.14159265359,f,f0,aux=1.0,z=1.0,erro;
    x[0]=1.26607371;
    x[1]=2.27960947;
    x[2]=427.57405026;

	for(i=0;i<n-1;i++){
		int i_comp = i;
		double y_comp = fabs(x[i_comp]-z);
			for(j = i+1;j<n;j++){
				if(fabs(x[j]-z)<y_comp){
					i_comp = j;
					y_comp = fabs(x[i]-z);
				}
				y_comp = x[i];
				x[i] = x[i_comp];
				x[i_comp] = y_comp;
				y_comp = dd[0][i];
				dd[0][i] = dd[0][i_comp];
				dd[0][i_comp] = y_comp; 
			}
	}

    for(i=0;i<n;i++){
        dd[0][i]=cos(x[i]);
        printf("%f\n",dd[0][i]);
    }

    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            dd[i][j]=(dd[i-1][j+1]-dd[i-1][j])/(x[j+i]-x[j]);
        }
    }

	f0=dd[0][0];
    for(i=1;i<n;i++){
        aux=aux*(z-x[i-1]);
        f=f0+dd[i][0]*aux;
        erro = fabs((f-f0)/f);
        f0 = f;
        printf("o valor do f eh %f e o erro %f\n",f,erro);
    }
	return 0;
}

