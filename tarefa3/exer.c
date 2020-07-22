
/*Exercício de passagem de parâmentro

1. Seja um vetor de inteiros (global) de tamanho TAM. Faça um programa com as seguintes funções:

leitura: lê os elementos do vetor.

imaior: retorna o índice do maior elemento do vetor.

media: retorna a média aritmética dos elementos do vetor.

troca: recebe dois valores x e y e substitui x por y no vetor.

Ex.: supor x = 3 e y = 9. Se o vetor inicialmente lido fosse {2, 5, 3, 7, -5, 3, 2, 9},

                                                 depois da troca ele ficaria: {2, 5, 9, 7, -5, 9, 2, 3}

imprime: imprime o vetor.
*/

#include <stdio.h>
#define TAM 4

int vec[TAM];

void leitura ()
{
    /*int tam;

    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tam);

    pTAM = &tam;*/
    
    for (int i = 0; i < TAM; i++)
    {
        printf("Defina o elemento %d do vetor: ", i+1);
        scanf("%d", &vec[i]);
    }
    
}

void maior(int *pM)
{
    for (int i = 0; i < TAM; i++)
    {
        if (vec[i] > *pM)
        {
            *pM = vec[i];
        }
    }
}

void media(int *pMedia)
{
    int soma = 0;
    for (int i = 0; i < TAM; i++)
    {
        soma = soma + vec[i];
    }

    *pMedia = soma/TAM;
}

void troca(int *pX, int *pY)
{   
    for (int i = 0; i < TAM; i++)
    {
        if (vec[i] == *pX)
        {
            vec[i] = *pY;
        }

        else if (vec[i] == *pY)
        {
            vec[i] = *pX;
        }
    }
}

void imprime()
{
    printf("Imprime: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

void main()
{
    int *pM, *pMedia, *pX, *pY, pTAM;
    int M = -32000, med, X, Y, tam;

    pM = &M;
    pMedia = &med;
    pX = &X;
    pY = &Y;
    pTAM = &tam;

    leitura();
    maior(pM);
    media(pMedia);

    printf("Defina o valor de X: ");
    scanf("%d", &X);
    printf("Defina o valor de Y: ");
    scanf("%d", &Y);
    
    troca(pX, pY);

    printf("Maior: %d\n", M);
    printf("Media: %d\n", med);

    imprime();
}