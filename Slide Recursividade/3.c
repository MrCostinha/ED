#include <stdio.h>

int potencia(int x, int y) {
    int pot = 1;
    
    while (y>0) {
        pot *= x;
        y--;
    }
    
    return pot;
}

int main() {
    int x, y;
    
    scanf("%d%d", &x, &y);
    printf("%d", potencia(x, y));

    return 0;
}