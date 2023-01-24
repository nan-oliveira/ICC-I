#include <stdio.h>

float menor(float v[]);
float maior(float v[]);

int main(){
	int i;
	float v[10];
	for(i=0; i<10; i++){
		scanf("%f", &v[i]);
	}
	float numMenor = menor(v);
	float numMaior = maior(v);
	printf("%.2f\n%.2f\n", numMenor, numMaior);
	return 0;
}

float menor(float v[]){
	int i;
	float menor=v[0];
	for(i=1; i<10; i++){
		if(v[i]<menor){
		menor = v[i];	
		}
	}
	return menor;
}

float maior(float v[]){
	int i;
	float maior = v[0];
	for(i=1; i<10; i++){
		if(v[i]>maior){
			maior = v[i];
		}
	}
	return maior;
}
