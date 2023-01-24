#include <stdio.h>
#include <math.h>

#define MAX 50000

void isPrime(double *v, int n){
    long int i, j;
    for(i=2; i<n; i++){ 
        v[i]=1;
    }
    for(i=2; i<n; i++){
        if(v[i]){
            for(j=i; (i*j)<n; j++){
                v[i*j]=0;
            }
        }
    }
}

void calculateSeries(int n, double *serie){
    int i=2, j=0;
    double v[MAX]; 
    isPrime(v, n);
    while(i<n){	
        if(v[i] == 1){
            *serie += pow(-1, j)/i;
            j++;
        }		
        i++;
    }
}
	
int main(){ 
    int n; 
    double serie=0;
    scanf("%d", &n);
    calculateSeries(n, &serie);
    printf("%.6lf\n", serie);
    return 0;
}

