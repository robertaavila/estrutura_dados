#include <stdlib.h>
#include "linear_queue.h"

struct Queue_ {
    int quantity;
    int element[LENGTH];
};

Queue* create_queue() {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    if(queue != NULL) {
        queue->quantity = 0;
    }
    return queue;
}	

int inserting(Queue* queue, int value) {
    if(LENGTH == queue->quantity) return 0;
    queue->element[queue->quantity++] = value;
    return 1;
}

int removing(Queue* queue, int* value){
    if(queue->quantity > 0) {
        *value = queue->element[0];
        queue->quantity--;
        int i;
        for(i = 0; i < queue->quantity; i++) {
            queue->element[i] = queue->element[i+1];
        }
        return 1;
    }
    return 0;
}

int next(Queue* queue, int* value) {
	if(queue->quantity > 0) {
		*value = queue->element[0];
		return 1;
	}
	return 0;
}

void free_queue(Queue* queue) {
    free(queue);
}