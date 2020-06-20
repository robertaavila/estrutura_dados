#include <stdio.h>
#include <stdlib.h>

struct NOPTR
{
    int information;
    struct NOPTR *next;
    struct NOPTR *last;
};

void add(struct NOPTR **p, int i)
{
    struct NOPTR *aux;

    if (*p == NULL) /* primeiro elemento da lista */
    {
        *p = (struct NOPTR *)malloc(sizeof(struct NOPTR));

        if (*p == NULL)
        {
            printf("\nErro de alocacao de memoria");
            exit(1);
        }
        (*p)->next = NULL;
        (*p)->last = NULL;
        (*p)->information = i;
    }
    else
    {
        aux = *p; /* demais elementos da lista */
        (*p)->next = (struct NOPTR *)malloc(sizeof(struct NOPTR));
        if ((*p)->next == NULL)
        {

            printf("\nErro de alocacao de memoria");
            exit(1);
        }

        *p = (*p)->next;
        (*p)->next = NULL;
        (*p)->last = aux;
        (*p)->information = i;
    }
    return;
}

void insert(struct NOPTR **p, int i)
{
    struct NOPTR *new;
    if (p == NULL)
    {
        printf("\nLista vazia, não pode ser inserido elementos");
        exit(1);
    }

    new = (struct NOPTR *)malloc(sizeof(struct NOPTR));
    if (new == NULL)
    {
        printf("\nErro de alocacao de memoria");
        exit(1);
    }
    new->information = i;
    new->last = *p;
    new->next = (*p)->next;

    /* controla inserção no final da lista */
    if ((*p)->next != NULL)
    {
        struct NOPTR *atual;
        atual = *p;
        *p = (*p)->next;
        (*p)->last = new;
        *p = atual;
    }
    (*p)->next = new;
    return;
}

void delete (struct NOPTR **p)
{
    struct NOPTR *last;
    struct NOPTR *next;

    /* salva os ponteiros para fazer o ajuste */
    last = (*p)->last;
    next = (*p)->next;
    free(p);
    *p = NULL;
    *p = last;
    (*p)->next = next;
    /* controla remoção no final da lista */
    if (next != NULL)
    {
        *p = (*p)->next;
        (*p)->last = last;
    }
    return;
}

struct NOPTR *last(struct NOPTR *p)
{
    if (p->last != NULL)
    {
        return p->last;
    }
    return NULL;
}

struct NOPTR *next(struct NOPTR *p)
{
    if (p->next != NULL)
    {
        return p->next;
    }
    return NULL;
}

int info(struct NOPTR *p)
{
    return p->information;
}

int main(void)
{
    int i;
    struct NOPTR *p;
    p = NULL;
    for (i = 0; i < 10; i++)
    {
        add(&p, i);
    }

    printf("\nImprimindo do final para o inicio");

    for (i = 0; i < 9; i++)
    {
        printf("\nInformation = %d", info(p));
        p = last(p);
    }
    printf("\nInformation = %d", info(p));

    printf("\nImprimindo do inicio para o inal");
    printf("\nInformation = %d", info(p));
    for (i = 0; i < 9; i++)
    {
        p = next(p);
        printf("\nInformation = %d", info(p));
    }

    printf("\nVoltando 1 elementos e inserindo um novo elemento");
    p = last(p);
    insert(&p, 99);
    printf("\nInformation atual = %d", info(p));

    p = next(p);
    printf("\nInformation new = %d", info(p));
    p = next(p);
    printf("\nInformation atual = %d", info(p));
    printf("\nImprimindo do final para o inicio");

    for (i = 0; i < 10; i++)
    {
        printf("\nInformation = %d", info(p));
        p = last(p);
    }
    printf("\nInformation = %d", info(p));

    printf("\nInserindo 1 elemento e imprimindo do inicio para o final");
    insert(&p, 88);
    printf("\nInformation = %d", info(p));
    for (i = 0; i < 11; i++)
    {
        p = next(p);
        printf("\nInformation = %d", info(p));
    }

    printf("\nVoltando 1 elemento e removendo");
    p = last(p);
    printf("\nInformation = %d", info(p));
    delete (&p);
    printf("\nInformation = %d", info(p));

    printf("\nImprimindo do final para o inicio");
    for (i = 0; i < 10; i++)
    {
        printf("\nInformation = %d", info(p));
        p = last(p);
    }
    printf("\nInformation = %d", info(p));

    printf("\nImprimindo do inicio para o final");
    printf("\nInformation = %d", info(p));
    for (i = 0; i < 10; i++)
    {
        p = next(p);
        printf("\nInformation = %d", info(p));
    }

    delete (&p);
    printf("\nImprimindo do final para o inicio");
    for (i = 0; i < 9; i++)
    {
        printf("\nInformation = %d", info(p));
        p = last(p);
    }
    printf("\nInformation = %d", info(p));
    return 0;
}
