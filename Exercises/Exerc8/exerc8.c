#include <stdio.h>

int main(){
	int i;
	int v[16];
	
	for(i=0; i<16; i++){
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<16; i++){
		if(v[i]<0){
			v[i]=0;
		}
	}
	for(i=8; i<16; i++){
		printf("%d ", v[i]);
	}
	for(i=0; i<8; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}
