typedef struct lista Lista;

Lista* criaLista();
Lista* insereInicio(Lista *l, int i);
void printLista(Lista *l);
int vazia(Lista *l);
Lista* busca(Lista *l, int i);
Lista* retira(Lista *l, int i);
void libera(Lista *l);