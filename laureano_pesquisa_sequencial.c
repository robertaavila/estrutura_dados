#include <stdio.h>

int pesquisa_sequencial(char *item, int contador, char chave)
{
    register int t;
    /* procura do 10
 elemento do vetor até o último */
    for (t = 0; t < contador; t++)
    {
        if (chave == item[t])
        {
            return t; /* se encontrar, retorna o índice */
        }
    }
    return -1; /* não encontrou a chave */
}
