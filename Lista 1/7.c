#include <stdio.h>

int tamanho(char *palavra, int i) {
    if (*(palavra+i) == '\0') {
        return i;
    }
    return tamanho(palavra, i+1);
}

int main() {
    printf("%d", tamanho("Estrutura de Dados", 0));

    return 0;
}