/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Atividade 1
 * Disciplina: Programacao
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 06/07/2021
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <stdio.h>

int main(void){
  int codigo, totalPessoas=0, homens=0, mulher=0, outros = 0, idVelho=0, idNovo=0, somaIdades=0, idade, maiorIdade = 0, menorIdade=20000;
  float mediaIdade;
  char sexo;
  do
  {
     scanf("%d %c %d", &codigo, &sexo, &idade);
     if (codigo!=0 && sexo!= 'x' && idade!=0)
     {
       somaIdades = somaIdades + idade;
       totalPessoas = totalPessoas + 1;
     }
     if (sexo == 'M' || sexo == 'm')
     {
       homens = homens + 1;
     }
     if (sexo == 'F' || sexo == 'f')
     {
       mulher = mulher + 1;
     }
     if (sexo!='M' && sexo!='m' && sexo!='F' && sexo!='f')
     {
       outros = outros + 1;
     }
     if (idade >= maiorIdade)
     {
       maiorIdade = idade;
       idVelho = codigo;
     }
     if (idade <= menorIdade && idade!=0)
     {
       menorIdade = idade;
       idNovo = codigo;
     }

  } while(codigo!=0 && sexo!= 'x' && idade!=0);

  mediaIdade = (float) somaIdades / totalPessoas;
  outros = outros - 1;

  puts("Relatório");
  printf("+------------------+--------+ ");
  printf("\n| Soma das idades  |%8.0d|", somaIdades);
  printf("\n| Total de pessoas |%8d|", totalPessoas);
  printf("\n| Media de idades  |%8.1f|",mediaIdade);
  printf("\n| Homens           |%8d|", homens);
  printf("\n| Mulheres         |%8d|", mulher);
  printf("\n| Outros           |%8d|", outros);
  printf("\n| Maior Idade      |%8.0d|", maiorIdade);
  printf("\n| ID do mais velho |%8d|", idVelho);
  printf("\n| Menor Idade      |%8.0d|", menorIdade);
  printf("\n| ID do mais novo  |%8d|", idNovo);
  printf("\n+------------------+--------+\n");
  return 0;
}