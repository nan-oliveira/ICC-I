#include <stdio.h>

int ehtriangulo(float a, float b, float c);
void classifica(float a, float b, float c);

int main(){
	float a, b, c; //os lados do triangulo
	scanf("%f %f %f", &a, &b, &c);
	int resp = ehtriangulo(a, b, c);
	if(resp==0){
		printf ("Valores nao formam um triangulo\n");
	}else {
		classifica(a, b, c);
	}
	return 0;
}

int ehtriangulo(float a, float b, float c){
	if((a<(b+c))&&(b<(a+c))&&(c<(a+b))){
		return 1; 	
	}else{
		return 0;
	}
}

void classifica(float a, float b, float c){
	if((a==b)&&(b==c)){
		printf("Triangulo Equilatero\n");
	}else 
		if((a != b)&&(b != c)&&(c != a)){
				printf("Triangulo Escaleno\n");
		}else{
				printf("Triangulo Isosceles\n");
			}
}
