/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Atividade 1
 * Disciplina: Programacao
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 30/07/2021
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include<stdio.h>
/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 * Calcula o comprimento do string
 * Recebe o string(s)
 * Retorna o comprimento de s
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
 int strlength(char *s)
 {
     int i;
     for(i=0;s[i];i++);
     return i;
 }
 /*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
  * Le um string
  * Parametros :
  *     s = string a serlido
  *     len = tamanho maximo da leitura (contar o \0 e \n ) .
  *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
 void strread(char *s, int len)
 {
     fgets(s, len, stdin);
     s[strlength(s)-1]='\0';
 }
 /*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
  * Mostra os elementos do vetor string em modo texto
  * Parametros :
  *     s = string
  *     name = nome do string
  *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
 void strshow(char *s, char *name)
 {
     int i;
     for(i=0;s[i];i++)
        printf("%3d ",i);
     printf("%3d\n",i);
     for(i=0;s[i];i++)
        printf("+---");
     printf("+---+\n");
     for(i=0;s[i];i++)
        printf("| %c ", s[i]);
     printf("| \\0| %s\n",name);
     for(i=0;s[i];i++)
        printf("+---");
     printf("+---+\n");
 }
 /*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
  * Insere um substring num string na posicao especificada
  * Parametros :
  *     pos = posicao onde inserir (0 e a primeira posicao)
  *     sub = substring que sera inserido em s
  *     s = string onde inserir sub
  *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
 void strinsert(int pos, char *sub, char *s)
 {
     int i;
     int soma;
     int tam1; //tamanho do sub
     int tam2; //tamanho do s
     tam1 = strlength(sub);
     tam2 = strlength(s);
     soma = tam1 + tam2;

     if(pos>soma)             //Caso a posição for maior que a soma dos caracteres o substring será adicionado no final 
     {
       for(i=soma;i>=tam2;i--)
       {
         s[i]=sub[i-tam2];
       }
     }
     else
     {
       for(i=soma;i>=pos;i--)
       {
         s[i]=s[i-tam1];
       }
       for(i=0;i<tam1;i++)
       {
         s[pos+i]=sub[i];
       }
     }
     
 }
 /*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
  * transforma um literal em inteiro
  * o literal pode ter sinal (+ ou −) seguido de digitos
  *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
 int str2int(char *s)
 {
     int i=0;
     int sinal=1;
     int resultado=0;
     if(s[0]=='-')
     {
        sinal=-1;
        i++;
     }
     while(s[i]!='\0')
     {
        resultado= resultado*10 + s[i] - '0';
        i++;
     }
    // A multiplicação por 10 serve para passar de unidade para dezena, de dezana para centena, etc.
    // S[i]-'0', pega o caracter e dimui o caracter '0', isso produz um inteiro
    // pois vc está pegando o valor do caracter qualquer na tabela ASC e diminuindo 48(zero na tabela ASC).

     return sinal*resultado;
 }

int main(void)
{
    char string[100];
    char substring[100];
    char posstr[4];
    int posicao;
    do
    {
        strread(posstr, 4);
        posicao = str2int(posstr);
        printf("\nPosicao = %d\n", posicao);
        if (posicao>=0)
        {
            strread(substring, 30);
            strshow(substring, "substr.");
            strread(string, 70);
            strshow(string, "string");
            strinsert(posicao, substring, string);
            strshow(string, "result.");
        }
    } while (posicao>=0);
    
    return 0;
}