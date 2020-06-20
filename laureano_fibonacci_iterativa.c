#include <stdio.h>

int ibc(int n)
{
    int l, h, x, i;
    if (n < 2)
        return 1;
    l = 0;
    h = 1;
    for (i = 2; i <= n; i++)
    {
        /* Cálculo do próximo número da seqüência. */
        x = l;
        l = h;
        h = x + l;
    }
    printf("%d, %d\n", l, h);
    return h;
}

int main(void)
{
    ibc(9);
}