#include <stdio.h>

int main(){
	int num , soma = 0;
	
	do{
		scanf("%d", &num);
		if (num%2 == 0){
			soma += num;
		}
	}while (num != -1);
	printf ("%d\n", soma);
	return 0;
}
