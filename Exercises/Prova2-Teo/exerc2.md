Faça um programa que realize a leitura de várias notas fiscais e calcule UMA das seguintes medidas: máximo, mínimo, média e desvio-padrão dos valores das notas em um dado período.

Entrada: A entrada contém várias notas fiscais. Para cada nota, a primeira linha indica sua quantidade de produtos Q e o dia D (1 <= D <= 30), respectivamente. Seguem então Q linhas, cada uma indicando um produto, com seu código, quantidade e valor unitário, conforme os exemplos a seguir. O fim das notas é indicado pelo valor Q = 0, que não representa nenhuma nota. Após isso, há uma outra linha que contém dois inteiros, indicando o intervalo fechado de dias para os quais será realizado o cálculo de estimadores estatísticos das notas. Finalmente, há uma última linha com um número inteiro indicando qual o estimador estatístico que deverá ser calculado, conforme a relação a seguir:

1: mínimo

2: máximo

3: média

4: desvio padrão

Saída: A saída deverá apresentar o estimador estatístico solicitado pela entrada, considerando as notas com data dentro do intervalo indicado na entrada. Caso não haja notas no período, escreva apenas "Nao ha notas no periodo!" (sem aspas).

Obs1: Os prints devem ser da seguinte forma (apenas UM deles por caso):

printf("Min: %.2f\n", minimo);

printf("Max: %.2f\n", maximo);

printf("Media: %.2f\n", media);

printf("Desvio padrao: %.2f\n", desvio);

Obs2: Fórmula para o desvio-padrão abaixo.