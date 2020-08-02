#include <stdio.h>

int pot(int b, int e)
{
    if (e == 1)
      return b;
   else
      return b * pot(b, e - 1);
}

void main()
{
    int b, e, resp;

    printf("Digite o valor da base: ");
    scanf("%d",&b);

    printf("Digite o valor do expoente: ");
    scanf("%d",&e);

    resp = pot(b, e);

    printf("Resp: %d \n", resp);
}