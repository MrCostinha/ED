#include <stdio.h>

void reverso(char *palavra, int i) {
    if (*(palavra+i) == '\0') {
        return;
    }
    reverso(palavra, i+1);
    printf("%c", *(palavra+i));    
}

int main() {
    reverso("Estrutura de Dados", 0);

    return 0;
}