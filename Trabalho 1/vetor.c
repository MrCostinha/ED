#include <stdio.h>
#include <stdlib.h>

#include "vetor.h"

struct vetor { // Definição do tipo estruturado (2ª)
    int tamanho;
    float *elementos;
};

Vetor* criaVetor(int n) {
    Vetor* v = (Vetor*) malloc(sizeof(Vetor));

    if (v == NULL){ // Verifica v foi alocado corretamente
    	printf("Memoria insuficiente!\n");
    	exit(1);
    }

    v->tamanho = n;
    v->elementos = (float*) malloc(n * sizeof(float));

    if (v->elementos == NULL){ // Verifica se os elementos de v foram alocados corretamente
    	printf("Memoria insuficiente!\n");
    	exit(1);
    }

    return v;
}
void liberaVetor(Vetor* v) {
    free(v->elementos);
    free(v);
}
int tamanhoVetor(Vetor* v) {
    return v->tamanho;
}
float acessa(Vetor* v, int i) {
    return v->elementos[i];
}
void atribui(Vetor* v, int i, float c) {
    v->elementos[i] = c;
}
float maior(Vetor* v) {
    int indexMaior = 0; // define o primeiro elemento como o maior

    for (int i = 1; i < v->tamanho; i++) {
    	if (v->elementos[i] > v->elementos[indexMaior]) {
    		indexMaior = i;
    	}
    }

    return v->elementos[indexMaior];
}
float menor(Vetor* v) {
    int indexMenor = 0; // define o primeiro elemento como o menor

    for (int i = 1; i < v->tamanho; i++) {
    	if (v->elementos[i] < v->elementos[indexMenor]) {
    		indexMenor = i;
    	}
    }

    return v->elementos[indexMenor];
}
void listarVetor(Vetor* v) {
    printf("{ ");
    for (int i = 0; i < v->tamanho; i++) {
    	printf("%.1f ", v->elementos[i]);
    }
    printf("}\n");
}
float somaVetor(Vetor* v) {
    float soma = 0.0;

    for (int i = 0; i < v->tamanho; i++) {
    	soma += v->elementos[i];
    }

    return soma;
}
float somaElementos(Vetor* v, int n) {
    float soma = 0.0;

    for (int i = 0; i < n; i++) {
    	soma += v->elementos[i];
    }

    return soma;
}
Vetor* somaVetores(Vetor* v1, Vetor* v2) {
    if (v1->tamanho != v2->tamanho) {
    	printf("Vetores com tamanho diferente!\n");
    	exit(1);
    }

    Vetor* v3 = criaVetor(v1->tamanho);

    for (int i = 0; i < v1->tamanho; i++) {
        atribui(v3, i, v1->elementos[i]+v2->elementos[i]);
    }

    return v3;
}
void mostrarSomaVetores(Vetor* v1, Vetor* v2) {
    if (v1->tamanho != v2->tamanho) {
    	printf("Vetores com tamanho diferente!\n");
    	exit(1);
    }

    printf("v1 = ");
    listarVetor(v1);
    printf("\nv2 = ");
    listarVetor(v2);
    printf("\n");

    for(int i = 0; i < v1->tamanho; i++) {
        printf("\t%.1f + %.1f = %.1f\n", v1->elementos[i], v2->elementos[i], v1->elementos[i]+v2->elementos[i]);
    }
}