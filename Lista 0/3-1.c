#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    
    a = malloc(sizeof(int));
    *a = 3;
    
    printf("Valor do ponteiro: %d\n", a);
    printf("Valor local do apontador: %d \n", *a);
    
    free(a);

    return 0;
}