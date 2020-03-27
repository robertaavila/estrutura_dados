#include <stdio.h>
#include<stdlib.h>

int main(){

    // para fazer o mesmo programa que o exercicio anterior com menos memória usa-se ponteiros para depois limpar a memória declarada. 
    int *p, *q;
    p = malloc (sizeof (int));
    *p = 34;
    q = malloc (sizeof (int));
    *q = 56;

    printf("O valor de p e: %d \n", *p);
    printf("O valor de q e: %d\n", *q);
    
    *p = *p * *q;
    printf("O valor de p * q e: %d \n", *p);
    free(p);
    free(q);
}
