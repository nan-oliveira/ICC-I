
Desenvolva um código usando a linguagem C capaz de ler e armazenar n registros contendo nome, altura, peso, sexo (f ou m) e id (número inteiro). Seu programa deve possibilitar que cada indivíduo possa ser consultado através de seu id, até que o usuário entre com -1 (id inválido), indicando que ele deseja encerrar o programa. Sempre que uma consulta é realizada, os dados: nome, sexo e imc (peso/altura²) devem ser exibidos na saída padrão, tal como é mostrado nos exemplos abaixo:

## Exemplo de Entrada

```
2
Fulana
1.56
54
123
f
Outra Fulana
1.56
48
132
f
123
132
-1
```

O primeiro valor fornecido na entrada é o número exato de registros que serão fornecidos pelo usuário. Ele é seguido pelos dados que preencherão cada um dos registros e pelos identificadores (ids) que serão utilizados para consulta. No exemplo acima, dois registros são armazenados e ambos são consultados pelo usuário.

## Exemplo de Saída

```
 f    Fulana  22.19
 f    Outra Fulana    19.72
```

Perceba que os dados da saída são impressos com a seguinte formatação

```
printf(" %c\t%s\t%1.2lf\n", sexo, nome, imc);
```
