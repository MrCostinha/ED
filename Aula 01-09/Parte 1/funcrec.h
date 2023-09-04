#include <stdio.h>
#include <string.h>

// Função que retorna o tamanho de uma string passada como parâmetro.
int tamanho(char *string){
    if(string[0] == '\0')
        return 0;
    else
        return 1 + tamanho(string + 1);
}

/* Função que retorna a quantidade de ocorrencias de uma
letra em uma string passados como parâmetro. */
int ocorrencia(char *str, char letra){
    if(str[0] == '\0')
        return 0;
    else{
        if(str[0] == letra)
            return 1 + ocorrencia(str + 1, letra);
        else
            return ocorrencia(str + 1, letra);
    }
}

// Função recursiva que imprime uma string.
void imprime(char *str){
    if(*str != '\0'){
        printf("%c", *str);
        imprime(str + 1);
    }
}

// Função recursiva que imprime o reverso de uma string.
void imprimeReverso(char *str){
    if(*str != '\0'){
        imprimeReverso(str + 1);
        printf("%c", *str);
    }
}