#include <stdio.h>

#define TAM 10

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd)
{
    int *x3, j = 0;
    
    x3 = (int*)malloc((n1) * sizeof(int));
 
    for(int i = 0; i < (n1+n2); i++)
    { 
        if(x1[i] == x2[i])
        { 
            x3[j] = x1[i];
            j++;
        }

        else if (x1[i] > x2[i])
        {
            x3[j] = x2[i];
            x3[j+1] = x1[i]; 
            j = j + 2;
        }

        else if (x1[i] < x2[i])
        {
            x3[j] = x1[i]; 
            x3[j+1] = x2[i];
            j = j + 2;
        }
    }

    return (x3);
}

void main()
{
    int T1 = 5, T2 = 5, T3;
    int X1[] = {1, 3, 5, 6, 7}, X2[] = {1, 3, 4, 6, 8}, *X3;

    printf("Vetor X1: ");

    for (int i = 0; i < T1; i++)
    {
        printf("%d ", X1[i]);
    }

    printf("\n");
    printf("Vetor X2: ");

    for (int i = 0; i < T2; i++)
    {
        printf("%d ", X2[i]);
    }

    printf("\n");

    X3 = (int*)malloc(T3*sizeof(int));
    X3 = uniao(X1, X2, T1, T2, X3);

    printf("Vetor X3: ");

    for (int i = 0; i < T1+T2; i++)
    {
        printf("%d ", X3[i]);
    }

    printf("\n");
}