/* programa_matriz_02.c */
#include <stdio.h>

int main (){
int *piValor; /* ponteiro para inteiro */
int iVariavel =11;
piValor = &iVariavel; /* pegando o endereço de memória da variável */

printf ("Endereco: %d\n", piValor);
printf ("Valor : %d\n", *piValor);

*piValor=180118;
printf ("Valor alterado: %d\n", iVariavel);
printf ("Endereco : %d\n", piValor);
return 0;
}