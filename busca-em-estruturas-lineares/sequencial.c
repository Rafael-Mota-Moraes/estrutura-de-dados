#include <stdio.h>

int v[10] = {23, 5, 87, 10, 29, 10, 48, 9, 10};

int main()
{
    int el = 29;

    for (int i = 0; i < 10; i++)
    {
        if (el == v[i])
            printf("Elemento: %d, está na posição %d do vetor\n", el, i);
    }

    return 0;
}
