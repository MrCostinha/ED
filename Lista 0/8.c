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

    for(int i = 0; i < 3; i++) {
        scanf("%[^/]", &si[i].matricula);
        scanf("%[^/]", &si[i].nome);
        scanf("%f", &si[i].nota);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s - %s - %.2f\n", si[i].matricula, si[i].nome, si[i].nota);
    }

    return 0;
}