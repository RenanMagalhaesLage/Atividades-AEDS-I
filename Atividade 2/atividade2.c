/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Atividade 1
 * Disciplina: Programacao
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 23/07/2021
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include<stdio.h>
#include<stdlib.h>

int main (void )
{
    int piso[20][20];
    int caneta; // 0=não escreve; 1=escreve
    int direcao; //0=direita; 1=baixo; 2=esquerda; 3=cima
    char comando; //Letra digitada pelo usuário
    int operando; //Quantidade digitada pelo usuário
    int linha, coluna; //posição da tartaruga
    int andar; //Quantidade de casas que a tartaruga vai andar

    int i, j;
  
  for ( i=0; i<20; i++ )
    for ( j=0; j<20; j++ )
    {
        piso[i][j]=0;
        
    }
  direcao=0;
  caneta=0;
  linha=0;
  coluna=0;
  andar=0; 
  
  do{
      scanf("%c", &comando);
        if(comando=='w')
        {
            scanf("%d", &operando);
            //0=direita 1=baixo 2=esquerda 3=cima
            andar = operando-1;
            if(direcao==0){
                if(coluna + andar >=20)
                {
                    exit(0);
                }
                if(caneta==1)
                {
                    piso[linha][coluna]=1;
                    while(andar>0)
                    {
                        coluna=coluna+1;
                        andar--;
                        piso[linha][coluna]=1;
                    }  
                }
                else
                {
                   while(andar>0)
                    {
                        coluna=coluna+1;
                        andar--;
                    }  
                }
                operando=0;
            }

            //FIM 0//

            if(direcao==1){
                if(linha + andar >=20)
                {
                    exit(0);
                }
                if(caneta==1)
                {
                    piso[linha][coluna]=1;
                    while(andar>0)
                    {
                        linha=linha+1;
                        andar--;
                        piso[linha][coluna]=1;
                    } 
                }
                else
                {
                    while(andar>0)
                    {
                        linha=linha+1;
                        andar--;
                    }
                }          
                operando=0;
            }

            //FIM 1//

            if(direcao==2){
                if(coluna - andar <0)
                {
                    exit(0);
                }
                if(caneta==1)
                {
                    piso[linha][coluna]=1;
                    while(andar>0)
                    {
                        coluna=coluna-1;
                        andar--;
                        piso[linha][coluna]=1;
                    }
                }
                else
                {
                    while(andar>0)
                    {
                        coluna=coluna-1;
                        andar--;
                    }
                }
                operando=0;
            }

            //FIM 2//

            if(direcao==3){
                if(linha - andar <0)
                {
                    exit(0);
                }
                if(caneta==1)
                {
                    piso[linha][coluna]=1;
                    while(andar>0)
                    {
                        linha=linha-1;
                        andar--;
                        piso[linha][coluna]=1;
                    }
                }
                else
                {
                    while(andar>0)
                    {
                        linha=linha-1;
                        andar--;
                    }
                }
                operando=0;
            }
        }
        
       //FIM DO W//

        if(comando=='u')          //Levanta a caneta
            caneta=0;
        if(comando=='d')          //Abaixa a caneta
            caneta=1;
        if(comando=='r')          //Gira para direita
        {
            if(direcao==0)
            direcao=1;
            else
            if(direcao==1)
            direcao=2;
            else
            if(direcao==2)
            direcao=3;
            else
            if(direcao==3)
            direcao=0;           
        }           
        if(comando=='l')       //Gira para esquerda
        {         
            if(direcao==0)
                direcao=3;
            else
            if(direcao==3)
                direcao=2;
            else
            if(direcao==2)
                direcao=1;
            else
            if(direcao==1)
                direcao=0;
        }

        if(comando=='p')           //Imprime
            for ( i=0; i<20; i++ )
                {
                    for ( j=0; j<20; j++ )
                        if(piso[i][j])
                            printf("* ");
                        else
                            printf(". ");
                    printf("\n");
                }
  }while(comando != 'e');
  

  return(0);
}