#include <stdio.h>

void main()
{
    int tam, soma = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vec[tam];

    for (int i = 0; i < tam; i++)
    {
        printf ("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vec[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        if (vec[i] > 0)
        {
            soma = soma + vec[i];
        }
    }

    printf("Soma: %d\n", soma);
}