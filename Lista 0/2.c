#include <stdio.h>

int main() {
    char x, y;

    x = 65;
    y = 'B';
    
    printf("Valor original: %c (%d), %c (%d)\n", x, x, y, y);
    printf("Apresentação com incremento posterior: %c, %c\n", x++, y--);
    printf("Apresentação com incremento anterior: %c, %c\n", ++x, --y);

    return 0;
}