Desenvolva um programa onde o usuário fornece as medidas dos três lados de um triângulo e o tipo de triângulo (escaleno, isósceles ou equilátero) é escrito na tela. Lembre-se, você deve verificar também o critério de formação de triângulo, onde um lado qualquer não pode ser maior que a soma dos outros dois. Logo, o programa deve ter duas funções: uma função classificatriangulo() que recebe as medidas e imprime o tipo de triangulo, e uma função Ehtriangulo() que recebe as medidas e retorna 1 se for triangulo e 0, caso contrário.

Dica: Use os seguinte formatadores printf:

```
printf("Triangulo Equilatero\n");
printf("Triangulo Isosceles\n");
printf("Triangulo Escaleno\n");
printf ("Valores nao formam um triangulo\n");
```

## Exemplo de Entrada e Saída

Entrada:

```
2
3
4
```

Saída:

```
Triangulo Escaleno
```