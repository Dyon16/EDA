#include <stdio.h>

int tam = 0;

struct fila
{
   int elem;
   //int pos;
};

void insere(struct fila f1[10])
{
     printf ("Informe o elemento a ser inserido: ");
     scanf ("%d", &f1[0].elem);
     tam++;
}

void remover()
{

}

void printar(struct fila f1[10])
{
    printf ("Fila: ");
    for (int i=0; i< tam; i++)
    {
        printf ("%d", f1[i].elem);
    }
    printf ("\n");
}

int main()
{
    struct fila f[10];
    int op;

    printf("1 - Insere\n");
    printf("2 - Remove\n");
    printf("3 - Mostrar\n");
    printf("4 - Sair\n");
    scanf("%d", &op);

    while (op != 4)
    {
        switch(op)
        {
            case 1: 
                insere(f);
                break;
            case 2: 
                remover();
                break;
            case 3: 
                printar(f);
                break;
            case 4: break;
        }

        printf("1 - Insere\n");
        printf("2 - Remove\n");
        printf("3 - Mostrar\n");
        printf("4 - Sair\n");
        scanf("%d", &op);
    }  
} 