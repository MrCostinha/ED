#include "fila.h"

#include <stdio.h>
#include <stdlib.h>

static int incrementa(int i, int capacidade) { // função para tratar a fila de forma circular
    return (i + 1) % capacidade;
}

Fila* criaFila(int capacidade) {
    Fila* f = (Fila*)malloc(sizeof(Fila));
    
    f->vetor = (Senha**)malloc(capacidade * sizeof(Senha*));
    f->qtdItens = 0;
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = capacidade;
    f->capacidade = capacidade;

    return f;
}

int filaVazia(Fila *f) {
    return (f->qtdItens == 0);
}

void insere(Fila *f, char tipoSenha, int numeroSenha) {
    if (f->qtdItens == f->capacidade) {
        printf("===Fila cheia!===");
        exit(1);
    }

    Senha *novaSenha = malloc(sizeof(Senha));
    novaSenha->tipoSenha = tipoSenha;
    novaSenha->numeroSenha = numeroSenha;
    f->vetor[f->fim] = novaSenha;
    f->fim = incrementa(f->fim, f->capacidade);
    f->qtdItens++;
}

Senha* removeFila(Fila *f) {
    Senha *senha;

    if (filaVazia(f)) {
        printf("---Fila vazia!---\n");
        exit(1);
    }

    senha = f->vetor[f->inicio];
    f->inicio = incrementa(f->inicio, f->capacidade);
    f->qtdItens--;

    return senha;
}

void libera(Fila *f) {
    free(f->vetor);
    free(f);
}