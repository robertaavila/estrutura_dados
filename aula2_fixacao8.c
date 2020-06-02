#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5]; 

    int *p;
    p = (int *) malloc(5*sizeof(int)); 

    int valor = 0;
    for (int i = 0; i < 5; i++){
        *p = valor;
        valor ++;
        printf("O valor %d do ponteiro é: %d\n", i, *p); 
        p +=4;
    }

    p-=20;

  for (int i = 0; i < 5; i++){
        vetor[i] = *p;
        printf("O valor %d do vetor é: %d\n", i, vetor[i]); 
        p +=4;
    }

  for (int i = 0; i < 5; i++){
        vetor[i]+=5;
        p = &vetor[i];
        printf("O valor %d do ponteiro é: %d\n", i, *p); 
        p +=4;
    }
    


}