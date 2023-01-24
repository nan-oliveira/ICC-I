Utilizando uma série de Taylor , o seno de um ângulo pode ser calculado aproximação encontrada na imagem em anexo, sendo x um ângulo em radianos (no primeiro quadrante do círculo trigonométrico).

$$
\operatorname{sen}(x)=x-\frac{x^3}{3 !}+\frac{x^5}{5 !}-\frac{x^7}{7 !}+\frac{x^9}{9 !}-\ldots
$$

Faça um programa em C que leia o ângulo x (número real) e a quantidade de iterações que se deve fazer para encontrar o seno. Seu programa deverá ter duas funções: uma para calcular o fatorial de um número e a outra para calcular o valor do seno de x. Na saída, o resultado deverá ter 6 casas decimais

OBS: Já que os números são grandes, é recomendado o uso de variáveis do tipo Double

## Exemplos de Entrada e Saída

Entrada:

```
0.785398 300
```

Saída:

```
0.707107
```