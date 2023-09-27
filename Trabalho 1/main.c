#include "vetor.h"

int main() {
    Vetor* v1 = criaVetor(3);
    atribui(v1, 0, 1.2);
    atribui(v1, 1, 3.4);
    atribui(v1, 2, 5.6);

    Vetor* v2 = criaVetor(3);
    atribui(v2, 0, 6.5);
    atribui(v2, 1, 4.3);
    atribui(v2, 2, 2.1);

    Vetor* v3 = criaVetor(2);
    atribui(v3, 0, 8.8);
    atribui(v3, 1, 3.3);

    listarVetor(v1);
    printf("Soma v1: %f\n", somaVetor(v1));
    listarVetor(v2);
    printf("Soma v2: %f\n", somaVetor(v2));
    mostrarSomaVetores(v1, v2);
    listarVetor(somaVetores(v1, v2));
    mostrarSomaVetores(v1, v3);

    return 0;
}