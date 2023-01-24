#include <stdio.h>

#define MAX 50

void ehesparsa(int matriz[][MAX], int);
void ehidentidade(int matriz[][MAX], int);
void ehsimetrica(int matriz[][MAX], int);

int main(){
	int n;
	scanf("%d", &n);
	
	int i, j, matriz[MAX][MAX];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int opcao;
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			ehesparsa(matriz, n);
		break;
		
		case 2:
			ehidentidade(matriz, n);
		break;
		
		case 3:
			ehsimetrica(matriz, n);
		break;
	}
	return 0;
}

void ehesparsa(int matriz[MAX][MAX], int n){
	int i, j, aux=0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(matriz[i][j]==0){
				aux++;
			}
		}
	}
	if(aux>(n*n/2)){
		printf("SIM\n");
	}else{ 
		printf("NAO\n");
	}	
}

void ehidentidade(int matriz[MAX][MAX], int n){
	int i, j, aux1=0, aux2=0;	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if((i == j) && matriz[i][j]==1){
				aux1++;
			}
			if((i != j) && matriz[i][j]==0){
				aux2++;
			}
		}
	}
	if((aux1 == n) && (aux2 == n*n-n)){
		printf("SIM\n");
	}else{
		printf("NAO\n");
	}
}

void ehsimetrica(int matriz[MAX][MAX], int n){
	int i, j, aux=0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(matriz[i][j]==matriz[j][i]){
				aux++;
			}
		}
	}
	if(aux == n*n){
		printf("SIM\n");
	}else{
		printf("NAO\n");
	}	
}
