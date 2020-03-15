#include <stdio.h>

void funcaoParametroVetor(int parametroVetor[]) {
    parametroVetor[0] += 100;
        printf("Valor do parametro[0] na funcao = %d \n",
    parametroVetor[0]);
    }

int main() {
    int a[] = {1, 2, 3, 4, 5};
    printf("Valor de a[0] antes de passar pela funcao = %d\n", a[0]);
    
    funcaoParametroVetor(a);
    printf("Valor de a[0] depois de passar pela funcao = %d\n", a[0]);
}