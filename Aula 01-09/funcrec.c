#include <stdio.h>
#include <string.h>


int tamanho(char *string){
    if(string[0] == '\0')
        return 0;
    else
        return 1 + tamanho(string + 1);
}

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

void imprime(char *str){
    if(*str != '\0'){
        printf("%c", *str);
        imprime(str + 1);
    }
}

void imprimeReverso(char *str){
    if(*str != '\0'){
        imprimeReverso(str + 1);
        printf("%c", *str);
    }
}