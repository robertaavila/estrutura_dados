//exemplo de manipulação de lista encadeada
#include <stdio.h>
#include <stdlib.h>

struct LISTA {
    char string[41];
    int numero;
    struct LISTA *NEXT;
    struct LISTA *LAST;
};

int main(void){
    int i;
    struct LISTA *lista;

    lista = calloc(1, sizeof(struct LISTA));
    if (lista == NULL) {
        printf("\nErro de alocação de memória.");
        exit(1);
    }

    lista->NEXT = NULL;
    lista->LAST = NULL;

    for (i = 0; i < 25; i++) {
        struct LISTA *atual;
        lista->numero = i;
        printf(lista->string, "numero %02d", i);
 
    // aloca o proximo elemento da lista
    lista->NEXT = calloc(1, sizeof(struct LISTA));
    if(lista->NEXT == NULL) {
        printf("\nErro de alocação de memória");
        exit(1);
    }

    // pega o elemento atual
    atual = lista;
    lista = lista->NEXT;
    lista->NEXT = NULL;

    // guarda o endereço do elemento anterior
    lista->LAST = atual;
    }   

    lista = lista->LAST;
    // descarta o ultimo elemento alocado nao utilizado
    free(lista->NEXT); 
    lista->NEXT = NULL;

    while(1) {
        printf("\nNumero = %d, string = %s", lista->numero, lista->string);
        if (lista->LAST == NULL) {
            break;
        }

        lista = lista->LAST;
    }

    while(lista != NULL) {
        struct LISTA *next;
        next = lista->NEXT;

        // liberar o endereço
        free(lista);
        lista = NULL;
        lista = next;
    }

    return 0;
}

