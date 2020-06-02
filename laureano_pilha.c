/* programa_pilha_01.c */
#include <stdio.h>

void push(int valor);
int pop(void);
int size(void);
int stacktop(void);

int pilha[20];
int pos=0;

void push(int valor)
    {
    pilha[pos]=valor;
    /* Empilha um novo elemento. Não é veriicada a capacidade
    máxima da pilha.*/
    pos++;
    return;
    }

int pop()
{
    /* Retorna o elemento do topo da ilha. Não é veriicado
    o inal da pilha. */
    return (pilha[--pos]);
}

int size()
{
    return pos; /* retorna o topo da pilha */
}

int stacktop() /* retorna o topo da pilha sem desempilhar */
{
    return pilha[pos];
}

int main(int argc, char ** argv )
{printf("\nColocados dados na pilha");
 push(1);
 push(2);
 push(3);

 printf("\nTamanho da pilha %d", size());

 printf("\nPegando dado da pilha: %d", pop());
 printf("\nPegando dado da pilha: %d", pop());
 printf("\nPegando dado da pilha: %d", pop());
 
 printf("\nTamanho da pilha %d", size());
 return 0;
}