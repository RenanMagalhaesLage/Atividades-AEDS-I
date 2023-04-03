#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32) || defined(__WIN64__) || defined(__CYGWIN__)
#define VIEW "./i_view32"
#elif defined(__linux__)
#define VIEW "eog"
#endif

typedef int *image;

image alloc_memo(int nl, int nc)
{
    return (image)malloc(nl * nc * sizeof(int));
}

void write_pbm(image img, char *name, int nl, int nc)
{
    FILE *f;
    int k;
    int tamanho=nl*nc;
    int cont=0;

    //Criando o arquivo
    f = fopen (name,"w");
    fprintf(f,"P1\n");
    fprintf(f, "#Isso é um comentario\n");
    fprintf(f,"%d %d\n",nl, nc);

    
    for(k=0 ; k<tamanho ; k++)
    {
      fprintf(f,"%d ", img[k]);
      cont ++;
      if(cont==nc)
      {
        fprintf(f,"\n");
        cont = 0;
      }

    }
    fclose(f);
}

image read_pts(char *name, int *nl, int *nc)
{
    FILE *f;
    image img = NULL;

    int i,j;          //Dimensões
    int n;            //Número de pontos
    int k;            //Auxiliar
    int tamanho=0;    //Tamanho da matriz
    int cordi, cordj; //Coordenadas dos pontos


    //Abrir um arquivo:
    f = fopen (name,"rt");

    //Leitura do n° de linhas e colunas:
    fscanf (f, "%d %d\n", nl, nc);
    i= *nl;
    j= *nc;
    tamanho = i * j;
    //Leitura do n° de pontos:
    fscanf (f, "%d\n", &n);

    img = alloc_memo(i,j);

    //Colocando zero
    for(k=0 ; k<tamanho ; k++)
    {
        img[k] = 0;
    }

    //Lendo as coordenadas
    while(!feof(f))
    {
        fscanf (f, "%d %d ", &cordi, &cordj);
        k = cordi * j + cordj;
        img[k] = 1;
    }

    fclose(f);
    return img;
}
int main(int argc, char *argv[])
{
    image in;
    char *p;
    char nameIn[40];
    char nameOut[40];
    char command[100];
    int nl, nc;
    if (argc < 2)
    {
        printf("Uso: %s <imagem[.pts]>\n\n", argv[0]);
        return 1;
    }
    if (p = strstr(argv[1], ".pts"))
        *p = 0;
    strcpy(nameIn, argv[1]);
    strcat(nameIn, ".pts");
    strcpy(nameOut, argv[1]);
    strcat(nameOut, ".pbm");

    // transformation
    in = read_pts(nameIn, &nl, &nc);
    write_pbm(in, nameOut, nl, nc);

    sprintf(command, "%s %s &", VIEW, nameOut);
    system(command);
    free(in);
    return 0;
}