#include <stdio.h>

void mostrar(char *palavra) {
    if (*palavra != '\0') { // \0 == caractere nulo
        printf("%c", *palavra);
        mostrar(palavra + 1);
    }
}

int main() {
    mostrar("Estrutura de Dados");

    return 0;
}