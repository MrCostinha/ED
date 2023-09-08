// TAD: Circulo
#include "ponto.h"

// Tipo exportado
typedef struct circulo Circulo;

// Funções exportadas

// Aloca e retorna um círculo com centro (x,y) e raio r
Circulo* circ_cria(float x, float y, float r);

// Libera a memória de um círculo previamente criado.
void circ_libera(Circulo *c);

// Retorna o valor da área do círculo
float circ_area(Circulo *c);

// Retorna o valor da circunferência do circulo
float circunferencia(Circulo *c);

// Função que altera o valor do raio do círculo
void alteraRaio(Circulo *c, float r);

// Função que altera o ponto do círculo
void alteraPonto(Circulo *c, float x, float y);

// Função que acessa os elementos do circulo
void acessaCirculo(Circulo *c, Ponto *p, float *r);

// Função que mostra os elementos do círculo
void mostraElementosCirculo(Circulo *c);

// Verifica se um dado ponto p está dentro do círculo
int circ_interior(Circulo *c, Ponto *p);