#include <stdio.h>

int main() {
    int a, *b;

    a = 3;
    b = &a;
    *b += 5;

    printf("Valor do a: %d \n", a);
    printf("Valor do b: %d \n", *b);

    return 0;
}