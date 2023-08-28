#include <stdio.h>

void mostrar(char *palavra, int i) {
    if (*(palavra+i) == '\0') { // palavra[i] == caractere nulo
        return;
    }
    printf("%c", *(palavra+i));
    mostrar(palavra, i+1);
}

int main() {
    mostrar("Estrutura de Dados", 0);

    return 0;
}