#include <stdio.h>

int main ()
{
	double l1, l2, l3;
	scanf ("%lf %lf %lf", &l1, &l2, &l3);	
	if ((l1 == l2) && (l1 == l3)){
			printf ("equilatero\n");
	}else if ((l1 != l2) && (l1 != l3) && (l2 != l3)){
				printf ("escaleno\n");
	   	}else printf ("isosceles\n");
	
	return 0;
}
