#include <stdio.h>
#include <stdlib.h>

struct lista {
    int info;
    struct lista *prox;
};
typedef struct lista Lista;

int maioresQueN(Lista *l, int n) {
    int count = 0;

    for (Lista *p = l; p != NULL; p = p->prox) {
        if (p->info > n)
            count++;
    }

    return count;
}
Lista *inserirComeco(Lista *p, int elem) {
    Lista *novo = (Lista *)malloc(sizeof(Lista));

    novo->info = elem;
    novo->prox = p;

    return novo;
}
Lista *inserirFinal(Lista *p, int elem) {
    Lista *novo = (Lista *)malloc(sizeof(Lista));

    novo->info = elem;
    novo->prox = NULL;

    if (p == NULL)
        return novo;

    Lista *aux;

    for (aux = p; aux->prox != NULL; aux = aux->prox);
    
    aux->prox = novo;

    return p;
}
Lista *ultimo(Lista *l) {
    Lista *p;

    for (p = l; p->prox != NULL; p = p->prox);

    return p;
}
Lista *concatena(Lista *l1, Lista *l2) {
    for (Lista *p = l2; p != NULL; p = p->prox)
        l1 = inserirFinal(l1, p->info);

    return l1;
}
Lista *retiraElemento(Lista *l, int n) {
    Lista *p, *ant;

    for (p = l, ant = NULL; p != NULL && p->info != n; ant = p, p = p->prox);

    if (p == NULL)
        return l;

    if (ant == NULL)
        l = p->prox;
    else
        ant->prox = p->prox;

    free(p);
    return l;
}
int iguais(Lista *l1, Lista *l2) {
    Lista *p1, *p2;

    for (p1 = l1, p2 = l2; p1 != NULL && p2 != NULL; p1 = p1->prox, p2 = p2->prox) {
        if (p1->info != p2->info)
            return 0;
    }

    return p1 == p2;
}