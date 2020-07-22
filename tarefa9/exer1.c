#include <stdio.h>

typedef struct
{
    char nome[20];
    int codigo;
} Usuario;

void inserir()
{
    printf("CADASTRO\n\n");
    FILE *arquivo = fopen("arq.dat","a+b");
    Usuario User;

    printf("Nome do usuario: ");
    scanf("%s", User.nome);

    printf("Codigo do usuario: ");
    scanf("%d", &User.codigo);

    int teste = fwrite(&User, sizeof(User), 1, arquivo);
    if (ferror(arquivo)) 
        printf("Erro ao inserir os dados.\n");
    else 
        printf("\nCadastro realizado com sucesso. %d\n",teste);
    fclose(arquivo);
}

void main()
{
    inserir();
}
