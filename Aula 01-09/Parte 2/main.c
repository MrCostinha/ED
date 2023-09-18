#include <stdio.h>
#include "ponto.h"

int main() {
	float x, y;
	
	Ponto* a = cria(-1.0, 2.0);
	Ponto* b = cria(0.0, 0.0);

	acessa(a, &x, &y);
	printf("Ponto A: (%.2f, %.2f)\n", x, y);

	atribui(b, 3.0, -4.0);
	acessa(b, &x, &y);
	printf("Ponto B: (%.2f, %.2f)\n", x, y);

	printf("Distância entre A e B: %.2f", distancia(a, b));

	return 0;
}