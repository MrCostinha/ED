#include <stdio.h>

void troca(int *a, int *b) {
    int x = *a;
    
    *a = *b;
    *b = x;
}

int main() {
    int a, b;

    a = 3;
    b = 5;

    troca(&a, &b);

    printf("Valor do a: %d\n", a);
    printf("Valor do b: %d\n", b);

    return 0;
}