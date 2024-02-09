#include <stdio.h>
#include <stdlib.h>

struct prato
{
    char cor;
    struct prato *prox;
};

typedef struct prato Prato;

Prato *pilha;

void imprime(Prato *p)
{
    if (p != NULL)
    {
        printf("Cor do prato: %c\n", p->cor);
        imprime(p->prox);
    }
}

void add(char cor)
{
    Prato *p = (Prato *)malloc(sizeof(Prato));
    p->cor = cor;
    p->prox = pilha;
    pilha = p;
}

void rem()
{
    if (pilha == NULL)
    {
        printf("Pilha vazia\n");
    }
    else
    {
        pilha = pilha->prox;
    }
}

int main()
{
    add('b');
    add('r');
    add('y');

    rem();
    rem();
    Prato *pilhaAux = pilha;

    imprime(pilhaAux);

    return 0;
}
