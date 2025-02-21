typedef struct no{
    int dado;
    struct no* proximo;
}No;

No* enfileirar(No** fila, int valor);

void desinfileirar(No** fila);

void imprimir(No* fila);