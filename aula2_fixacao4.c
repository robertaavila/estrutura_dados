#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 2;
    int b = 3;
    int *p;
    p = &b;
    a = a + *p;
    printf("a=%d, valor de p = %d, endereco de p =", a, *p);
}