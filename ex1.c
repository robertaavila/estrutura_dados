#include <stdio.h>

int main(){
    int a;
    int *b;
    int c;

    a=5;
    *b=6;
    c= a+*b;

    printf("a=%d, b=%d, c=%d\n", a, *b, c);
}