#include <stdlib.h>
#include "linear_list.h"

struct List_ {
    int quantity;
    int element[LENGHT]; 
};

List* create_list(){
    List* list = (List*) malloc(sizeof(List));
    if(list != NULL) {
        list -> quantity = 0;
    }
    return list;
}

int insert_begin(List* list, int value){
    if(LENGHT == list->quantity) return 0;
    int i; 
    // nao deveria ser i++?
    for(i = list->quantity; i > 0; i--) {
        list->element[i] = list->element[i-1];
    }
    list->element[0] = value;
    list->quantity++;
    return 1;
}

int insert_end(List* list, int value) {
    if(LENGHT == list->quantity) return 0;
    list -> element[list->quantity] = value;
    list -> quantity++;
    return 1;
}

int insert_position(List* list, int position, int value) {
    if(LENGHT == list->quantity || position > list->quantity || position < 1) return 0;
    int i;
    for(i = list->quantity; i >= position; i--){
        list->element[i] = list->element[i -1]; 
    } 
    list->element[position - 1] = value;
    list->quantity++;
    return 1;
}

int remove_begin(List* list, int* value){
    if(list->quantity > 0) {
         *value = list->element[0];
         int i;
        //  nao deveria ser i--?
         for(i = 0; i < list->quantity; i++) {
             list->element[i] = list->element[i+1];
         }
         list->quantity--;
         return 1;
    }
    return 0;
}

int remove_end(List* list, int* value){
    if(list->quantity > 0){
        *value = list->element[list->quantity-1];
        list->quantity--;
        return 1;
    } 
    return 0;
}

int remove_position(List *list, int position, int* value){
    int ret;
    if(position == 1){
        ret = remove_begin(list, value);
        return ret;
    } else if(list->quantity == position) {
        ret = remove_end(list, value);
        return ret;
    }
    if(list->quantity > position) {
        *value = list->element[position -1];
        int i;
        for(i = position -1; i < list->quantity; i++) {
            list->element[i] = list->element[i+1];
        }
        list->quantity--;
        return 1;
    }
    return 0;
}

int get_begin(List* list, int* value) {
    if(list->quantity > 0) {
        *value = list->element[0];
        return 1;
    }
    return 0;
}

int get_end(List* list, int* value){
    if(list->quantity > 0) {
        *value = list->element[list->quantity-1];
        return 1;
    }
    return 0;
}

int get_position(List* list, int position, int* value) {
    if(list->quantity >= position && position >0) {
        *value = list->element[position-1];
        return 1;
    }
    return 0;
}

void free_list(List *list) {
    free(list);
}