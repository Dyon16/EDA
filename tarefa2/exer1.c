#include <stdio.h>
#define N 1000

typedef struct
{
    int cod;
    char sexo[15];
    int idade;
    int salario;
} Funcionarios;


void main()
{
    Funcionarios Questionario[N];
    
    for (int i = 0; i < N; i++)
    {
        printf("Digite o codigo: ");
        scanf("%d", &Questionario[i].cod);
        if (Questionario[i].cod < 0)
        {
            break;
        }

        printf("Digite o sexo: ");
        scanf("%s", &Questionario[i].sexo);        

        printf("Digite a idade: ");
        scanf("%d", &Questionario[i].idade);      

        printf("Digite o salario: ");
        scanf("%d", &Questionario[i].salario);
    }

}