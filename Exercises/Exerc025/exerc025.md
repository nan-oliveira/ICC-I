Faça um programa que leia duas matrizes inteiras e realize a multiplicação entre elas. A entrada será composta por uma linha com dois números inteiros MxN, correspondentes às dimensões da primeira matriz, seguida de M linhas com N números inteiros cada uma. Logo depois, leia as dimensões NxP da segunda matriz, e seus elementos nas próximas P linhas.

A saída deverá ser composta pela matriz resultante, com os números da mesma linha separados por espaço. Utilize uma função para ler uma matriz, por exemplo, void leiaMAT( int mat[][MAX], int m, int n), e outra função para o produto de matrizes, por exemplo, void prodMat(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int m, int p, int n). Também utilize uma função void imprimeMat(int mat[][MAX], int m, int n).

## Exemplos de Entrada e Saída

Entrada:

```
2 2
3 5 
1 2
2 2
3 4
1 2
```

Saída:

```
14 22
5 8
```

Entrada:

```
2 3
3 4 3
3 4 5
3 2
2 2
3 4
5 3
```

Saída:

```
33 31
43 37
```