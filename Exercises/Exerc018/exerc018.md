Crie um programa que leia uma matriz quadrada A (de números inteiros) de tamanho NxN e a altere, segundo a seguinte sequência: O maior elemento da primeira linha, $m_1$, é trocado pelo maior da segunda linha $m_2$ (a troca só será feita se $m_1>m_2$), o maior elemento da terceira linha $m_3$ é trocado pelo maior da quarta linha $m_4$ (a troca só será feita se $m_3>m_4$), o maior elemento da quinta linha $m_5$ é trocado pelo maior da sexta linha $m_6$ (a troca só será feita se $m_5>m_6$), e assim por diante (no final $m_{N-1}$ será trocado por $m_N$ se $m_{N-1}$ for maior que $m_N$).

OBS: Não é necessário o uso de funções nesse código, mas caso deseje pode ser usado.

Entrada: N e a matriz A de tamanho NxN. N deverá ser um número par. Não podem haver elementos repetidos numa mesma linha de A.

Saída: A matriz alterada e um inteiro representando o número de trocas realizadas.

## Exemplos de Entrada e Saída

Entrada:

```
4
6 1 8 5
7 0 1 5
5 4 7 3
9 8 7 1
```

Saída:

```
6 1 7 5
8 0 1 5
5 4 7 3
9 8 7 1
1
```