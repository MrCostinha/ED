#include <stdio.h>

#include "circulo.h"
#include "ponto.h"

int main() {
    Circulo* c = circ_cria(3.3, 3.8, 5.0);
    Ponto* p = cria(1.0, 2.0);
    int verificacao = circ_interior(c, p);

    mostraElementosCirculo(c);
    printf("%d", verificacao);
    
    return 0;
}