/*Escreva um programa que declare uma matriz 10x10 de inteiros. Você deve inicializar a matriz com zeros usando ponteiros
para endereçar seus elementos. Preencha depois a matriz com os números de 1 a 100, também usando ponteiros.*/

#include <stdio.h>

void zera(int *M[10][10], int *l, int *c)
{
    for (*l = 0; *l < 10; *l++)
    {
        for (*c = 0; *c < 10; *c++)
        {
            M[*l][*c] = 0;
        }
    }
}

void main()
{
    int M[10][10];
    int l = 10, c = 10;
    int *pl, *pc;

    pl = &l;
    pc = &c;

    zera(M[10][10], pl, pc);

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j < 10; j++)
            printf("%d ", M[i][j]);
    }

    /*for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            M[i][j] = 0;
        }
    }

    printf("\n--- Saida de dados ---\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j < 10; j++)
            printf("%d ", M[i][j]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("M: Elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }*/
}