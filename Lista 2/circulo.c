#include <stdio.h>
#include <stdlib.h>

#include "circulo.h"
#include "ponto.h"

struct circulo {
    Ponto *ponto;
    float raio;
};

Circulo* circ_cria(float x, float y, float r) {
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));

    if (c == NULL){
    	printf("Memoria insuficiente!\n");
    	exit(1);
    }

    c->ponto = cria(x, y);
    c->raio = r;

    return c;
}

void circ_libera(Circulo *c) {
    libera(c->ponto);
    free(c);
}
float circ_area(Circulo *c) {
    return pi * (c->raio * c->raio);
}
float circunferencia(Circulo *c) {
    return 2*pi * c->raio;
}
void alteraRaio(Circulo *c, float r) {
    if (r > 0) {
        c->raio = r;
    } else {
        printf("Valor do raio inválido!");
    }
}
void alteraPonto(Circulo *c, float x, float y) {
    atribui(c->ponto, x, y);
}
void acessaCirculo(Circulo *c, Ponto *p, float *r) {
    float x, y;

    acessa(c->ponto, &x, &y);
    atribui(p, x, y);
    *r = c->raio;
}
void mostraElementosCirculo(Circulo *c) {
    printf("Raio do círculo: %.2f\n", c->raio);
    printf("Área do círculo: %.2f\n", circ_area(c));
    printf("Circunferência do círculo: %.2f\n", circunferencia(c));
}
int circ_interior(Circulo *c, Ponto *p) {
    if (distancia(c->ponto, p) < c->raio) {
        return 1;
    } else {
        return 0;
    }
}