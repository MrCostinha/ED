/*
Este trabalho consiste de alguns problemas que devem ser resolvidos usando árvores
binárias implementadas com a linguagem C. O propósito é explorar a criação de funções
para percorrimento de árvores binárias. As funções devem obrigatoriamente serem recursivas sempre que for necessário percorrer a árvore, e reutilizar funções para a criação
de novas.
1. Considere uma árvore binária que representa expressões. As folhas das árvores
armazenam operandos e os nós internos operadores. Por exemplo, a expressão
(3 + 6) ∗ (4 − 1) + 5 é representada pela árvore binária ilustrada na figura:
Se avaliada, esta expressão resulta no valor de 32.
Considere a existência do tipo abaixo usado para representar árvores binárias de
expressões onde o campo valor é usado apenas para as folhas e o campo op é usado pelos
nós internos e correspondem às operações aritméticas básicas (+, −, ∗, /).
    struct arv {
        char op;
        float valor;
        struct arv *esq, *dir;
    }
    typedef struct arv Arvore;
Faça um TAD com a representação de árvores binárias de expressão e implemente
as funções indicadas a seguir.
2. Crie funções para criação de árvores binárias de expressão, sendo que não há
árvores vazias, e os nós podem ser folhas ou nós internos.
3. Faça uma função que verifique se uma árvore passada é uma folha. O protótipo
da função deve ser:
int ehFolha(Arvore* a);
4. Faça uma função que imprima a expressão em notação pós-fixada. Usando como
exemplo a árvore anterior, a saída seria 3.0 6.0 + 4.0 1.0 - * 5.0 +. O protótipo da função deve ser:
void imprimePos(Arvore* a);
5. Faça uma função que retorne o valor correspondente à avaliação da expressão. No
exemplo dado, a avaliação da expressão resulta no valor de 32. O protótipo da
função deve ser:
float avalia(Arvore* a);
*/

#include <stdio.h>
#include <stdlib.h>

struct arv {
    char op;
    float valor;
    struct arv *esq, *dir;
};
typedef struct arv Arvore;

Arvore* criaNo(char op, float valor, Arvore* esq, Arvore* dir) {
    Arvore* a = (Arvore*)malloc(sizeof(Arvore));
    
    a->op = op;
    a->valor = valor;
    a->esq = esq;
    a->dir = dir;

    return a;
}

int ehFolha(Arvore* a) {
    return (a->esq == NULL && a->dir == NULL);
}

void imprimePos(Arvore* a) {
    if (a != NULL) {
        imprimePos(a->esq);
        imprimePos(a->dir);
        ehFolha(a) ? printf("%.1f ", a->valor) : printf("%c ", a->op);
    }
}

float avalia(Arvore* a) {
    if (ehFolha(a)) {
        return a->valor;
    } else {
        float v_esq = avalia(a->esq);
        float v_dir = avalia(a->dir);
        switch (a->op) {
            case '+': return v_esq + v_dir;
            case '-': return v_esq - v_dir;
            case '*': return v_esq * v_dir;
            case '/': return v_esq / v_dir;
        }
    }

    return 0;
}