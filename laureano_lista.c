#include <stdio.h>
#include <stdlib.h>

struct LISTA {
    char string[41];
    int numero;
    struct LISTA *NEXT;
};

int main(void) {
    int i;
    struct LISTA *lista;
    struct LISTA *inicio;

    lista = calloc(1, sizeof(struct LISTA));
    if(lista == NULL) {
        printf("/nErro de alocação de memória.");
        exit(-1);
    }
    lista->NEXT = NULL;

    // guardando o inicio da lista
    inicio = lista;
    for(i = 0; i < 25; i++) {
        lista -> numero = i;
        printf(lista -> string, "Numero %02d", i);

        // aloca o proximo elemento da LISTA
        lista -> NEXT = calloc(1, sizeof(struct LISTA));
        if (lista -> NEXT == NULL) {
            printf("\n Erro de alocacao de memoria!");
            exit(-1);
        }

        // posiciona no proximo elemento
        lista = lista -> NEXT;
        lista -> NEXT = NULL;
    }

    // volta pra o inicio da lista
    lista = inicio;
    while(lista -> NEXT != NULL) {
        printf("\nNumero = %d, String = %s", lista -> numero, lista -> string);

    // caminha elemento a elemento da lista
    lista = lista -> NEXT;
   
    // libera o espaço do endereço atual e limpa o endereço
    free(lista);
    lista = NULL;
    // lista = next;    
    }

    return 0;
}

