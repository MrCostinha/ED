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
    // *elementos

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
    
}
void maior(Vetor* v) {

}
void menor(Vetor* v) {

}
void listarVetor(Vetor* v) {

}
float somaVetor(Vetor* v) {

}
float somaElementos(Vetor* v, int n) {

}
Vetor* somaVetores(Vetor* v1, Vetor* v2) {

}