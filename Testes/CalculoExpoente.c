#include <stdio.h>

void main()
{
    int b, e, resp = 1;

    printf("Digite o valor da base: ");
    scanf("%d", &b);

    printf("Digite o valor da base: ");
    scanf("%d", &e);

    for (int i = 1; i <= e; i++)
    {
        resp = b*resp;
    }

    printf("Resp: %d\n", resp);
}