#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n-1);
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    printf("%d", soma(n));

    return 0;
}