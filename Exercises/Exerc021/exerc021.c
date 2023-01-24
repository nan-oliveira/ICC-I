#include <stdio.h>

int soma_par(int v[]);

int main(){
	int v[4], i;
	for(i=0; i<4; i++){
		scanf("%d", &v[i]);
	}
	int soma = soma_par(v);
	printf("A soma dos numeros pares = %d\n", soma);
	return 0;
}

int soma_par(int v[]){
	int i, soma=0;
	for(i=0; i<4; i++){
		if(v[i]%2==0){
			soma += v[i];
		}
	}
	return soma;
}
