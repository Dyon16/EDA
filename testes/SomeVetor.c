#include <stdio.h>

void main()
{
    int tam, soma;

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
        soma = soma + vec[i];
    }

    printf("Soma: %d\n", soma);
}