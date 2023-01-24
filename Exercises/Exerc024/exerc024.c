#include <stdio.h>

int ehtriangulo(float a, float b, float c);
void classifica(float a, float b, float c);

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);//angulos do triangulo
	int resp = ehtriangulo(a, b, c);
	if(resp){
		classifica(a, b, c);
	}else{	
		printf ("Valores nao formam um triangulo\n");
	}
	return 0;
}

int ehtriangulo(float a, float b, float c){
	if((a+b+c)==180){
		return 1;
	}else
		return 0;
}

void classifica(float a, float b, float c){
	if((a==90)||(b==90)||(c==90)){
		printf("Triangulo retangulo");
	}else
	if((a>90)||(b>90)||(c>90)){
		printf("Triangulo obtuso");	
	}else{
		printf("Triangulo agudo");
	}	
}
