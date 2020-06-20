typedef struct Nodo_ Nodo;
typedef struct Pilha_ Pilha;

Nodo* cria_nodo(int dado);

int obtem_dado(Nodo* nodo);

Pilha* cria_pilha();

void push(Pilha* pilha, int valor);
int pop(Pilha* pilha, int* valor);
int top(Pilha* pilha, int* valor);
void libera(Pilha* pilha);