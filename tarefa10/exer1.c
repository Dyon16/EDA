#include <stdio.h>

void ordenar(int *vec, int tam)
{
    int aux;
    for (int i = 0; i < tam; i++)
    {
        if (vec[i] > vec[i+1])
        {
            printf("i: %d\n", vec[i]);
            printf("i+1: %d\n", vec[i+1]);
            aux = vec[i];
            vec[i] = vec[i+1];
            vec[i+1] = aux;
            printf("i: %d\n", vec[i]);
            printf("i+1: %d\n", vec[i+1]);
        }
        for (int j = 0; j < tam; j++)
        {
            printf("%d ", vec[j]);
        }
        printf ("\n");

    }
}

void main()
{
    int tam;

    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tam);

    int vec[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vec[i]);
    }

    ordenar(vec,tam);

}