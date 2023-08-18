#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = (int *) malloc(5 * sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        printf("Insira o %dº valor:", i+1);
        scanf("%d", v+i);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d \t", *(v+i));
    }

    free(v);

    return 0;
}