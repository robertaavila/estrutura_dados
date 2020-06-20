#include <stdio.h>

int fatorialr( int n)
{
int t, f;
/* condição de parada */
if( n == 1 || n == 0)
{
return 1;
}
f = fatorialr(n-1)*n; /* chamada da função */
printf("\n%d", f);
return f;
}

int main(void){
    printf("\n%d\n", fatorialr(6));
}