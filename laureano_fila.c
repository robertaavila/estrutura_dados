#include <stdio.h>
#include <stdlib.h>

# define TAMANHO_MAXIMO 100

struct queue {
    int itens[TAMANHO_MAXIMO];
    int front,rear; 
};

int empty(struct queue *pq) {
    /* se o início da fila for igual ao final da fila, a fila está vazia */ 
    if(pq->front == pq->rear) {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *pq, int x) {
    if(pq->rear +1 >= TAMANHO_MAXIMO) {
        printf("\n Estouro da capacidade da fila");
        exit(1);
    }
    pq->itens[pq->rear++] = x;
    return;
}

int size(struct queue *pq) {
    return (pq -> rear +1);
}

int front(struct queue *pq) {
    /* o primeiro elemento sempre está no início do vetor */ 
    return pq -> itens[0];
}

int dequeue(struct queue * pq){
    int x, i;
    /* Salva o primeiro elemento e refaz o arranjo dos itens, puxando o segundo elemento
    para o primeiro, o terceiro para o segundo e assim sucessivamente. */ 
    if( empty(pq) )
    {
        printf("\nFila vazia");
        exit(1);
    }
    /* Salva o primeiro elemento e refaz o arranjo dos itens, puxando o segundo elemento
    para o primeiro, o terceiro para o segundo e assim sucessivamente. */
    x = pq->itens[0];
    for( i=0; i < pq->rear; i++)
    {
    pq->itens[i] = pq->itens[i+1];
    }
    pq->rear--;
    return x;
} 

int main(void)
{
    struct queue q;
    q.front = 0; q.rear = 0;
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);

    printf("\nFila vazia %d", empty(&q));
    printf("\nTamanho da fila %d", size(&q));
    printf("\nProximo da fila %d", front(&q));
    printf("\nTirando da fila %d", dequeue(&q));
    printf("\nTirando da fila %d", dequeue(&q));
    printf("\nTirando da fila %d", dequeue(&q));
    printf("\nProximo da fila %d", front(&q));
    printf("\nTirando da fila %d", dequeue(&q)); 
    printf("\nFila vazia %d", empty(&q));
    printf("\n");
}