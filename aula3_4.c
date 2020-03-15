#include <stdlib.h>
#include "aula3_3.h"

struct Aluno_ {
int matricula;
float notas[3];
};

Aluno* cria_aluno(int matricula) {
struct Aluno_* a = (struct Aluno_*) malloc(sizeof(struct Aluno_));

        if(a != NULL) {
            a->matricula = matricula;
            a->notas[0] = 0;
            a->notas[1] = 0;
            a->notas[2] = 0;
        }

    return a;
}

    void define_notas(Aluno* aluno, float n1, float n2, float n3) {
        aluno->notas[0] = n1;
        aluno->notas[1] = n2;
        aluno->notas[2] = n3;
    }

    void define_nota(Aluno* aluno, float nota, int sequencia) {
        aluno->notas[sequencia-1] = nota;
    }
    float obtem_media(Aluno* aluno) {
        float media;
        media = (aluno->notas[0] + aluno->notas[1] + aluno->notas[2])
            /3;
        return media;
    }

    void obtem_notas(Aluno* aluno, float* n1, float* n2, float* n3,float* media) {
        *n1 = aluno->notas[0];
        *n2 = aluno->notas[1];
        *n3 = aluno->notas[2];
        *media = obtem_media(aluno);
    }

    void libera(Aluno* aluno) {
        free(aluno);
    }

