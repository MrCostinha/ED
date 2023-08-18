#include <stdio.h>
#include <string.h>

struct aluno {
    char matricula[8];
    char nome[100];
    float nota;
};
typedef struct aluno Aluno;

int main() {
    Aluno si[3];

    strcpy(si[0].matricula, "5552890");
    strcpy(si[0].nome, "Matheus Costa");
    si[0].nota = 10.0;

    strcpy(si[1].matricula, "1234567");
    strcpy(si[1].nome, "Maria Rita");
    si[1].nota = 8.75;

    strcpy(si[2].matricula, "7654321");
    strcpy(si[2].nome, "Obede Lima");
    si[2].nota = 9.5;

    for (int i = 0; i < 3; i++) {
        printf("%s - %s - %.2f\n", si[i].matricula, si[i].nome, si[i].nota);
    }

    return 0;
}