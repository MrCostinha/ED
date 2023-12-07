#include "fila.h"
#include "pilha.h"
#include "senha.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // biblioteca para gerar numeros aleatorios
#include <locale.h> // setlocale
#include <wchar.h> // wchar_t

int gerarNumeroSenha() {
    return rand()%100; // gera um numero aleatorio entre 0 e 99
}

void enfileirar(Fila *f, char tipoSenha) { // função para enfileirar uma senha
    int numeroSenha = gerarNumeroSenha();

    insere(f, tipoSenha, numeroSenha);
    wprintf(L"\n\tSenha %c%02d adicionada à fila.\n\n", tipoSenha, numeroSenha);
}
Senha* desenfileirar(Fila *f) { // função para desenfileirar uma senha
    return removeFila(f);
}

// funções para printar os menus
void printMenu() {
    printf("\tMENU DE CONTROLE\n");
    printf("\t1 - Menu caixa\n");
    printf("\t2 - Menu cliente\n");
    printf("\t3 - Encerrar\n\n");
}
void printMenuCaixa() {
    printf("\n\tCAIXA\n\n");
    wprintf(L"\t1 - Chamar o próximo\n");
    printf("\t2 - Visualizar filas\n");
    printf("\t3 - Ultimas chamadas\n");
    printf("\t4 - Voltar ao menu anterior\n\n");
}
void printMenuCliente() {
    printf("\n\tRETIRAR SENHA\n");
    printf("\t1 - Normal\n");
    wprintf(L"\t2 - Prioritária\n");
    printf("\t3 - Voltar ao menu anterior\n");
}

void chamarProximo(Fila *filaNormal, Fila *filaPrioritaria, Pilha *pilhaChamadas) {
    static int chamadasNormais = 0;
    static int chamadasPrioritarias = 0;

    if (filaPrioritaria->qtdItens > 0) {
        if (chamadasPrioritarias == 0) {
            Senha *senha = removeFila(filaPrioritaria);
            wprintf(L"\n\tChamando o próximo da fila prioritária: %c%02d\n\n", senha->tipoSenha, senha->numeroSenha);
            push(pilhaChamadas, senha->tipoSenha, senha->numeroSenha);
            free(senha);
            chamadasPrioritarias++;
        } else if (filaNormal->qtdItens > 0) {
            Senha *senha = removeFila(filaNormal);
            wprintf(L"\n\tChamando o próximo da fila normal: %c%02d\n\n", senha->tipoSenha, senha->numeroSenha);
            push(pilhaChamadas, senha->tipoSenha, senha->numeroSenha);
            free(senha);
            chamadasNormais++;
            if (chamadasNormais >= 2) {
                chamadasPrioritarias = 0;
                chamadasNormais = 0;
            }
        }
    } else if (filaNormal->qtdItens > 0) {
        Senha *senha = removeFila(filaNormal);
        wprintf(L"\n\tChamando o próximo da fila normal: %c%02d\n\n", senha->tipoSenha, senha->numeroSenha);
        push(pilhaChamadas, senha->tipoSenha, senha->numeroSenha);
        free(senha);
    } else {
        wprintf(L"\n\tNão há clientes nas filas.\n\n");
    }
}
void visualizarFilas(Fila *filaNormal, Fila *filaPrioritaria) {
    printf("\n\tFila normal: %d\n", filaNormal->qtdItens);
    wprintf(L"\tFila prioritária: %d\n\n", filaPrioritaria->qtdItens);
}
void ultimasChamadas(Pilha *pilhaChamadas) {
    wprintf(L"\n\tÚltimas chamadas: \n");
    printPilha(pilhaChamadas);
    printf("\n");
}

void voltarMenu() {
    printf("\t\tVoltando ao menu anterior.\n");
}

void retirarSenha(int tipo, Fila *filaNormal, Fila *filaPrioritaria) {
    switch (tipo) {
        case 1:
            enfileirar(filaNormal, 'N');
            break;
        case 2:
            enfileirar(filaPrioritaria, 'P');
            break;
        case 3:
            voltarMenu();
            break;
        default:
            wprintf(L"\n\tOpção inválida!\n");
            break;
    }
}

void encerrar() {
    printf("\tEncerrando o programa...\n");

    exit(0);
}

int main() {
    setlocale(LC_ALL, "Portuguese-Brazilian");
    srand(time(NULL));

    Fila *filaNormal = criaFila(10);
    Fila *filaPrioritaria = criaFila(10);
    Pilha *pilhaChamadas = criaPilha();

    int escolha;

    while (1) {
        printMenu();
        printf("\tEscolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printMenuCaixa();
                int escolhaCaixa;
                printf("\n\tEscolha do caixa: ");
                scanf("%d", &escolhaCaixa);

                switch (escolhaCaixa) {
                    case 1:
                        chamarProximo(filaNormal, filaPrioritaria, pilhaChamadas);
                        break;
                    case 2:
                        visualizarFilas(filaNormal, filaPrioritaria);
                        break;
                    case 3:
                        ultimasChamadas(pilhaChamadas);
                        break;
                    case 4:
                        voltarMenu();
                        break;
                    default:
                        wprintf(L"\n\tOpção inválida!\n");
                        break;
                }
                break;
            case 2:
                printMenuCliente();
                int opcaoCliente;
                printf("\n\tEscolha do cliente: ");
                scanf("%d", &opcaoCliente);
                retirarSenha(opcaoCliente, filaNormal, filaPrioritaria);
                break;
            case 3:
                encerrar();
                break;
            default:
                wprintf(L"\n\tOpção inválida!\n");
                break;
        }
    }

    libera(filaNormal);
    libera(filaPrioritaria);
    liberaPilha(pilhaChamadas);

    return 0;
}