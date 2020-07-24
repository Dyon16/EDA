#include <stdio.h>

void ordenar(int *vec, int tam)
{
    int aux;
    for (int i = 0; i < tam; i++)
    {
        for (int j = i+1; j < tam; j++)
        {
            if (vec[j] < vec[i])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
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

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }

}