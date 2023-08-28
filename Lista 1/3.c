#include <stdio.h>

int somatorioQuadrados(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n*n + somatorioQuadrados(n-1);
    }
}

int main() {
    int n;

    scanf("%d", &n);
    if (n > 0) {
        printf("%d", somatorioQuadrados(n));
    }

    return 0;
}