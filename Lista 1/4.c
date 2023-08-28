#include <stdio.h>

int somaElementosVetor(int vetor[], int i) {
    if (i == 0) {
        return vetor[0];
    } else {
        return vetor[i] + somaElementosVetor(vetor, i-1);
    }
}

int main() {
    int vetor[5];

    for (int i = 0; i < 5; i++) {
        vetor[i] = i+1;
    }

    printf("%d", somaElementosVetor(vetor, 4));

    return 0;
}