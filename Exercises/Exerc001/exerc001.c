#include <stdio.h>
#include <math.h> //raiz quandrada (sqrt), potencia (pow)

int main(){
	double x1, y1, x2, y2, dist; //P1 e P2
	scanf ("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	dist = sqrt(pow((x1-x2), 2.0) + pow((y1-y2), 2.0));
	printf("%.6lf\n", dist);
	return 0;
	}
