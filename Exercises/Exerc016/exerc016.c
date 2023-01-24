#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int v[N], i, maior, menor;
	for(i=0; i<N; i++){	
		scanf("%d", &v[i]);	
	}
	maior=v[0];
	menor=v[0];
	for(i=0; i<N; i++){
		if(v[i]>maior){
			maior=v[i];
		}
		if(v[i]<menor){
			menor=v[i];
		}
	}
	printf ("%d %d\n", maior, menor);
	return 0;
}
