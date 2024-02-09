#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    int senha;
    struct pessoa *prox;
};

typedef struct pessoa Pessoa;

Pessoa *fila;

void add(int senha)
{
    Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
    p->senha = senha;
    p->prox = NULL;

    if (fila == NULL)
    {
        fila = p;
    }
    else
    {
        Pessoa *filaAux = fila;

        while (filaAux->prox != NULL)
        {
            filaAux = filaAux->prox;
        }
        filaAux->prox = p;
    }
}

void imprime(Pessoa *f)
{
    if (f != NULL)
    {
        printf("Senha da pessoa: %d\n", f->senha);

        imprime(f->prox);
    }
}

void rem()
{
    if (fila == NULL)
    {
        printf("Fila está vazia\n");
    }
    else
    {
        fila = fila->prox;
    }
}

int main()
{
    add(5);
    add(4);
    add(8);

    rem();
    rem();
    Pessoa *filaAux = fila;

    imprime(filaAux);

    return 0;
}
