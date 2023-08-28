#include <stdio.h>

int contador(char *palavra, char caractere, int repeticoes, int i) {
    if (*(palavra+i) == '\0') {
        return repeticoes;
    }
    if (*(palavra+i) == caractere) {
        repeticoes++;
    }
    return contador(palavra, caractere, repeticoes, i+1);
}

int main() {
    printf("%d", contador("Estrutura de Dados", 'a', 0, 0));

    return 0;
}