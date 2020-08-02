#include <stdio.h>

int maxi (int n, int v[])
{
    int j, m = v[0];

    for (j = 1; j < n; j++)
    {
        if (v[j] > m)
        {
            m = v[j];
        }
    }
    return m;
}

void main()
{
    int resp;
    int v[] = {23, 3, 2, 5, 1, 7, 0};

    resp = maxi(7, v);

    printf ("%d\n", resp);
}