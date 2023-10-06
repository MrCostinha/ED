#include <stdio.h>
#include <stdlib.h>

#include "7.h"

struct lista {
    Contato *pessoa;
    struct lista *prox;
};
struct contato {
    char* nome;
    int idade;
};

Lista* criaLista() {
    return NULL;
}
Lista* inserirContato(Lista* lista, Contato *contato) {
    if (lista == NULL) {
        Lista *novo = (Lista *)malloc(sizeof(Lista));
        novo->pessoa = contato;
        novo->prox = NULL;
        
        return novo;
    } else {
        Lista *novo = (Lista *)malloc(sizeof(Lista));
        novo->pessoa = contato;
        novo->prox = lista;
        
        return novo;
    }
}
Lista* removerContato(Lista* lista, char* nome) {
    Lista *p, *ant;
    
    for (p = lista, ant = NULL; p != NULL && p->pessoa->nome != nome; ant = p, p = p->prox);
    
    if (p == NULL)
        return lista;
    
    if (ant == NULL)
        lista = p->prox;
    else
        ant->prox = p->prox;
    
    free(p);
    return lista;
}
void mostrarLista(Lista *lista) {
    for (Lista *p = lista; p != NULL; p = p->prox)
        printf("Nome: %s\tIdade: %d\n\n", p->pessoa->nome, p->pessoa->idade);
}
Contato *buscarContato(Lista *lista, char* nome) {
    for (Lista *p = lista; p != NULL; p = p->prox)
        if (p->pessoa->nome == nome)
            return p->pessoa;
    
    return NULL;
}