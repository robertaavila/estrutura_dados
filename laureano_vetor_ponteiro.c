#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p; 
    p = (int *) malloc(5*sizeof(int));
  
    int valor = 0;
    for (int i = 0; i < 5; i++){
        *p = valor;
        valor ++;
        printf("%d \n", *p); 
        p +=4;
    }
    
}