Faça um programa que realize a leitura do valor total de várias notas fiscais e elabore o histograma com um número de intervalos determinados pela entrada, de forma que cada intervalo será fechado no limite inferior e aberto no limite superior.

Para calcular a amplitude dos intervalos e evitar erros de precisão, utilize o teto da diferença entre o maior e menor valor da entrada e divida pelo número de intervalos. Sugestão: utilize a função ceil() da biblioteca math.h

Utilizando asteriscos para representar os valores, elabore um gráfico do histograma, como mostrado no exemplo a seguir.

Entrada: A primeira linha da entrada contém um número N (10 <= N <= 50) que representa a quantidade de notas fiscais. A próxima linha será formada por N valores reais (com duas casas decimais) indicando o valor total de cada nota fiscal. Por fim, a última linha contém o número K de intervalos que o histograma irá possuir(lembrando que os intervalos são fechados no limite inferior e abertos no limite superior).

Saída: A saída será formada pelo gráfico do histograma, no qual cada coluna irá representar um intervalo(em ordem crescente) e os asteriscos ("*") irão representar o valor do histograma naquele intervalo. Cada coluna possui um espaço em branco(" ") após o valor(inclusive a última coluna) e cada linha é separada por uma quebra de linha ('\n') (inclusive a última linha).

## Exemplos de Entrada e Saída

Entrada:
```
10
1.50 13.41 5.50 12.90 10.00 11.70 5.30 2.20 7.10 15.00
6
```

Saída:
```
* *     * * 
* * * * * * 
```

Entrada:
```
16
4.92 12.51 12.82 7.22 8.55 8.24 12.83 8.87 7.58 10.23 8.40 11.43 7.94 6.96 8.15 6.29 
10
```

Saída:
```
        *           
        *           
        *         * 
    * * *         * 
* * * * *   *   * * 
```