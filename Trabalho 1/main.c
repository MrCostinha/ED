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

    printf("Vetor A = ");
    listarVetor(v1);
    printf("Maior elemento: %.1f\n", maior(v1));
    printf("Menor elemento: %.1f\n", menor(v1));
    printf("Soma dos 2 primeiros elementos: %.1f\n", somaElementos(v1, 2));
    printf("Soma de todos os elementos: %.1f\n", somaVetor(v1));
    printf("\n");

    printf("Vetor B: ");
    listarVetor(v2);
    printf("Maior elemento: %.1f\n", maior(v2));
    printf("Menor elemento: %.1f\n", menor(v2));
    printf("Soma dos 2 primeiros elementos: %.1f\n", somaElementos(v2, 2));
    printf("Soma de todos os elementos: %.1f\n", somaVetor(v2));
    printf("\n");

    printf("Vetor C: ");
    listarVetor(v3);
    printf("Maior elemento: %.1f\n", maior(v3));
    printf("Menor elemento: %.1f\n", menor(v3));
    printf("Soma dos 2 primeiros elementos: %.1f\n", somaElementos(v3, 2));
    printf("Soma de todos os elementos: %.1f\n", somaVetor(v3));
    printf("\n\n");

    printf("Soma dos vetores A e B = \n");
    mostrarSomaVetores(v1, v2);
    printf("A + B = ");
    listarVetor(somaVetores(v1, v2));
    printf("\n");

    printf("Soma dos vetores A e C = \n");
    mostrarSomaVetores(v1, v3);

    liberaVetor(v1);
    liberaVetor(v2);
    liberaVetor(v3);

    return 0;
}