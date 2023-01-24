Desenvolva uma função que recebe uma sentença e determine se a mesma é ou não é de um palíndromo. Palíndromo: palavras, frases, ou números que preservam seu valor independentemente de serem lidos da esquerda para direita ou da direita para a esquerda. Exemplos: ARARA, AMOR A ROMA, 12321 são palíndromos. Logo o na função main () do programa principal a sentença é recebida e repassada à função Eh_palindromo() que retorna 1 se for palíndromo e 0, caso contrário. Em seguinda, o programa principal é impresso "SIM" para palíndromo e "NAO", caso contrário.

Dica: use a biblioteca "< ctype.h >" e a função toupper(caractere) para converter todos os caracteres para maiúsculos e facilitar a comparação entre caracteres minúsculos e maiúsculos.

Entrada: Uma string. A sentença para ser analisada.

Saida: O seu programa deve imprimir "SIM" (sem aspas) se a sentença for um palíndromo e "NAO" caso contrário.

## Exemplos de Entrada e Saída

Entrada:

```
A grama e amarg a
```

Saída:

```
SIM
```

Entrada:

```
Sorvete no bandejao
```

Saída:

```
NAO
```