#include <stdio.h>
#include <math.h>

float determinante(float matriz[3][3]);

int main()
{
   float matriz[3][3];
   int i, j;
   float det;
   
   for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%f", &matriz[i][j]);
            //printf("%f", matriz[i][j]);
        }
   }
    
   

    det = determinante(matriz);

    
    for (i=0; i<3;i++){
        for (j=0;j<3;j++){
        printf("%.6f ", matriz[i][j]);
    }
    printf("\n");
 }
printf("\n%lf", det);
    
    return 0;
}

float determinante(float matriz[3][3]){
	float a, b, c, d, e, f, det;
	
	a = (matriz[0][0] * matriz[1][1] * matriz[2][2]);
    b = (matriz[1][0] * matriz[2][1] * matriz[0][2]);
    c = (matriz[2][0] * matriz[0][1] * matriz[1][2]);

    d = (matriz[2][0] * matriz[1][1] * matriz[0][2]);
    e = (matriz[0][0] * matriz[2][1] * matriz[1][2]);
    f = (matriz[1][0] * matriz[0][1] * matriz[2][2]);
	det = a + b + c - d - e - f;
	return det;
}
