#include <stdio.h>

#define MAX 50

void leiaMat(int mat[][MAX], int a, int b);
void prodMat(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int m, int p, int n);
void imprimeMat(int result[][MAX], int m, int p);

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	
	int mat1[MAX][MAX];
	leiaMat(mat1, m, n);
	
	int p;
	scanf("%d %d", &n, &p);
	
	int mat2[MAX][MAX];
	leiaMat(mat2, n, p);
	
	int result[m][p];
	prodMat(mat1, mat2, result, m, p, n);
	
	imprimeMat(result, m, p);
	
	return 0;
}

void leiaMat(int matriz[MAX][MAX], int a, int b){
	int i, j;
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
}

void prodMat(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int m, int p, int n){
	int i, j, k, aux=0;
	for(i=0; i<m; i++){ //"entra" na linha da primeira matriz
		for(j=0; j<p; j++){ //"entra" na coluna da segunda matriz
			for(k=0; k<n; k++){ //"entra" na linha da segunda matriz
				aux += mat1[i][k]*mat2[k][j]; //para uma linha i da mat1 e coluna j da mat2 faco a(0,0)*b(0,0) + a(0,1)*b(1,0)...
			}
			result[i][j] = aux;
			aux=0;
		}
	}	
}

void imprimeMat(int result[MAX][MAX], int m, int p){
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
}
