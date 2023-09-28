/* Autores:
            Matheus da Costa Silva - 555289
            Laercio Levi Silva de Melo - 512325
            Francisco Ameson Viana de Franca - 542714

   TAD Vetor: Implementação de um vetor de números reais com as seguintes operações
principais visíveis ao usuário:
*/
// Redefinição do tipo exportado
typedef struct vetor Vetor;

// Funções exportadas
// cria: Função que cria um vetor de tamanho n.
Vetor* criaVetor(int n);
// libera: Função que libera a memória alocada para um vetor.
void liberaVetor(Vetor* v);
// tamanho: Função que retorna o tamanho de um vetor.
int tamanhoVetor(Vetor* v);
// acessa: Função que acessa o conteúdo de uma determinada posição i do vetor.
float acessa(Vetor* v, int i);
// atribui: Função que atribui um conteúdo c a uma determinada posição i do vetor.
void atribui(Vetor* v, int i, float c);
// maior: Função que retorna o maior elementos do vetor.
float maior(Vetor* v);
// menor: Função que retorna o menor elementos do vetor.
float menor(Vetor* v);
/* listar: Função que lista todos os elementos do vetor. A listagem deve se apresentar
de forma organizada como uma lista na mesma linha. */
void listarVetor(Vetor* v);
// somar vetor: Função que retorna a soma de todos os elementos de um vetor.
float somaVetor(Vetor* v);
// somar elementos: Função que retorna a soma dos n primeiros elementos do vetor.
float somaElementos(Vetor* v, int n);
/* somar vetores: Função que retorna um vetor resultante da soma dos elementos
correspondentes de dois vetores. A função deverá verificar se os vetores passados
tem o mesmo tamanho. */
Vetor* somaVetores(Vetor* v1, Vetor* v2);
/* mostrar soma vetores: Função que mostra a soma dos elementos correspondentes
de dois vetores do mesmo tamanho, como mostrado no exemplo abaixo.
entrada
v1 = {1.0, 4.5, 7.0}
v2 = {6.5, 10.0, 8.5}
saída
1.0 + 6.5 = 7.5
4.5 + 10.0 = 14.5
7.0 + 8.5 = 15.5
A função deverá verificar se os vetores passados tem o mesmo tamanho. */
void mostrarSomaVetores(Vetor* v1, Vetor* v2);