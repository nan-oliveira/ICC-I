#include <stdio.h>
#include <math.h>

int main(){
	int i, j, N;
	scanf("%d", &N);
	
	float nota[N], menor, maior;
	for(i=0; i<N; i++){
		scanf("%f", &nota[i]);	
	}
	
	int k;
	scanf("%d", &k);

	menor = nota[0];
	maior = nota[0]; 
	
	for(i=0; i<N; i++){	
		if(nota[i] < menor){
			menor = nota[i];	
		}
		if(nota[i] > maior){
			maior = nota[i];	
		}
	}
	
	float dif = ceil(maior - menor);
	float amp = dif/k;
	float li[k], ls[k];
	li[0] = menor;
	ls[0] = menor + amp; 	
	
	for(i=1; i<k; i++){
		li[i] = li[i-1] + amp;
		ls[i] = ls[i-1] + amp; 
	}
	
	int vet[k];
	for(i=0; i<k; i++){
		vet[i]=0;
	}
	
	for(i=0; i<k; i++){
		for(j=0; j<N; j++){
			if((nota[j] >= li[i])&&(nota[j] < ls[i])){
				vet[i]++;
			}
		}
	}
	
	for(i=0; i<k; i++){
		printf("%.2f |-- %.2f: %d\n", li[i], ls[i], vet[i]);
	}
	return 0;
}
