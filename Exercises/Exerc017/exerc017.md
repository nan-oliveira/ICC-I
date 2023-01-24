Desenvolva um algoritmo que leia uma matriz 3x3 (do teclado) de números reais. Em seguida, a imprima na tela, calcule e imprima o valor de seu determinante pelo método de Sarrus.

DICAS: Para impressão de resultados na tela.

```
for (i =0; i <3; i++){
    for (j =0; j <3; j++){
        printf("%f ", matriz[i][j]);
    }
    printf("\n");
 }
printf("\n%lf", determinante);
```

Entrada:

```
2
3
1
1
2
4
0
5
1
```

Saída:

```
2.000000 3.000000 1.000000
1.000000 2.000000 4.000000
0.000000 5.000000 1.000000

-34.000000
```