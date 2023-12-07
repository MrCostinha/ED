#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
}
void bubbleSort(int *v, int n){ 
    if (n < 1)
        return;
    
    int troca = 0;
    for (int i = 0; i < n-1; i++) {
        if (v[i] > v[i+1]) {
            swap(&v[i], &v[i+1]);
            troca = 1;
        }
        tempoGasto();
    }

    if (troca != 0)
        bubbleSort(v, n-1);
}

void selection_sort(int* num, int tam) {
    int i, j, min, aux;

    for (i = 0; i < (tam-1); i++) {
        min = i;
        for (j = (i+1); j < tam; j++) {
            if(num[j] < num[min])
                min = j;
        }
        if (i != min) {
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
        tempoGasto();
    }

    tempoGasto();
}

void quickSort(int n, int *v) {
    if (n <= 1) {
        return;
    } else{
        int x = v[0], a = 1, b = n-1;
        do {
            while (a < n && v[a] <= x) a++;
            while (v[b] > x) b--;
            if (a < b) {
                int temp = v[a];
                v[a] = v[b];
                v[b] = temp;
                a++; b++;
            }
        } while(a <= b);
        /*troca pivô*/
        v[0] = v[b];
        v[b] = x;
        /*ordena subvetores restantes*/
        quickSort(b, v);
        quickSort(n - a, &v[a]);
        tempoGasto();
    }
}

/*Gera um vetor com número entre 0 e 999*/
int* gerador(int tam) {
    srand(time(NULL));
    int *vetor = (int*)malloc(tam * sizeof(int));
 
    for (int i = 0; i < tam; i++){
        vetor[i] = rand() % 1000;
    }

    return vetor;
}

    double tempo;
    clock_t Ticks[2];

    Ticks[0] = clock();

    
    Ticks[1] = clock();
    tempo = (Ticks[1] - Ticks[0])*1000.0 / CLOCKS_PER_SEC;

    printf("\nTempo gasto: %g ms.\n", tempo);


int main() {
    int* vetor1 = gerador(1000);
    int vetor2[] = vetor1[];
    int vetor3[] = vetor1[];

    bubbleSort(vetor1, 1000);
    selection_sort(vetor2, 1000);
    quickSort(1000, vetor3);

    return 0;
}