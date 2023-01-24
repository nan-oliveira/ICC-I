#include <stdio.h>

typedef struct{
	int id;
	int quant_prod;
	float preco;
	int quant;
}nota;

int main(){
	float med=0;
	char c;
	int cont=0;
	nota not; 
	int k;
	do{
		scanf("%d", &not.quant);
		if(not.quant == 0){
			break;
		}
        for(k=0; k < not.quant; k++){
	        scanf(" %c %d %d %f", &c, &not.id, &not.quant_prod, &not.preco);
	        med += not.quant_prod*not.preco; 
	    }
	    cont++;
	}while(not.quant != 0);     
    printf("%.2f\n", med/cont);
    return 0;	
}


