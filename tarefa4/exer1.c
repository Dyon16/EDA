/*Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, digamos min e max,
e deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo do vetor.   
Escreva também uma função main que use a função mm.*/

#define TAM 4

void mm (int *vec, int *min, int *max)
{
    for(int i = 0; i < TAM; i++)
    {
        if (vec[i] > *max)
        {
            *max = vec[i];
        }

        if (vec[i] < *min)
        {
            *min = vec[i];
        }
    }
}

void main()
{
    int vec[TAM];
    int tam, m = 32000, M = -32000;
    int *min, *Max; 

    min = &m;
    Max = &M;
    
    
    for(int i = 0; i < TAM; i++)
    {
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vec[i]);
    }

    mm(vec, min, Max);

    printf("Min: %d\n", m);
    printf("Max: %d\n", M);
}
