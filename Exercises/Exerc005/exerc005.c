#include <stdio.h>
#include <math.h>

int main(){
	double angle, rad;
	scanf("%lf", &angle);
	rad = M_PI*angle/180;
	printf ("%.6lf", rad);
	return 0;
	}
