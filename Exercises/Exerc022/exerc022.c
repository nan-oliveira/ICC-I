#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

int eh_palindromo(char palavra[MAX]);

int main(){
	char palavra[MAX];
	fgets(palavra, MAX, stdin);
	int resp = eh_palindromo(palavra);
	if(resp==1){
		printf("SIM\n");
	}else{ 
		printf("NAO\n");
	}
	return 0;
}

int eh_palindromo(char palavra[MAX]){
	int i, j=0, num;
	int tam = (strlen(palavra))-1;
	for(i=0; i<tam; i++){
		palavra[i] = toupper(palavra[i]);
	}
    for(i=0; i<tam;i++){
		j = tam-1-i;
		if(palavra[i]==palavra[j]){
			num=1;
		}else num=0;
	}
	return num;
}
