#include <stdio.h>

int main() {
    char x, y;
    int z;
    float w;

    x = 65;
    y = 'B';
    z = 345;
    w = 4.567;
    
    printf("Apresentação de caracteres 1: %c, %c \n", x, y);
    printf("Apresentação de caracteres 2: %d, %d \n", x, y);
    printf("Inteiro: %d\nReal: %.3f", z, w);

    return 0;
}