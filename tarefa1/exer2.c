#include <stdio.h>

void main()
{
    int M1[3][3];
    int M2[3][3];
    int MR[3][3];
    int somaM1 = 0, somaM2 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("M1: Elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &M1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("M2: Elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &M2[i][j]);
        }
    }

    printf("\n--- Saida de dados ---\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d ", M1[i][j]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d ", M2[i][j]);
    }

    printf("\n");

    //Soma das matrizes
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            MR[i][j] = M1[i][j] + M2[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d ", MR[i][j]);
    }


    //Soma da diagonal principal de M1
    int j = 0;

    for (int i = 0; i < 3; i++)
    {
        somaM1 = somaM1 + M1[i][j];
        j++;
    }

    printf("\nSoma da diagonal principal M1: %d", somaM1);

    j = 0;

    for (int i = 2; i >= 0; i--)
    {
        somaM2 = somaM2 + M1[i][j];
        j++;
    }

    printf("\nSoma da diagonal secundaria M2: %d", somaM2);

    int somaR = somaM1 + somaM2;

    printf("\nSoma resultante: %d\n", somaR);
}