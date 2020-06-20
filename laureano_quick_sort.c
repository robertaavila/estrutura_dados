#include <stdio.h>

void qs(char *item, int left, int right);

void qs(char *item, int left, int right)
{
    int i, j;
    char x, y;
    i = left;
    j = right;
    x = item[(left + right) / 2]; /* elemento pivo */
    /* partição das listas */
    do
    {
        /* procura elementos maiores que o pivô na primeira parte*/
        while (item[i] < x && i < right)
        {
            i++;
        }

        /* procura elementos menores que o pivô na segunda parte */
        while (x < item[j] && j > left)
        {
            j--;
        }
        if (i <= j)
        {
            /* processo de troca (ordenação) */
            y = item[i];
            item[i] = item[j];
            item[j] = y;
            i++;
            j--;
        }
    } while (i <= j);
    /* chamada recursiva */
    if (left < j)
    {
        qs(item, left, j);
    }
    if (i < right)
    {
        qs(item, i, right);
    }
    return;
}
int main(void)
{
    char aVetor[] = "34 31 526";
    printf("\nAntes = [%s]", aVetor);
    /* na primeira chamada, os parâmetros iniciais são os extremos da matriz */
    qs(aVetor, 0, strlen(aVetor) - 1);
    printf("\nDepois = [%s]", aVetor);
    return 0;
}