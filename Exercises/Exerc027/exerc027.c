#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double seno(float, int);
double	 fatorial(int);

int main(){
	float ang;
	int itera;
	scanf("%f", &ang);
	scanf("%d", &itera);
	double sen = seno(ang, itera);
	printf("%.6lf\n", sen);
	return 0;
}

double seno(float ang, int itera){
	int i, a;
	double num, seno2;
	for(i=1; i<itera; i++){
		a = 1 + 2*i;
		num = pow(ang, a)/fatorial(a);
		seno2 += pow(-1,i)*num;
	}
	seno2 = ang + seno2; 
	return seno2;
}

double fatorial(int a){
	int j; double fat = 1;
	for(j=1; j<= a; j++){
		fat = j * fat;
	}
	return fat;
}
