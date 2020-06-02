
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
	char **lista;	
	lista = (char **) malloc(sizeof(char *) * 5);
	if(lista == NULL) {
		printf("Nao foi possivel alocar memoria.");
		return 1;
	}
	int i;
	for(i = 0; i < 5; i++) {
		lista[i] = (char *) malloc(sizeof(char) * 10);
	}
	strcpy(lista[0], "Alberto");
	strcpy(lista[1], "Beatriz");
	strcpy(lista[2], "Carolina");
	strcpy(lista[3], "Dario");
	strcpy(lista[4], "Ernesto"); 
	for(i = 0; i < 5; i++) {
		printf("%s \n", lista[i]);
	}
	lista = (char **) realloc(lista, sizeof(char *) * 15);
	if(lista == NULL) {
		printf("Nao foi possivel realocar memoria.");
		return 1;
	}
	for(i = 5; i < 15; i++) {
		lista[i] = (char *) malloc(sizeof(char) * 10);
	}
	strcpy(lista[5], "Maria");
	strcpy(lista[6], "Guilherme");
	strcpy(lista[7], "Silvia");
	strcpy(lista[8], "Sonia");
	strcpy(lista[9], "Pedro"); 
	strcpy(lista[10], "Arnaldo");
	strcpy(lista[11], "Simone");
	strcpy(lista[12], "Anelise");
	strcpy(lista[13], "Susi");
	strcpy(lista[14], "Marcelo"); 
	for(i = 0; i < 15; i++) {
		printf("%s \n", lista[i]);
	}
	for(i = 0; i < 15; i++) {
		free(lista[i]);
	}
	free(lista);
	return 0;
}