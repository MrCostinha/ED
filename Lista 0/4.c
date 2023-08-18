#include <stdio.h>

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("Insira o %dº valor: ", i+1);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d \t", v[i]);
    }

    return 0;
}