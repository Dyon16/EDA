#include <stdio.h>

void main()
{
    int ele, k = 1, same = 0, aux = 0;

    printf("\nDigite a quantidade de elementos: ");
    scanf("%d", &ele);

    int veco[ele];
    int vecs[ele];
    int vecsame[ele];

    for (int i = 0; i < ele; i++)
    {
        printf("\nPreencha o %dº elemento do vetor um: ", i+1);
        scanf("%d", &veco[i]);
    }

    for (int i = 0; i < ele; i++)
    {
        printf("\nPreencha o %dº elemento do vetor dois: ", i+1);
        scanf("%d", &vecs[i]);
    }

    for (int i = 0; i < ele; i++)
    {
        same = 0;
        for (int j = 0; j < ele; j++)
        {
            if (veco[i] != vecs[j])
            {
                same++;
            }
        }

        if (same == ele)
        {
            vecsame[i] = veco[i];
            aux++;
        }
    }

    for (int i = 0; i < aux-1; i++)
    {
        printf("\n%d \n", vecsame[i]);
    }
}