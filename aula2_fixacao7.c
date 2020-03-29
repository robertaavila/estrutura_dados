#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main(){
    typedef struct Compra_{
        char nome[10][8];
        float valor[10]; 
    } Compra;
    
    Compra *compra = (Compra *) malloc(sizeof(Compra));
    strcpy(compra->nome[0], "arroz");
    strcpy(compra->nome[1], "feijao");
    strcpy(compra->nome[2], "batata");
    strcpy(compra->nome[3], "agua");
    strcpy(compra->nome[4], "cenoura");
    compra->valor[0] = 2.10;
    compra->valor[1] = 2.20;
    compra->valor[2] = 2.30;
    compra->valor[3] = 2.40;
    compra->valor[4] = 2.50;

    for (int i =0; i<5; i++){
        printf("%8s: %.2f \n", compra->nome[i], compra->valor[i]);
    }
}
