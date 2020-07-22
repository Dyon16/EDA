#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cont = 0;
    char str[20];

    FILE *arq1 = fopen("arq1.txt", "r");
    FILE *arq2 = fopen("arq2.txt", "w");

    if (arq1 == NULL) 
    {
        printf("Impossível abrir o arquivo.\n");
        exit(1);
    } 
    if (arq2 == NULL) 
    {
        printf("Impossível abrir o arquivo.\n");
        exit(1);
    }

    while (fscanf(arq1, "%s", str) == 1) 
    {
        cont++;
        fprintf(arq2, "%s ", str);

        if (cont == 6) 
        {
            putc('\n', arq2);
        }
    }
}   

