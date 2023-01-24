#include <stdio.h>

int fibonacci(int n);

int main(){
	int n, resp;
	scanf("%d", &n);
	if ((n==1)||(n==2)){
		printf("1\n");
	}else{
			resp = fibonacci(n);
			printf("%d\n", resp);
		}
	return 0;
}

int fibonacci(int n){
	int i, v[n];
	for(i=2; i<n; i++){
		v[0]=1;
		v[1]=1;
		v[i] = v[i-1]+v[i-2];
	}
	return v[n-1];
}
