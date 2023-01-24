#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct{
    char nome[MAX];
    double altura;
    double peso;
    char sexo;
    int id;
}cadastro;

int main(){
    cadastro cad[MAX];
    double imc;
    int N, i, aux;
    scanf("%d ", &N);
    for(i=0; i<N; i++){
        fgets(cad[i].nome, MAX, stdin);
        scanf("%lf %lf %d %c ", &cad[i].altura, &cad[i].peso, &cad[i].id, &cad[i].sexo);
    }
    int tam;
    do{
        scanf("%d", &aux);
        if(aux == -1){
            break;
        }else{
            for(i=0; i<N; i++){
                if(aux == cad[i].id){
                    imc = cad[i].peso/(cad[i].altura*cad[i].altura);
                    tam = strlen(cad[i].nome);
                    if(cad[i].nome[tam-1] == '\n'){
                        cad[i].nome[--tam] = 0;
                    }
                    printf(" %c\t%s\t%1.2lf\n", cad[i].sexo, cad[i].nome, imc);
                }
            }
        }
    }while(aux != -1);
    return 0;
}

