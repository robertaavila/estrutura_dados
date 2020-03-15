#include <stdio.h>

void soma (int, int, int *);
int main ()
    {
        int iValorA;
        int iValorB;
        int iResultado;
        printf ("Entre com os valores:");
        scanf ("%d %d", &iValorA, &iValorB);
        printf("Endereco de iResultado = %d\n", &iResultado);
        soma (iValorA, iValorB, &iResultado);/* está sendo passado o endereço de memória
        da variável, qualquer alteração estará
        sendo realizada na memória */
        printf ("Soma : %d\n", iResultado);
        return 0;
    }
    
void soma (int piValorA, int piValorB, int * piResultado)
{
    printf("Endereco de piResultado = %d\n", piResultado);
    /* o valor está sendo colocado diretamente na memória */
    *piResultado = piValorA + piValorB;
    return;
}