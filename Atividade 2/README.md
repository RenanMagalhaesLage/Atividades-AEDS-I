#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
  <h1>Trabalho de Programação</h1>
   <p>Atividade 2 - Matrizes</p>
</div>

## Objetivo
Utilizar a estrutura de matrizes para representação e resolução de problemas de programação.

## Problema
<b>Tartaruga de desenho</b>

A linguagem Logo1, particularmente popular entre os usuários de computadores pessoais, tornou famoso o conceito de gráfico de tartaruga. 
Imagine uma tartaruga mecânica que percorra uma sala sob o controle de um programa em C. A tartaruga segura uma caneta em uma de duas
posições, para cima ou para baixo. Enquanto a caneta está para baixo, a tartaruga desenha figuras à medida que se move; 
quando a caneta está para cima, a tartaruga se move livremente,sem desenhar nada. Neste problema, você simulará a operação da tartaruga e criará também
um bloco de desenho computadorizado.

O conjunto de comandos da tartaruga que seu programa deve processar são os seguintes:

| Comando  | Significado |
| ------------- | ------------- |
| u | levantar (`up`) a caneta  |
| d  | abaixar (`down`) a caneta  |
| r  | girar para direita (`right`, mudar a direção em sentido horário)  |
| l  | girar para esquerda (`left`, mudar a direção em sentido anti-horário)  |
| w `n`  | andar (`walk` ) na direção corrente `n` passos  |
| p  | imprimir (`print`) a matriz  |
| e  | finalizar (`exit`) a entrada dos comandos para tartaruga.  |

Suponha que a tartaruga esteja inicialmente no canto superior esquerdo do ’piso’ e voltada para direita. O “programa” a seguir desenharia e 
imprimiria um quadrado 5 por 5.

```bash
  w 10 r w 10 d w 5 r w 5 r w 5 r w 5 u p e
```
À medida que a tartaruga se move com a caneta para baixo, defina os elementos apropriados da matriz piso com 1s. Quando o comando p (imprimir) for 
emitido, onde houver um 1 na matriz exiba um asterisco, ou outro caractere de sua escolha. Sempre que houver um zero, exiba
um ’.’. Escreva um programa para implementar os recursos do gráfico de tartaruga descritos
aqui. Escreva v ́arios programas de gr ́aficos de tartaruga para desenhar formas interessantes.
Adicione outros comandos para aumentar a potencialidade de sua linguagem de gr ́afico de
tartaruga.

O resultado do programa para os dados anteriores:

```bash
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . * * * * * . . . . . . . . . .
. . . . . * . . . * . . . . . . . . . .
. . . . . * . . . * . . . . . . . . . .
. . . . . * . . . * . . . . . . . . . .
. . . . . * * * * * . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . . . . . .
```

## Descrição
1. Desenvolver o programa conforme especificado com o nome atividade2.c.
2. Usar uma matriz denominada piso, 20 por 20, inicializada com zeros. Leia os comandos de entrada. Controle sempre a posição atual da tartaruga, 
a direção em que a tartaruga está virada e se a caneta está para cima ou para baixo. Admita que a tartaruga sempre
come ̧ca na posição 0,0 do piso, com a caneta para cima e a direção voltada para direita.
3. Implementar e testar o programa conforme solicitado. Os testes devem ser feitos redi-
recionando a entrada de dados na chamada do programa. Por exemplo, se o executável do programa chama-se atividade2. 
Digitar os dados de entrada num arquivo dados.txt e chamar:


```bash
$./atividade1 < dados.txt
```

