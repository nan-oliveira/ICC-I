#include <stdio.h>

int main(){
	int id;
	
	scanf ("%d", &id);
	if (id>=5 && id<=7){
		printf ("Infantil A\n");
	}
	else if(id>=8 && id<=10){
		printf ("Infantil B\n");
	}
	else if(id>=11 && id<=13){
		printf ("Juvenil A\n");
	}
	else if(id>=14 && id<=17){
		printf ("Juvenil B\n");
	}
	else if(id>=18){
		printf ("Adulto\n");
	}
	else {
		printf("Entrada invalida");
	}
	return 0;
}
