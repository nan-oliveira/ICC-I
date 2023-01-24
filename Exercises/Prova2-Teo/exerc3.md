Faça um programa que leia o valor total de cada nota fiscal e conte o número valores em cada intervalo (determinado com base na entrada) para construção de um histograma, de forma que cada intervalo será fechado no limite inferior e aberto no limite superior. Para calcular a amplitude dos intervalos e evitar erros de precisão, utilize o teto da diferença entre o maior e menor valor da entrada e divida pelo número de intervalos. Sugestão: utilize a função ceil() da biblioteca math.h

Entrada: A primeira linha da entrada contém um número N (10 <= N <= 50) que representa a quantidade de notas fiscais. A próxima linha será formada por N valores reais (com duas casas decimais) indicando o valor total de cada nota fiscal. Por fim, a última linha contém o número K de intervalos que o histograma irá possuir(lembrando que os intervalos são fechados no limite inferior e abertos no limite superior).

Saída: A saída será formada de K (número de intervalos) linhas, em que cada linha irá conter o intervalo (arredondado para duas casas decimais) e o valor do histograma naquele intervalo, seguindo a formatação: "limite inferior |-- limite superior: valor do histograma" (sem aspas), como no exemplo a seguir.

## Exemplos de Entrada e Saída

Entrada:

```
10
1.50 13.41 5.50 12.90 10.00 11.70 5.30 2.20 7.10 15.00
6
```

Saída:

```
1.50 |-- 3.83: 2
3.83 |-- 6.17: 2
6.17 |-- 8.50: 1
8.50 |-- 10.83: 1
10.83 |-- 13.17: 2
13.17 |-- 15.50: 2
```

Entrada:

```
16
4.92 12.51 12.82 7.22 8.55 8.24 12.83 8.87 7.58 10.23 8.40 11.43 7.94 6.96 8.15 6.29 
10
```

Saída:
```
4.92 |-- 5.72: 1
5.72 |-- 6.52: 1
6.52 |-- 7.32: 2
7.32 |-- 8.12: 2
8.12 |-- 8.92: 5
8.92 |-- 9.72: 0
9.72 |-- 10.52: 1
10.52 |-- 11.32: 0
11.32 |-- 12.12: 1
12.12 |-- 12.92: 3
```