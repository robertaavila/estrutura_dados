#include <stdio.h>
#include "mergesort.h"

#define MAX 10

int main() {

    int iteracoes = 0;
    int vetor_desordenado[] = {8, 9, 6, 7, 0, 5, 4, 3};
    int i; 
    for(i = 0; i < MAX; i++) printf("%d ", vetor_desordenado[i]);
    printf("\n\n");
    iteracoes = sort(0, 9, vetor_desordenado);

    for(i = 0; i < MAX; i++) printf("%d ", vetor_desordenado[i]);
    printf("em %d iterações \n\n", iteracoes);

}