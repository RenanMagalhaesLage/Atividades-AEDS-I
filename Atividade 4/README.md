#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Trabalho de Programação</h1>
    <p>Atividade 4 -  Sudoku</p>
</div>

## Objetivo
Utilizar matrizes e funções para resolver um problema de programação.

## Problema
”Sudoku, por vezes escrito Su Doku é um jogo baseado na colocação lógica de números. O
objetivo do jogo é a colocação de números de 1 a 9 em cada uma das células vazias numa grade de
9x9, constituída por 3x3 subgrades chamadas regiões. O quebra-cabeça contém algumas pistas
iniciais, que são números inseridos em algumas células, de maneira a permitir uma indução ou
dedução dos números em células que estejam vazias. Cada coluna, linha e região só pode ter
um número de cada um dos 1 a 9. Resolver o problema requer apenas raciocínio lógico e algum
tempo. Os problemas são normalmente classificados em relação à sua realização [...]. Foi criado
por Howard Garns, um projetista e arquiteto de 74 anos aposentado”.

O seu trabalho é criar um programa que leia um valor n, n = {2, 3, 4}, que determina a
dimensão de uma matriz quadrada <b>n<sup>2</sup> X n<sup>2</sup></b>
e em seguida leia n<sup>4</sup> valores que preenchem uma matriz quadrada que representa um jogo de sudoku resolvido. A matriz pode ser 4 x 4 (se n =
2), 9 x 9 (se n = 3) ou 16 x 16 (se n = 4). Com a matriz carregada na memória, o seu programa
deve avaliar se o preenchimento está correto ou não, indicando a primeira linha e coluna onde
foi encontrado o erro (se houver), ou a mensagem ”Sudoku Ok!”. Para o jogo de Sudoku 16 x 16, considere as letras A, B, C, D, E, F e G para representar os dígitos 10, 11, 12, 13, 14, 15 e
16, respectivamente.

O programa deverá apresentar o seguinte resultado:

```bash
+-------+-------+-------+
| 5 3 4 | 6 7 8 | 9 1 2 |
| 6 7 2 | 1 9 5 | 3 4 8 |
| 1 9 8 | 3 4 2 | 5 6 7 |
+-------+-------+-------+
| 8 5 9 | 7 6 1 | 4 2 3 |
| 4 2 6 | 8 5 3 | 7 9 1 |
| 7 1 3 | 9 2 4 | 8 5 6 |
+-------+-------+-------+
| 9 6 1 | 5 3 7 | 2 8 4 |
| 2 8 7 | 4 1 9 | 6 3 5 |
| 3 4 5 | 2 8 6 | 1 7 9 |
+-------+-------+-------+
Sudoku Ok!

```

## Descrição
1. Desenvolver o programa conforme especificado com o nome atividade4.c.
2. Completar a função sudokuOk, conforme os comentário no código fonte.
3. Testar o programa para vários valores de entrada.
```bash
$./atividade4 < jogo1.txt
```
