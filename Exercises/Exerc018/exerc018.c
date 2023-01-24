
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main (){
	int dimensao;
	int i, j;
	int matriz[MAX][MAX];
	scanf("%d", &dimensao);
	
	for(i=0; i<dimensao; i++){ //le ate dimensao, percorrendo as linhas
		for(j=0; j<dimensao; j++){ // e aqui as colunas
			scanf("%d", &matriz[i][j]);
		}
	}
	int aux1 = 0;
	int aux2 = 1;
	int cont = 0;
	int a;

	int maxval1=0, maxval2=0;
	int pos1, pos2;
	
	while(aux2 <= dimensao){
		//maior valor da linha r
		for(i=0; i<dimensao; i++){ 
			if(maxval1 < matriz[aux1][i]){ //se matriz[aux1][i] for maior que o maior valor entao...
				maxval1=matriz[aux1][i]; //matriz[aux1][i] passa a ser o novo maior valor
				pos1=i; //se a condicional ocorrer pos1 recebe a posicao i em q isso ocorreu
			}
		}
		//maior valor da linha r+1
		for(j=0; j<dimensao; j++){ 
				if(maxval2 < matriz[aux2][j]){ //o mesmo caso do for acima
					maxval2 = matriz[aux2][j]; //o mesmo caso do for acima
					pos2=j;//o mesmo caso do for acima
				}
		}
			
		if(maxval1 > maxval2){ //se o maior elemento da linha r for maior do q o elemento da linha r+1, trocamos os dois  
			//~a~ é um auxiliar para que o maior valor da matriz 1 nao seja perdido
			a = matriz[aux1][pos1]; //a posicao cujo qual ocorreu de maxval1 > maxval2 é [aux1][pos1] (note q no 1º for pos1 recebe o i em q isso ocorreu)              
			matriz[aux1][pos1] = matriz[aux2][pos2]; //o maior numero da linha r recebe, na posicao [aux1][pos1], o elemento da posicao [aux2][pos2] da linha r+1 
			matriz[aux2][pos2] = a; //e na linha r+1, matriz[aux2][pos2] recebe ~a~ q eh matriz[aux1][pos1] (o maior elemento da linha r) 
			cont++;	//aqui contamos quantas vezes essa troca foi realizada
		}
		//incremento dos auxiliares e igualando os valores maximos a zero para cada laco do while  
		aux1 = aux1+2;
		aux2 = aux2+2;
		maxval1 = 0; 
		maxval2 = 0; 
	}
	
	//print da nova matriz e do contador
	for(i=0; i<dimensao; i++){
		for(j=0; j<dimensao; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("%d\n", cont);
	
	return 0;
}
