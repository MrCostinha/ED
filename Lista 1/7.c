#include <stdio.h>

void mostrar(char *palavra) {
    if (*palavra != '\0') {
        mostrar(palavra + 1);
        printf("%c", *palavra);
    }
}

int main() {
    mostrar("Estrutura de Dados");

    return 0;
}