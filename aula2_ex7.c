 #include <stdio.h>

 //exemplo 7

int main() {
    int a = 1, b = 2;
    int *c;
    int *d;
    c = &a;
    d = &b;
    printf("Valor de a = %d, valor de b = %d, valor de c = %d, valor de d = %d\n", a, b, c, d);
    printf("Valor de a = %d, valor de b = %d, valor de c = %d, valor de d = %d\n", a, b, *c, *d);
    c = d;
    printf("Valor de a = %d, valor de b = %d, valor de c = %d, valor de d = %d\n", a, b, c, d);
    printf("Valor de a = %d, valor de b = %d, valor de c = %d, valor de d = %d\n", a, b, *c, *d);
}