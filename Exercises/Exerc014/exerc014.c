#include <stdio.h>

int main()
{
	float num=0, media;
	int v[10], i;
	for(i=0; i<10; i++){	
		scanf("%d", &v[i]);
		num += v[i];		
	}
	media = num/10;
	printf("%.2f\n", media);
	return 0;
}
