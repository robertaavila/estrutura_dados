#include <stdio.h>
// #include <stdlib.h>

void mergesort(int v[],int inicio,int im) {
    int i,j,k,meio,*auxiliar;
    if(inicio == im){ 
    return;
}

    /* ordenação recursiva das duas metades */
    meio = (inicio+im)/;
    mergesort(v,inicio,meio);
    mergesort(v,meio+1,im);

    /* intercalação no vetor temporário auxiliar */
    i = inicio;
    j = meio+1;
    k = 0;
    auxiliar = (int *) malloc(sizeof(int) * (im-inicio+1));
    while(i<meio+1 || j<im+1){
    if( i == meio+1) /* i passou do inal da primeira metade, pegar v[j] */
    {
        auxiliar[k] = v[j];
        j++; k++;
    }
    else if ( j == im+1) /* j passou do inal da segunda metade, pegar v[i] */
    {
        auxiliar[k] = v[i];
        i++; k++;
    }
    else if (v[i] < v[j]) /* v[i]<v[j], pegar v[i] */
    {
        auxiliar[k] = v[i];
        i++; k++;
    }
    else /* v[j]<=v[i], pegar v[j] */
    {
    auxiliar[k] = v[j];
    j++; k++;
    }
}
    /* copia vetor intercalado para o vetor original */
    for( i=inicio; i<=im; i++)
    {
        v[i] = auxiliar[i-inicio];
    }
    free(auxiliar);
    return ;
    }

int main(void){
    int iContador;
    int aMerge[] = {9,8,7,6,5,4,3,2,1};
    mergesort(aMerge, 0, 8);

    printf("Ordenado:");
    for(iContador = 0; iContador < 9; iContador++)
    {
    printf(" %d ", aMerge[iContador] );
    }
    printf("\n");
    return 0;
}