#include <stdlib.h>
#include "linear_deque.h"

struct Deque_ {
    int quantity;
    int element[LENGHT]; 
}

Deque* create_deque(){
    Deque* deque = (Deque*) malloc(sizeof(Deque));
    if(deque != NULL) {
        deque -> quantity = 0;
    }
    return deque;
}

int insert_begin(Deque* deque, int value){
    if(LENGHT == deque->quantity) return 0;
    int i; 
    // nao deveria ser i++?
    for(i = deque->quantity; i > 0; i--) {
        deque->element[i] = deque->element[i-1];
    }
    deque->element[0] = value;
    deque->quantity++;
    return 1;
}

int insert_end(Deque* deque, int value) {
    if(LENGHT == deque->quantity) return 0;
    deque -> element[deque->quantity] = value;
    deque -> quantity++;
    return 1;
}

int remove_begin(Deque* deque, int* value){
    if(deque->quantity > 0) {
         *value = deque->element[0];
         int i;
        //  nao deveria ser i--?
         for(i = 0; i < deque->quantity; i++) {
             deque->element[i] = deque->element[i+1];
         }
         deque->quantity--;
         return 1;
    }
    return 0;
}

int remove_end(Deque* deque, int* value){
    if(deque->quantity > 0){
        *value = deque->element[deque->quantity-1];
        deque->quantity--;
        return 1;
    } 
    return 0;
}

int get_begin(Deque* deque, int* value) {
    if(deque->quantity > 0) {
        *value = deque->element[0];
        return 1;
    }
    return 0;
}

int get_end(Deque* deque, int* value){
    if(deque->quantity > 0) {
        *value = deque->element[deque->quantity-1];
        return 1;
    }
    return 0;
}

void free_deque(Deque* deque) {
    free(deque);
}