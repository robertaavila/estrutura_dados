#define LENGHT 10

typedef struct List_ List; 

List* create_list(); 
int insert_begin(List* list, int value); 
int insert_end(List* list, int value);
int remove_begin(List* list, int* value);
int remove_end(List* list, int* value);
int get_begin(List* list, int* value);
int get_end(List* list, int* value);
void free_List(List* list);
