#include <stdio.h>
#include <stdlib.h>

#include "circulo.h"
#include "ponto.h"

struct circulo {
    float x, y, r;
};

Circulo* circ_cria(float x, float y, float r) {
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));

    if (c == NULL){
    	printf("Memoria insuficiente!\n");
    	exit(1);
    }

    c->x = x;
    c->y = y;
    c->r = r;

    return c;
}

void circ_libera(Circulo *c) {
    free(c);
}
float circ_area(Circulo *c) {
    return 3.14159265 * (c->r * c->r);
}
float circunferencia(Circulo *c) {
    return 2*3.14159265 * c->r;
}
void alteraRaio(Circulo *c, float r) {
    c->r = r;
}
void alteraPonto(Circulo *c, float x, float y) {
    c->x = x;
    c->y = y;
}
void acessaCirculo(Circulo *c, Ponto *p, float *r) {
    acessa(p, &c->x, &c->y);
    *r = c->r;
}
void mostraElementosCirculo(Circulo *c) {
    printf("Raio do círculo: %.2f\n", c->r);
    printf("Área do círculo: %.2f\n", circ_area(c));
    printf("Circunferência do círculo: %.2f\n", circunferencia(c));
}
int circ_interior(Circulo *c, Ponto *p) {
    float d = distancia(p, cria(c->x, c->y));
    if (d < c->r) {
        return 1;
    } else {
        return 0;
    }
}