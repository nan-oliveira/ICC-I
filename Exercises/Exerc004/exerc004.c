/* Renan de Oliveira da Cruz
   Nº USP: 10801090
   Exercicio: Lê a data de nascimento e a data atual e mostra a idade*/
 
#include <stdio.h>

int main(){
	int dia_nas, mes_nas, ano_nas, dia_atu, mes_atu, ano_atu;
	scanf ("%d %d %d", &dia_nas, &mes_nas, &ano_nas);
	scanf ("%d %d %d", &dia_atu, &mes_atu, &ano_atu);
	
	if (mes_atu > mes_nas){
		printf ("%d\n", ano_atu - ano_nas);
	}else if (mes_atu < mes_nas){
		printf ("%d\n", ano_atu - ano_nas - 1);
	}else{
		if (dia_atu >= dia_nas){
			printf ("%d\n", ano_atu - ano_nas);
		}else printf ("%d\n", ano_atu - ano_nas - 1);	
	}
	}
