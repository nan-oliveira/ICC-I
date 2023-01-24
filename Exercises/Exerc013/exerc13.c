#include <stdio.h>

int main()
{
	int x, a, b, c, d, e, f, g, h, i, j, tot=0;
	scanf ("%d", &x);
	scanf ("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	if (a < x){
		tot = tot + 1; 
	}
	if (b < x){
		tot = tot + 1;
	}
	if (c < x){
		tot = tot + 1;
	}
	if (d < x){
		tot = tot + 1;
	}
	if (e < x){
		tot = tot + 1;
	}
	if (f < x){
		tot = tot + 1;
	}
	if (g < x){
		tot = tot + 1;
	}
	if (h < x){
		tot = tot + 1;
	}
	if (i < x){
		tot = tot + 1;
	}
	if (j < x){
		tot = tot + 1;
	}
	printf ("%d\n", tot);
	return 0;
}

