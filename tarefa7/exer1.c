#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet1, *vet2, *vet3, TAM, k = 0;

    printf("Tamanho dos vetores: ");
    scanf("%d", &TAM);

    vet1 = (int*)malloc(TAM*sizeof(int));
    vet2 = (int*)malloc(TAM*sizeof(int));
    vet3 = (int*)malloc(TAM*sizeof(int));

    for (int i = 0; i < TAM; i++)
    {
        printf("Elemento %d do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("Elemento %d do vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < TAM; i++)
    { 
        k = 0;
        for (int j = 0; j < TAM; j++)
        {
            if (vet1[i] != vet2[i])
            {
                k++;
                if (k == TAM)
                {
                    vet3[i] = vet1[i];
                }
            }

        }
    }
    

    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vet3[i]);
    }
}