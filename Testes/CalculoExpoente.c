#include <stdio.h>

void main()
{
    int b = 2, e = 4, resp = 1;

    for (int i = 1; i <= e; i++)
    {
        resp = b*resp;
    }

    printf("Resp: %d\n", resp);
}