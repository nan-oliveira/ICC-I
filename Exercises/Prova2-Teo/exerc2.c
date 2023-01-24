#include <stdio.h>
#include <math.h>

#define MAX 50

typedef struct{   
	int id[MAX][MAX];
	int quant_prod[MAX][MAX]; 
	float preco[MAX][MAX]; 
	int quant[MAX]; 
	int dia[MAX]; 
}nota;

int main(){
    nota not;
    int i, k, quant=0, dia1, dia2, cont=0, op, aux1;
    char c;
	float aux[MAX];
   
    do{
		if(quant == 0){	
			scanf("%d", &not.quant[quant]);
		}else{
			not.quant[quant] = aux1;
		}
	    if(not.quant[quant] == 0){
			break;
		}
		scanf("%d", &not.dia[quant]);  
        for(k=0; k < not.quant[quant]; k++){
            scanf(" %c %d %d %f", &c, &not.id[quant][k], &not.quant_prod[quant][k], &not.preco[quant][k]);
        }
        quant++;
        scanf("%d", &aux1); 
	}while(aux1 != 0);
    
    scanf("%d %d", &dia1, &dia2); 
    
    float med=0, dp=0, min; 
    for(i=0; i<quant; i++){
        aux[i]=0; 
    }
    
    for(k=0; k<quant; k++){ 
        for(i=0; i<not.quant[k]; i++){
            if((not.dia[k] >= dia1)&&(not.dia[k] <= dia2)){ 
                aux[k] += not.quant_prod[k][i]*not.preco[k][i]; 
				min = aux[k];
            }		
        }				
    }
    
    float max = aux[0]; 
    for(k=0; k<quant; k++){
        if((not.dia[k] >= dia1)&&(not.dia[k] <= dia2)){ 
            cont++; 
        }
    }

    for(i=0; i<quant; i++){
        if(aux[i] > max){ 
            max = aux[i];
        }
        if((aux[i] < min) && (aux[i] != 0)){ 
            min = aux[i];
        }
            med += aux[i]; 
    }

    for(k=0; k<quant; k++){
        if((not.dia[k] >= dia1)&&(not.dia[k] <= dia2)){ 
            dp += pow(aux[k]-(med/cont), 2.0);
        }
    }
    
    scanf("%d", &op);
    if(cont == 0){ 
        printf("Nao ha notas no periodo!\n");
    }else{ 
		switch(op){
            case 1:
                printf("Min: %.2f\n", min);
            break;
        
		    case 2:
                printf("Max: %.2f\n", max);
            break;
            
            case 3:
                printf("Media: %.2f\n", med/cont);
            break;
            
            case 4:
                printf("Desvio padrao: %.2f\n", sqrt(dp/cont));
            break;  
	    }
    }
    return 0;
}	



