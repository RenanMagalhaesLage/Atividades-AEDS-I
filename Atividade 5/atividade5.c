/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Atividade 5
 * Disciplina: Programacao
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 22/08/2021
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <stdio.h>
int isbn_dv(char *lit)
{
  int i,j;
  int soma1=0,soma2=0;
  int somaTotal;
  int digito;
  int literalNum[10]; //Vetor do número em inteiro

  //Convertendo para inteiro
  for(i=0;i<10;i++)
  {
    literalNum[i]=lit[i] - '0';
  }
  
  //Fazendo a soma
  for(i=0;i<9;i++)
  {
    soma1 = soma1 + literalNum[i];
    soma2 = soma2 + soma1;
  }
  
  if(soma1==0 && soma2==0)
  {
    digito = -1;
  }
  else
  {
    //Verificando o ultimo dígito
    for(j=0;j<11;j++)
    {
      somaTotal= soma1 + soma2 + j;
      if(somaTotal%11==0)
      {
        digito = j;
      }
    }
  }
    
  return digito;
}

int main(void)
{
  char literal[11];
  int i;
  int num=0; //variável para guardar o valor da função (dígito verificador)
  do{
    //Entrada de dados
    fgets(literal, 11, stdin);
    literal[11-1]='\0';
    //Chamada da função
    num = isbn_dv(literal);
    //Só irá imprimir caso seja diferente de 000000000
    if(num != -1)
    {
      for(i=0;i<9;i++)
      {
        printf("%c",literal[i]);
      }
      //Caso seja 10 tem que imprimir X
      if (num == 10)
      {
        printf("-X");
      }
      else
      {
        printf("-%d",num);
      }
      printf("\n");
    }
  } while (num != -1);
  
  return 0;
}