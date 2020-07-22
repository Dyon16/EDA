#include <stdio.h>
#define tam 20

void main()
{
    char strep[tam];
    char str[tam];
    char l;

    int contA = 0, rep = 0, aux = 0;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        aux = 0;

        if (str[i] == 'A')
            {
                contA++;
            }
        
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                aux++;
                //printf("cheguei\n");
                //printf("aux: %d\n", aux);
                if (aux > 1)
                {
                    //printf("e agore entrei salvando %c\n", str[i]);
                    strep[i] = str[i];
                    //printf("foi salvo %c\n", strep[i]);
                    break;
                }
            }
        }
    }

    printf("\n--- SAIDA ---\n");

    for (int i = 0; strep[i] != '\0'; i++)
    {
        printf("%c - %d\n", strep[i], strep[i]);
    }

    printf ("'A' = %d\n", contA);

    //printf("String: %s\n", strep);
}

