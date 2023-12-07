#ifndef ARVORE_H
#define ARVORE_H

typedef struct arv Arvore;

Arvore *criaNo(char op, Arvore *esq, Arvore *dir);

Arvore *criaFolha(float vl);

void liberaArvore(Arvore *ar);

void imprimePos(Arvore *ar);

int ehFolha(Arvore *ar);

float avalia(Arvore *ar);

#endif