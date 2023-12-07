#include <stdlib.h>
#include <stdio.h>
#include "arvore.h"

int main() {
    Arvore *exp = criaNo(
        '+',
        criaNo('*',
               criaNo('+',
                      criaFolha(3.0),
                      criaFolha(6.0)),
               criaNo('-',
                      criaFolha(4.0),
                      criaFolha(1.0))),
        criaFolha(5.0));

    imprimePos(exp);
    printf("\nResultado = %.2f\n", avalia(exp));

    Arvore *testFolha = criaFolha(4.0);
    ehFolha(testFolha);

    liberaArvore(exp);
    liberaArvore(testFolha);

    return 0;
}