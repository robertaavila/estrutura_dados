#include <stdio.h>

int main(){
    int a; 
    int b;
    int *p; 
    int *q;

    a=2; 
    b=5;
    

    p = &a;
    q = &b;

    printf("a=%d, b=%d, valor de p = %d, valor de q = %d\n", a, b, *p, *q);
    
    *p=1;
    *q=2;

    printf("a=%d, b=%d, valor de p = %d, valor de q = %d\n", a, b, p, q);

}