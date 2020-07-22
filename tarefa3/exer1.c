/*Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, digamos min e max,
e deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo do vetor.   
Escreva também uma função main que use a função mm.*/

void mm (int *vec, int *min, int *max)
{
    *max = -32000;
    *min = 32000;

    for(int i = 0; i < tam; i++)
    {
        if (vec[i] > *max)
        {
            *max = vec[i]
        }

        else if (vec[i] < *min)
        {
            *min = vec[i]
        }
    }
}

void main()
{
    int tam, m, M;
    int *min, *Max; 

    min = &m;
    Max = &M;
    
    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tam);
    
    int vec[tam];
    
    for(int i = 0; i < tam; i++)
    {
        printf("Digite o elemento %d do vetor" i+1);
        scanf("%d", vec[i]);
    }

    mm(vec, m, M);

    printf("Min: %d", m);
    printf("Max: %d", M);
}
