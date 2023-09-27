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

    printf("Vetor 1: ");
    listarVetor(v1);
    printf("Maior elemento do v1: %.2f\n", maior(v1));
    printf("Menor elemento do v1: %.2f\n", menor(v1));
    printf("Soma dos 2 primeiros elementos do v1: %.2f\n", somaElementos(v1, 2));
    printf("Soma de todos os elementos do v1: %.2f\n", somaVetor(v1));
    printf("\n");

    printf("Vetor 2: ");
    listarVetor(v2);
    printf("Maior elemento do v2: %.2f\n", maior(v2));
    printf("Menor elemento do v2: %.2f\n", menor(v2));
    printf("Soma dos 2 primeiros elementos do v2: %.2f\n", somaElementos(v2, 2));
    printf("Soma de todos os elementos do v2: %.2f\n", somaVetor(v2));
    printf("\n");

    printf("Vetor 3: ");
    listarVetor(v3);
    printf("Maior elemento do v3: %.2f\n", maior(v3));
    printf("Menor elemento do v3: %.2f\n", menor(v3));
    printf("Soma dos 2 primeiros elementos do v3: %.2f\n", somaElementos(v3, 2));
    printf("Soma de todos os elementos do v3: %.2f\n", somaVetor(v3));
    printf("\n");

    printf("Soma dos vetores v1 e v2:\n");
    mostrarSomaVetores(v1, v2);
    printf("Vetor resultante da soma dos vetores v1 e v2: ");
    listarVetor(somaVetores(v1, v2));
    printf("\n");

    printf("Soma dos vetores v1 e v3:\n");
    mostrarSomaVetores(v1, v3);

    liberaVetor(v1);
    liberaVetor(v2);
    liberaVetor(v3);

    return 0;
}