#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. Luiz Eduardo da Silva

<hr>
<div align="center">
<h1>Trabalho de Programação</h1>
    <p>Atividade 1 - Repetição e seleção</p>
</div>

## Objetivo
Revisar os conceitos fundamentais relacionados a linguagem de programação C, tais como:
declaração de variáveis, entrada e saída, expressões, atribuição, comandos de seleção e repetição.

## Problema
A empresa XYZ e especializada em marketing digital. A partir de uma pesquisa de opinião obteve respostas de diversos usuarios como: Codigo de Identicação do 
usuario (ID), sexo (SEXO) e a idade (IDADE). Você foi contratado pela empresa XYZ e devera, a partir desses dados de entrada, 
apresentar um relatorio com o perl dos usuarios pesquisados. Esse relatorio devera apresentar:

01. A soma das idades das pessoas pesquisadas.
02. O número de pessoas.
03. A média de idade das pessoas pesquisadas.
04. A quantidade de pessoas do sexo masculino (m, ou M).
05. A quantidade de pessoas do sexo feminino (f, ou F).
06. A quantidade de pessoas do sexo outro (diferente de m, M, f ou F).
07. A maior idade entre os pesquisados.
08. A ID da pessoa mais velha.
09. A menor idade entre as pessoas pesquisadas.
10. A ID da pessoa mais nova.

O último valor entrado contém os dados ID = 0, SEXO = ‘x’ e IDADE = 0.
Por exemplo, para os dados de entrada:

```bash
  1001 m 23
  1002 f 20
  1003 o 20
  1004 m 20
  1005 f 30
  1006 f 40
  1007 m 76
  0 x 0

```

O programa deverá apresentar o seguinte relatório:

```bash
Relatório
+------------------+--------+
| Soma das idades  | 229    |
| Total de pessoas | 7      |
| Media de idades  | 32.7   |
| Homens           | 3      |
| Mulheres         | 3      |
| Outros           | 1      |
| Maior idade      | 76     |
| ID do mais velho | 1007   |
| Menor idade      | 20     |
| ID do mais novo  | 1004   |
+------------------+--------+

```

## Descrição

1. Desenvolver o programa conforme especificado com o nome atividade1.c.
2. Implementar e testar o programa conforme solicitado. Os testes devem ser feitos redirecionando a entrada de dados na chamada do programa. Por exemplo, se o execut´avel
do programa chama-se atividade1. Digitar os dados de entrada num arquivo dados.txt e
chamar:
```bash
$./atividade1 < dados.txt
```
3. O resultado deverá ser apresentado com a formatação do relatório, conforme apresentado
anteriormente (com caracteres +, | e -, formando um quadro em torno dos valores).
4. Se houver mais de uma pessoa com a maior ou menor idade, o programa dever´a apresentar
o último valor (maior ou menor) que for encontrado.

