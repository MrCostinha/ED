#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}
float serieS(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 1.0/fatorial(n)*1.0 + 1.0/serieS(n-1)*1.0;
    }
}

int main() {
    int n;

    scanf("%d", &n);
    if (n > 0) {
        printf("%.4f", serieS(n));
    }

    return 0;
}