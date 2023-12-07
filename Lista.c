#include <stdio.h>
#include <string.h>

#include "Lista.h"

struct lista {
    int info;
    struct lista *prox;
};

Lista* criaLista() {
    return NULL; // Primeiro elemento inválido
}
Lista* insereInicio(Lista *l, int i) {
    Lista *nova = (Lista*) malloc(sizeof(Lista)); // Nova lista para alocar o novo elemento

    nova->info = i; // O primeiro valor passa a ser o novo elemento
    nova->prox = l; // O próximo elemento é a lista antiga

    return nova;
}
void printLista(Lista *l) {
    Lista *p; // Ponteiro para percorrer a lista

    for (p = l; p != NULL; p = p->prox) {
        printf("info = %d\n", p->info);
    }
}
int vazia(Lista *l) {
    return (l == NULL); // Retorna 1 se for vazia e 0 caso contrário
}
Lista* busca(Lista *l, int i) {
    Lista *p;

    for (p = l; p != NULL; p = p->prox) {
        if (p->info == i) {
            return p;
        }
    }

    return NULL;
}
Lista* retira(Lista *l, int i) {
    Lista *ant = NULL; // Ponteiro para o elemento anterior
    Lista *p = l; // Ponteiro para percorrer a lista

    while (p != NULL && p->info != i) { // Procura o elemento na lista
        ant = p; // Guarda o elemento anterior
        p = p->prox;
    }

    if (p == NULL) { // Não achou o elemento
        return l; // Retorna a lista original
    }

    if (ant == NULL) { // O elemento é o primeiro da lista
        l = p->prox; // Retira o elemento do início
    } else { // O elemento está no meio da lista
        ant->prox = p->prox; // Retira o elemento do meio
    }

    free(p); // Libera a memória alocada pelo elemento

    return l;
}
void libera(Lista *l) {
    Lista *p = l; // Ponteiro para percorrer a lista
    Lista *t; // Ponteiro para guardar o próximo elemento

    while (p != NULL) {
        t = p->prox; // Guarda o próximo elemento
        free(p); // Libera a memória alocada pelo elemento
        p = t; // Avança para o próximo elemento
    }
}