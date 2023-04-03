#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Trabalho de Programação</h1>
    <p>Atividade 5 -  ISBN</p>
</div>

## Objetivo
Utilizar matrizes e funções para resolver um problema de programação.

## Problema
O International Standard Book Number (ISBN) é um código associado aos livros, que o identifica de forma única. O ISBN é formado por uma sequência de 10 dégitos decimais (0,1,2,3,...,9)
mais a letra maiúscula X que é usada como um décimo primeiro dígito. Atualmente, somente os nove primeiros d´ıgitos de um ISBN são usados para identificar um livro. O décimo símbolo
serve como um dígito verificador para certificar que os nove dígitos precedentes estão corretos. O dígito verificador é selecionado tal que o valor computado, como está mostrado no quadro
abaixo, é divisível por 11, o caracter X é usado para representar o dígito 10. O algoritmo usado
para verificar ISBN é relativamente simples. Duas somas, s1 e s2 são calculadas sobre os dígitos do ISBN. s1 é a soma parcial dos dígitos do ISBN e s2 é a soma sobre as somas parciais em s1. O ISBN esta correto se o valor de s2 é divisível por 11. Um exemplo tornará este procedimento mais claro. 

Considere o ISBN (correto) 013162959-X. Calculando as somas parciais s1 e s2, temos:
![Captura de Tela (1035)](https://user-images.githubusercontent.com/89847080/229581129-63072ba1-edaa-4545-b81f-4af8c23aa35e.png)

Como pode ser visto, a somatório total é 165, que é divisével por 11.
O seu trabalho é desenvolver um programa que implementa a função isbn dv. Esta função deve receber um literal com os nove primeiros dígitos de um número de ISBN e retornar o dígito
verificador.

### Entrada
Seu programa deve ler os primeiros nove dígitos de vários ISBN´s. Cada ISBN é composto por uma única linha, que contém a sequência de dígitos a ser testada. O final é o ISBN 000000000.

### Saída
Para cada ISBN lido, seu programa deve escrever, na saída, o ISBN com o dígito verificador calculado.

### Exemplo
Entrada

```text
089237010
083063637
000000000
```

Saída

```text
089237010-6
083063637-4
```
