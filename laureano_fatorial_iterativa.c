#include <stdio.h>

int fatorialc ( int n )
{
int t, f;
f = 1;
for ( t = 1; t<=n; t++ )
    f = f * t;
    printf("%d\n", f);
    return f;
}


int main(void){
fatorialc(3);
fatorialc(4);
fatorialc(5);
fatorialc(6);
fatorialc(7);

}