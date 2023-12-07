#ifndef SENHA_H
#define SENHA_H

struct senha {
    char tipoSenha;
    int numeroSenha;
    struct senha *prox;
};
typedef struct senha Senha;

#endif