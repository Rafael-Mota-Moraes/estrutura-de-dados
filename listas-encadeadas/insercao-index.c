#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos; // aponta para o inicio da lista

int length = 0;

void imprime(Ponto *p)
{
    if (p != NULL)
    {
        printf("Ponto(%.1f, %.1f)\n", p->x, p->y);
        imprime(p->prox);
        return;
    }
}

void addIndex(float x, float y, int index)
{
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;

    if (index > length)
    {
        printf("Posição de inserção inválida!\n");
    }
    else
    {
        if (index == 0)
        {
            p->prox = listaPontos;
            listaPontos = p;
        }
        else
        {
            Ponto *listaAux = listaPontos;
            int i = 0;

            while (i != index - 1)
            {
                listaAux = listaAux->prox;
                i++;
            }

            p->prox = listaAux->prox;
            listaAux->prox = p;
        }
        length++;
    }
}

int main()
{

    addIndex(1, 1, 0);
    addIndex(2, 4, 0);
    addIndex(3, 9, 1);

    Ponto *auxLista = listaPontos;
    imprime(auxLista);

    return 0;
}
