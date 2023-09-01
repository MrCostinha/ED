#include <stdio.h>

int contador(char *palavra, char caractere, int repeticoes) {
    if (*palavra == '\0') {
        return repeticoes;
    }
    if (*palavra == caractere) {
        repeticoes++;
    }
    return contador(palavra+1, caractere, repeticoes);
}

int main() {
    printf("%d", contador("Estrutura de Dados", 'a', 0));

    return 0;
}