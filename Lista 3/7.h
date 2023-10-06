typedef struct lista Lista;
typedef struct contato Contato;

Lista *criaLista();
Lista *inserirContato(Lista *lista, Contato *contato);
Lista *removerContato(Lista *lista, char *nome);
void mostrarLista(Lista *lista);
Contato *buscarContato(Lista *lista, char *nome);