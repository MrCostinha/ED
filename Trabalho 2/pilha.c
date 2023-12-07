#include "pilha.h"

#include <stdio.h>
#include <stdlib.h>

Pilha* criaPilha() {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    p->qtdItens = 0;
    return p;
}

int pilhaVazia(Pilha *p) {
    return (p->prim == NULL);
}

void push(Pilha *p, char tipoSenha, int numeroSenha) {
    Senha *novo = malloc(sizeof(Senha));
    novo->tipoSenha = tipoSenha;
    novo->numeroSenha = numeroSenha;
    novo->prox = p->prim;
    p->prim = novo;
    p->qtdItens++;
}

int pop(Pilha *p) {
    Senha *t;
    int topo;

    if (pilhaVazia(p)) {
        exit(1);
    }

    t = p->prim;
    topo = t->numeroSenha;
    p->prim = t->prox;

    free(t);

    return topo;
}

void printPilha(Pilha *p) {
    Senha *temp = p->prim;

    while (temp != NULL) {
        printf("\t%c%02d\n", temp->tipoSenha, temp->numeroSenha);
        temp = temp->prox;
    }
}

void liberaPilha(Pilha *p) {
    Senha *q = p->prim;

    while (q != NULL) {
        Senha *t = q->prox;
        free(q);
        q = t;
    }

    free(p);
}