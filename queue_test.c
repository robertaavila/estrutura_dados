#include <stdio.h>
#include "linear_queue.h"

int main() {
  Queue *queue;
  queue = create_queue();
  int i;
  for(i = 0; i < LENGTH; i++) {
    inserting(queue, (i + 1) * 2);
  }
  int value;
  for(i = 0; i < LENGTH; i++) {
    if(removing(queue, &value)) {
      printf("Retirando -> %d\n", value);	
    } else {
      printf("Fila vazia \n");
    }		
  }
  free_queue(queue);
}	