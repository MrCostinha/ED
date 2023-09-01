#include <stdio.h>

int tamanho(char *string);
int ocorrencia(char *string, char letra);
void imprime(char *string);
void imprimeReverso(char *string);

int main() {
    char *str = "Matheus";

    printf("Tamanho da string: %d\n", tamanho(str));
    printf("Ocorrencia de %c: %d\n", 'a', ocorrencia(str, 'a'));
    printf("String: ");
    imprime(str);
    printf("\nString reversa: ");
    imprimeReverso(str);

    return 0;
}