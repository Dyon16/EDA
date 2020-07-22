#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int ***M1, T1, T2, T3;

    printf("Tamanho da dimensão 1: ");
    scanf("%d",&T1);
    
    printf("Tamanho da dimensão 2: ");
    scanf("%d",&T2);
    
    printf("Tamanho da dimensão 3: ");
    scanf("%d",&T3);

    M1 = (int ***)malloc(T1*sizeof(int));

    for (int i = 0; i < T1; i++) 
    {
        M1[i] = (int **)malloc(T2 * sizeof(int));
    }

    for (int i = 0; i < T1; i++) 
    {
        for (int j = 0; j < T2; j++) 
        {
            M1[i][j] = (int **)malloc(T3 * sizeof(int));
        }
    }

    for (int i = 0; i < T1; i++) 
    {
        for (int j = 0; j < T2; j++) 
        {
            for (int k = 0; k < T3; k++) 
            {   
                printf("Elemento [%d][%d][%d]: ", i+1, j+1, k+1);
                scanf("%d", &M1[i][j][k]);
            }
        }
    }

    for (int i = 0; i < T1; i++) 
    {
        for (int j = 0; j < T2; j++) 
        {
            for (int k = 0; k < T3; k++) 
            {   
                printf("%d ", M1[i][j][k]);
                if (k == T3 - 1) 
                    printf("\n");
                    else printf("\t");
            }
        }
    }

    for (int i = 0; i < T1; i++) 
    {
        for (int j = 0; j < T1; j++) 
        {
            free(M1[i][j]);
        }
    }
    for (int i = 0; i < T3; i++) 
    {
        free(M1[i]);
    }
}