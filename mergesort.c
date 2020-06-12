#include<stdlib.h>
#include <stdio.h>
#include "mergesort.h"

int sort(int left, int right, int vector[]) {
    int iteracoes;
    if(left < (right - 1)) {
        int half = (left + right) / 2;
        printf("%d", half);
        sort(left, half, vector);
        sort(half, right, vector);
        iteracoes = merge_alternate(left, half, right, vector);
    }
    return iteracoes;
}

int merge_alternate(int left, int half, int right, int vector[]) {
    int i, j, k;
    int iteracoes = 0;
    int *ordered;
    ordered = (int *) malloc ((right - left) * sizeof (int));

    for(i = left; i < half; i++) {
        iteracoes++;
        ordered[i - left] = vector[i];
    }
    for(j = half; j < right; j++) {       
        iteracoes++;
        ordered[right - left + half - j - 1] = vector[j];
    }
    i = 0; 
    j = right - left - 1;
    for(k = left; k < right; k++) {        
        iteracoes++;      
        if(ordered[i] < ordered[j]) {
            vector[k] = ordered[i++];
        } else {
            vector[k] = ordered[j--];
        }
    }
    return iteracoes;
    free(ordered);
}