/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Atividade 1
 * Disciplina: Programacao
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 11/08/2021
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include<stdio.h>

void leSudoku(int n, int sudoku[16][16])
{
    char s[2];
    int i, j, dim=n * n;
    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            scanf("%s", s);
            if(s[0]>= '1' && s[0]<='9')
            {
                sudoku[i][j]=s[0] - '0';
            }
            if(s[0]>='A' && s[0]<='G')
            {
                sudoku[i][j] = s[0] - 'A' + 10;
            }
        }
    }
}
void imprimeLinha (int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        printf("+");
        for(j=0;j<n;j++)
        {
            printf("---");
        }
    }
    printf("+\n");
}
void imprimeSudoku(int n, int sudoku[16][16])
{
    int i, j, dim= n * n;
    imprimeLinha(n);
    for(i=0;i<dim;i++)
    {
        printf("|");
        for (j=0;j<dim;j++)
        {
            int num = sudoku[i][j];
            if(num<=9)
            {
                printf("%2d ", num);
            }
            else
            {
                printf("%2c ", num - 10 + 'A');
            }
            if((j+1)% n==0)
            {
                printf("|");
            }
        }
        printf("\n");
        if((i+1)% n == 0)
        {
            imprimeLinha(n);
        }
    }
}
/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 * Funcao que testa uma solucao da Sudoku
 * Parametros :
 *  n = dimensao das regioes
 *  sudoku − jogo preenchido
 *  lin − linha do erro ( se houver )
 *  col − coluna do erro ( se houver )
 * Retorna :
 *  1 se a matriz e uma solucao do sudoku
 *  0 caso contrario , modificando os parametros
 *      lin e col para indicar a linha e coluna onde
 *      foi detectado o problema .
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
int sudokuOk(int n, int sudoku[16][16], int *lin, int *col)
{
    int i, j, k, dim = n * n;
    int p, q;       //auxiliares para mudar as pequenas regiões
    int r;         //variavel para receber o valor do sudoku
    int v[dim+1]; //vetor para percorrer a pequena região

    //Preenchendo o vetor com zeros
    for(k=0;k<dim+1;k++)
    {
        v[k]=0;
    }

    //Verificar Região
    for(i=0;i<dim;i=i+n) //i=i+n faz com que passe para a próxima região
    {
        for(j=0;j<dim;j=j+n)
        {
            for(p=i;p<i+n;p++)
            {
                for(q=j;q<j+n;q++)
                {
                    r=sudoku[p][q];
                    v[r]=v[r]+1;
                    if (v[r]>1)
                    {
                        *lin = p;
                        *col = q;
                        return 0;
                    }
                }
            }
            for(k=1;k<=dim;k++)
            {
                v[k]=0;
            }
        }
    }

    //Verificar Linha
    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            for(k=1;k<dim;k++)
            {
                if (sudoku[i][j]==sudoku[i][j+k] && j+k<dim)
                {
                *lin = i;
                *col = j+k;
                return 0;
                }
            }
        }
    } 
    //Verificar Coluna
    for(i=0;i<dim;i++)
    {
        for(j=0;j<dim;j++)
        {
            for(k=1;k<=dim;k++)
            {
                if (sudoku[i][j]==sudoku[i+k][j] && i+k<dim)
                {
                  *lin = i+k;
                  *col = j;
                  return 0;
                }
            }
        }
    }
    return 1;
}

int main(void)
{
    int n, nlin, ncol, ok;
    int sudoku[16][16];
    scanf("%d", &n);
    leSudoku(n, sudoku);
    imprimeSudoku(n, sudoku);
    ok = sudokuOk(n, sudoku, &nlin, &ncol);
    if(ok)
        puts("Sudoku Ok!");
    else
        printf("Erro na posicao (%d,%d)\n", nlin, ncol);
    return 0;
}