#include <stdio.h>

int main(){
	 /*
	 soma = 0
	 6%1 = 0 (divisor) soma = 1
	 6%2 = 0 (divisor) soma = 1 + 2
	 6%3 = 0 (divisor) soma = 1 + 2 + 3 = 6
	 6%4 = 2
	 6%4 = 1
	 se soma == 6 perfeto
	 */
	int num, i, j; 
	scanf ("%d", &num);
	
	for (i = 2; i<=num; i++){
		int soma = 0;
		for (j = 1; j<i; j++){
			if (i % j == 0){ //caso n seja divisivel por i
				soma += j; //soma = soma + j 
			}
		}
	    if (soma == i){
			printf ("%d\n", i);
		}
	}
	return 0;	
	}
