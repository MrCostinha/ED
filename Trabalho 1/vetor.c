#include <stdio.h>
#include <stdlib.h>

#include "vetor.h"

struct vetor {
    int tamanho;
    float *elementos;
};

Vetor* criaVetor(int n) {
    Vetor* v = (Vetor*) malloc(sizeof(Vetor));

    if (v == NULL){
    	printf("Memoria insuficiente!\n");
    	exit(1);
    }

    v->tamanho = n;
    v->elementos = (float*) malloc(n * sizeof(float));

    return v;
}
void liberaVetor(Vetor* v) {
    free(v);
}
int tamanhoVetor(Vetor* v) {
    return v->tamanho;
}
float acessa(Vetor* v, int i) {
    i = v->tamanho;

    return i;
}
void atribui(Vetor* v, int i, float c) {
    i = v->tamanho;
    c = v->elementos[i];
}
void maior(Vetor* v) {
    int maior = 0;

    for (int i = 1; i < v->tamanho; i++) {
    	if (v->elementos[i] > v->elementos[maior]) {
    		maior = v->elementos[i];
    	}
    }
}
void menor(Vetor* v) {
    int menor = 0;

    for (int i = 1; i < v->tamanho; i++) {
    	if (v->elementos[i] < v->elementos[menor]) {
    		menor = v->elementos[i];
    	}
    }
}
void listarVetor(Vetor* v) {
    printf("Vetor: { ");
    for (int i = 0; i < v->tamanho; i++) {
    	printf("%f ", v->elementos[i]);
    }
    printf("}\n");
}
float somaVetor(Vetor* v) {
    float soma = 0;

    for (int i = 0; i < v->tamanho; i++) {
    	soma += v->elementos[i];
    }

    return soma;
}
float somaElementos(Vetor* v, int n) {
    float soma = 0;

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
        v3->elementos[i] = v1->elementos[i] + v2->elementos[i];
    }

    return v3;
}
Vetor* mostrarSomaVetores(Vetor* v1, Vetor* v2) {
    if (v1->tamanho != v2->tamanho) {
    	printf("Vetores com tamanho diferente!\n");
    	exit(1);
    }

    Vetor* v3 = criaVetor(v1->tamanho);

    for (int i = 0; i < v1->tamanho; i++) {
        v3->elementos[i] = v1->elementos[i] + v2->elementos[i];
    }

    for(int i = 0; i < v1->tamanho; i++) {
        printf("%f + %f = %f\n", v1->elementos[i], v2->elementos[i], v3->elementos[i]);
    }

    return v3;
}