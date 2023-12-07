#ifndef PILHA_H
#define PILHA_H

#include "senha.h"

struct pilha {
    struct senha *prim;
    int qtdItens;
};
typedef struct pilha Pilha;

Pilha* criaPilha();
int pilhaVazia(Pilha *p);
void push(Pilha *p, char tipoSenha, int numeroSenha);
int pop(Pilha *p);
void printPilha(Pilha *p);
void liberaPilha(Pilha *p);

#endif