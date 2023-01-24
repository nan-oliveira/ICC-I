Desenvolva um algoritmo que leia as coordenadas de dois pontos P1(x1, y1) e P2(x2, y2) e calcule e escreva a distância (d) entre esses dois pontos.

Dica: a utilização da operação de raiz quadrada em C (sqrt) necessita ser chamada dinamicamente na execução da aplicação. Por exemplo, inclua a biblioteca “#include < math.h >" e compile com ”gcc dist.c -lm -o dist” e rode o programa ”./dist”.

Entrada: Quatro números reais: x1, y1, x2, y2

Saida: Um número real: a distância entre o ponto 1 e o ponto 2 impresso com 6 casas decimais.

Exemplos de Entrada e Saída
Entrada:

```
0 0
0 2
```

Saída:

```
2.000000
```

Entrada:

```
0 0
2 3
```

Saída:

```
3.605551
```