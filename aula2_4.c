#include <stdio.h>
#include <stdlib.h>
 int main() {
 int *p, *q;
 p = (int *) malloc(sizeof(int));
 q = (int *) calloc(1, sizeof(int));
 printf("p = %d, q = %d\n", *p, *q);
 *p = 100;
 *q = 200;
 printf("p = %d, q = %d\n", *p, *q);
 p = realloc(p, sizeof(int));
 p++;
 *p = 500;
p--;
printf("p = %d\n", *p);
p++;
printf("p = %d\n", *p);
free(p); free(q);
}