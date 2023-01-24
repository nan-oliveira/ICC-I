#include <stdio.h>

int main(){
	 double F, K, C;
	 scanf ("%lf", &C);
	 F = 9*C/5 + 32;
	 K = C + 273;
	 printf("%.2lf F\n%.2lf K", F, K);
	 return 0;
	
	}
