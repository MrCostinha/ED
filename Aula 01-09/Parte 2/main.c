#include <stdio.h>
#include "ponto.h"

int main() {
	Ponto* a = cria(1.0, 2.0);
	Ponto* b = cria(3.0, 4.0);

	distancia(a, b);

	return 0;
}