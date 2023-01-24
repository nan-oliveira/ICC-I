#include <stdio.h>

int main(){
	int din;
	int n100, n50, n10, n5, n1, a, b, c;
	scanf ("%d", &din);
	n100 = din/100;
	a = din - n100*100;
	n50 = a/50;
	b = a - n50*50;
	n10 = b/10;
	c = b - n10*10;
	n5 = c/5;
	n1 = c - n5*5;
	printf("%03d notas de 100.00\n",n100);
	printf("%03d notas de 50.00\n",n50);
	printf("%03d notas de 10.00\n",n10);
	printf("%03d notas de 5.00\n",n5);
	printf("%03d notas de 1.00\n",n1);

	}

