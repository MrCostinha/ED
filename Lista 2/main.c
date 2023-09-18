#include <stdio.h>

#include "circulo.h"
#include "ponto.h"

int main() {
    Circulo *c = circ_cria(0.0, 0.0, 3.5);
    Ponto *p = cria(1.0, 2.0);

    alteraPonto(c, 3.0, -4.0);
    mostraElementosCirculo(c);
    printf("%d", circ_interior(c, p));

    circ_libera(c);

    return 0;
}