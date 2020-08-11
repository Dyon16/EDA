#include <stdio.h>

int Soma(int vec[], int tam, int i, int soma)
{
    if (i == tam)
       return soma;
    else   
    {
        if (vec[i] > 0) 
           soma = vec[i] + Soma(vec,tam,i+1,soma);
        else   
           soma = soma + Soma(vec,tam,i+1,soma);  
    }
    return soma;   
}   

int main()
{
    int soma = 0, i = 0, resultado, tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int vec[tam];
    
    for (int i = 0; i < tam; i++)
    {
        printf ("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vec[i]);
    }

    soma = 0;
    i = 0;

    resultado = Soma(vec, 5, i, soma);

    printf("Soma: %d \n", resultado);
    
}