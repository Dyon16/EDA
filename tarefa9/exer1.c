#include <stdio.h>

/*
- o i= é a variável que vais gravar no arquivo "arq"
- o sizeof é o tamanho do tipo que será gravado
- 10 é a quantidade de registros, como "i" é um vetor de 10 registros, tu gravarás ele todo de uma vez só no arquivo
- arq é a varíável que contém o nome do arquivo e o tipo de operação que farás nele (teste.dat e wb)
*/

typedef struct
{
    char nome[20];
    int codigo;
} Usuario;

void inserir()
{
    int aux;

    printf("CADASTRO\n\n");
    FILE *arquivo = fopen("arq.dat","a+b");
    Usuario User;

    printf("Nome do usuario: ");
    scanf("%s", User.nome);

    printf("Codigo do usuario: ");
    scanf("%d", &User.codigo);

    aux = fwrite(&User, sizeof(User), 1, arquivo);
    if (ferror(arquivo)) 
        printf("Erro ao inserir os dados.\n");
    else 
        printf("\nCadastro realizado com sucesso.\n",aux);
    fclose(arquivo);
}

void main()
{
    inserir();
}
