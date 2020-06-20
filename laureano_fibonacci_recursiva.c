#include <stdio.h>

int ibr(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    /* chama a si próprio 2 vezes!!! */

    return ibr(n - 1) + ibr(n - 2);
}

int main(void)
{
    printf("%d\n", ibr(5));
    printf("%d\n", ibr(6));
    printf("%d\n", ibr(7));
    printf("%d\n", ibr(8));
    printf("%d\n", ibr(9));
    printf("%d\n", ibr(10));
}