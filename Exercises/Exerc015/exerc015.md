Desenvolva um algoritmo que leia a dimensão (valores de m e n) (lido do teclado) e uma matriz Amxn (lido também do teclado) de números reais. Em seguida imprima a matriz original e também imprima a sua matriz transposta Anxm.

DICAS: Para impressão nos resultados na tela.

```
for( i =0; i<m; i++){
    for( j =0; j<n; j++){
        printf( "%f " , matriz[i][j] );
    }
    printf( "\n" );
}
printf( "\n" );
for( i =0; i<n ; i++){
    for( j =0; j<m; j++){
        printf( "%f " , transposta[i][j] );
    }
    printf( "\n" );
}
```

Entrada:

```
3
3
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

2.000000 1.000000 0.000000
3.000000 2.000000 5.000000
1.000000 4.000000 1.000000
```