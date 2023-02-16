#### Universidade Federal de Alfenas - UNIFAL-MG
Bacharelado em Ciência da Computação

Prof. [Luiz Eduardo da Silva](https://github.com/luizedsilva)

<hr>
<div align="center">
<h1>Trabalho de Programação</h1>
    <p>Atividade 3 -  Strings e funções</p>
</div>

## Objetivo
Utilizar literais (strings) e fun¸c˜oes em linguagem C.

## Problema
<b>Manipulação de strings e funções</b>

Em linguagem C, o string é criado como um vetor de caracteres. Então a declaração: `char literal[20];`define um vetor de até 20 caracteres para armazenar um literal. 
Para marcar a última posição efetivamente ocupada, a linguagem C usa o caracter `\0` como último caracter do literal. Para manipular variáveis strings que 
implementam essa especificação, C oferece uma bibliteca denominada string.h. Nessa atividade você deverá completar o código fonte, sem a utilização dessa biblioteca, 
implementando as funções faltantes. Esse programa deve ler uma posição e dois strings e fazer a inclusão do primeiro string, na posição especificada no
segundo string. Ou seja, se os valores digitados para entrada no programa forem:

```bash
4
eduardo
luiz silva
5
FGHI
abcdejklmn
0
XXXX
..........
10
***
..........
20
AA
ooooo
-1
```

O programa deve produzir as seguintes saídas:

```bash
  Posicao = 4
0 1 2 3 4 5 6 7 8
+---+---+---+---+---+---+---+---+---+
| | e | d | u | a | r | d | o | \0| substr.
+---+---+---+---+---+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10
+---+---+---+---+---+---+---+---+---+---+---+
| l | u | i | z | | s | i | l | v | a | \0| string
+---+---+---+---+---+---+---+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
| l | u | i | z | | e | d | u | a | r | d | o | | s | i | l | v | a | \0| result.
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
Posicao = 5
0 1 2 3 4
+---+---+---+---+---+
| F | G | H | I | \0| substr.
+---+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10
+---+---+---+---+---+---+---+---+---+---+---+
| a | b | c | d | e | j | k | l | m | n | \0| string
+---+---+---+---+---+---+---+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
| a | b | c | d | e | F | G | H | I | j | k | l | m | n | \0| result.
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
Posicao = 0
0 1 2 3 4
+---+---+---+---+---+
| X | X | X | X | \0| substr.
+---+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10
+---+---+---+---+---+---+---+---+---+---+---+
| . | . | . | . | . | . | . | . | . | . | \0| string
+---+---+---+---+---+---+---+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
| X | X | X | X | . | . | . | . | . | . | . | . | . | . | \0| result.
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
Posicao = 10
0 1 2 3
+---+---+---+---+
| * | * | * | \0| substr.
+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10
+---+---+---+---+---+---+---+---+---+---+---+
| . | . | . | . | . | . | . | . | . | . | \0| string
+---+---+---+---+---+---+---+---+---+---+---+
0 1 2 3 4 5 6 7 8 9 10 11 12 13
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
| . | . | . | . | . | . | . | . | . | . | * | * | * | \0| result.
+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
Posicao = 20
0 1 2
+---+---+---+
| A | A | \0| substr.
+---+---+---+
0 1 2 3 4 5
+---+---+---+---+---+---+
| o | o | o | o | o | \0| string
+---+---+---+---+---+---+
0 1 2 3 4 5 6 7
+---+---+---+---+---+---+---+---+
| o | o | o | o | o | A | A | \0| result.
+---+---+---+---+---+---+---+---+
Posicao = -1

```

O programa que deve ser completado é:

```bash
1 /∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
2 ∗ UNIFAL − Universidade Federal de Alfenas .
3 ∗ BACHARELADO EM CIENCIA DA COMPUTACAO.
4 ∗ Trabalho . . : Atividade 3
5 ∗ Disciplina : Programacao
6 ∗ Professor . : Luiz Eduardo da Silva
7 ∗ Aluno . . . . . : 
8 ∗ Data . . . . . . : 99/99/9999
9 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−∗/
10 #include <stdio.h>
11
12 /∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
13 ∗ Calcula o comprimento do string
14 ∗ Recebe o string (s)
15 ∗ Retorna o comprimento de s
16 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−∗/
17 int strlength ( char ∗s )
18 {
19 int i;
20 for ( i = 0 ; s [ i ] ; i++)
21 ;
22 return i ;
23 }
24
25 /∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
26 ∗ Le um string
27 ∗ Parametros :
28 ∗ s = string a ser lido
29 ∗ l e n = tamanho maximo da leitura ( contar o \0 e \n ) .
30 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−∗/
31 void strread ( char ∗s , int len )
32 {
33 fgets ( s , len , stdi n ) ;
34 s [ strlength ( s ) − 1 ] = ’ \ 0 ’ ;
35 }
36
37 /∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
38 ∗ Mostra os elementos do vetor string em modo texto
39 ∗ Parametros :
40 ∗ s = string
41 ∗ name = nome do string
42 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−∗/
43 void strshow ( char ∗s , char ∗name )
44 {
45 int i ;
46 for ( i = 0 ; s [ i ] ; i++)
47 print f (”%3d ” , i ) ;
48 print f (”%3d\n ” , i ) ;
49 for ( i = 0 ; s [ i ] ; i++)
50 print f (”+−−−”);
51 print f (”+−−−+\n ” ) ;
52 for ( i = 0 ; s [ i ] ; i++)
53 print f ( ” | %c ” , s [ i ] ) ;
54 print f ( ” | \ \ 0| %s \n ” , name ) ;
55 for ( i = 0 ; s [ i ] ; i++)
56 print f (”+−−−”);
57 print f (”+−−−+\n ” ) ;
58 }
59
60 /∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
61 ∗ Insere um substring num string na posicao especificada
62 ∗ Parametros :
63 ∗ pos = posicao onde inserir ( 0 e a primeira posicao )
64 ∗ sub = substring que sera inserido em s
65 ∗ s = string onde inserir sub
66 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−∗/
67 void strinsert ( int pos , char ∗sub , char ∗ s )
68 {
69 // −−−−−−−−−−−−−−−−−−−−−
70 // TO DO
71 //−−−−−−−−−−−−−−−−−−−−−−
72 }
73
74 /∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
75 ∗ transforma um literal em inteiro
76 ∗ o literal pode ter sinal (+ ou −) seguido de digitos
77 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−∗/
78 int str2int ( char ∗ s )
79 {
80 // −−−−−−−−−−−−−−−−−−−−−
81 // TO DO
82 //−−−−−−−−−−−−−−−−−−−−−−
83 return −1; // retirar na versao final
84 }
85
86 int main ( void )
87 {
88 char string [ 100 ] ;
89 char substring [ 100 ] ;
90 char posstr [ 4 ] ;
91 int posicao ;
92 do
93 {
94 strread ( posstr , 4 ) ;
95 posicao = str2int ( posstr ) ;
96 printf ( ”\ nPosicao = %d\n ” , posicao ) ;
97 if ( posicao >= 0 )
98 {
99 strread ( substring , 30 ) ;
100 strshow ( substring , ” substr . ” ) ;
101 strread ( string , 70 ) ;
102 strshow ( string , ” string ” ) ;
103 strinsert ( posicao , substring , string ) ;
104 strshow ( string , ” result . ” ) ;
105 }
106 } while ( posicao >= 0 ) ;
107 }
```
