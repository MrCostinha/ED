#include <stdio.h>

int potencia(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * potencia(n-1);
    }
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d", potencia(n));

    return 0;
}