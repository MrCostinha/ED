#ifndef FILA_H
#define FILA_H

#include "senha.h"

struct fila {
    struct senha **vetor;
    int inicio;
    int fim;
    int tamanho;
    int capacidade;
    int qtdItens;
};
typedef struct fila Fila;

Fila* criaFila(int capacidade);
int filaVazia(Fila *f);
void insere(Fila *f, char tipoSenha, int numeroSenha);
Senha* removeFila(Fila *f);
void libera(Fila *f);

#endif