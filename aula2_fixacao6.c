#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10]; 

    int *p;
    p = (int *) malloc(10*sizeof(int)); 

    int i = 0;
    int controle = 55;
    for (i=0; i<10; i++){
        vetor[i] = controle;
        controle -= 4;
    }
    for (i=0; i<10; i++){
        printf("vetor na posição %d = %d\n", i, vetor[i]);
    }

    for (p = vetor; p < &vetor[10]; p++){
           printf("vetor na posição %d = %d\n", p, *p);
    }

}
