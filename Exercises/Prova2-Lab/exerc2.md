Considere que seu programa recebe um valor n inteiro. Encontre todos os número primos no intervalo [2, n] e resolva a equação abaixo:

```
series = 1/2 - 1/3 + 1/5 - 1/7 + 1/11...
```

Observe que o numerador começa em 1 e depois vale ­-1, em seguida 1 novamente e assim sucessivamente. Veja também que os denominadores compreendem os números primos entre 2 e n.

## Exemplo de Entrada

```
10
```

## Exemplo de Saída

```
0.223810
```

A impressão do resultado deve ser feita na main e seu programa deve conter, pelo menos, outras duas funções com o seguinte cabeçalho:

```
void isPrime(int *, int);
void calculateSeries(int, double *);
```

DICA: pesquise sobre o crivo de Eratóstenes