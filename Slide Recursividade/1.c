#include <stdio.h>

int main() {
    int n, soma = 0;
    
    scanf("%d", &n);

    while (n>0) {
        soma += n;
        n--;
    }

    printf("%d", soma);

    return 0;
}