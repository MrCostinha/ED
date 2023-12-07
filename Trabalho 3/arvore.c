#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

struct arv {
    char op;
    float valor;
    Arvore *esq, *dir;
};

Arvore* criaNo(char op, Arvore* esq, Arvore* dir) {
    Arvore* nova = (Arvore*) malloc(sizeof(Arvore));

    if (nova != NULL) {
        if(op == '+' || op == '-' || op == '*' || op == '/'){
            nova->op = op;
            nova->esq = esq;
            nova->dir = dir;

            return nova;
        } else {
            printf("Operador invalido!");
            exit(1);
        }
    } else {
        printf("Falha na alocacao!");
        exit(1);
    }
}

Arvore* criaFolha(float vl) {
    Arvore* nova = (Arvore*) malloc(sizeof(Arvore));

    if (nova != NULL) {
        nova->valor = vl;
        nova->esq = NULL;
        nova->dir = NULL;

        return nova;
    } else {
        printf("Falha na alocacao!");
        exit(1);
    }
}

void liberaArvore(Arvore* ar) {
    if (ar != NULL) {
        liberaArvore(ar->esq);
        liberaArvore(ar->dir);
        free(ar);
    }
}

void imprimePos(Arvore* ar) {
    if (ar != NULL) {
        imprimePos(ar->esq);
        imprimePos(ar->dir);
        ehFolha(ar) ? printf("%.2f ", ar->valor) : printf("%c ", ar->op);
    }
}

int ehFolha(Arvore* a) {
    return (a->esq == NULL && a->dir == NULL);
}

float avalia(Arvore* ar) {
    if (ar != NULL) {
        if (ehFolha(ar))
            return ar->valor;
        else {
            float v_esq = avalia(ar->esq);
            float v_dir = avalia(ar->dir);

            switch (ar->op) {
                case '+': return v_esq + v_dir;
                case '-': return v_esq - v_dir;
                case '*': return v_esq * v_dir;
                case '/': return v_esq / v_dir;
            }
        }
    }
}