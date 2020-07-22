#include <stdio.h>
#include <stdlib.h>

void main()
{
    float *vec, media, soma = 0;
    int num;

    printf("Tamanho do vetor: ");
    scanf("%d", &num);

    vec = (float *) malloc(num * sizeof(float));

    for (int i = 0; i < num; i++)
    {
        printf("Defina a posição %d do vetor: ", i+1);
        scanf("%f", &vec[i]);
    }

    for (int i = 0; i < num; i++)
    {
        soma = soma + vec[i];
    }

    media = soma/num;

    printf ("Media: %0.2f\n", media);
    printf ("Vetor: ");

    for (int i = 0; i < num; i++)
    {
        printf("%0.2f ", vec[i]);
    }

    free(vec);
}