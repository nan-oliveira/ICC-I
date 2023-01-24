Desenvolva um programa onde o usuário fornece as medidas dos três ângulos de um triângulo e o tipo de triângulo (agudo, obtuso ou retângulo) é escrito na tela. Lembre-se, você deve verificar também o critério de formação de triângulo, onde a soma dos ângulos internos de um triângulo deve ser 180 graus. Logo, o programa deve ter duas funções: uma função angulotriangulo() que recebe os ângulos e imprime o tipo de triângulo e uma função Ehtriangulo() que recebe os ângulos e retorna 1 se for triangulo e 0, caso contrário.

Dica: Use os seguintes formatadores de printf:

```
printf("Triangulo retangulo");
printf("Triangulo obtuso");
printf("Triangulo agudo");
printf ("Valores nao formam um triangulo\n");
```

## Exemplo de Entrada e Saída

Entrada:

```
90
45
45
```

Saída:

```
Triangulo retangulo
```