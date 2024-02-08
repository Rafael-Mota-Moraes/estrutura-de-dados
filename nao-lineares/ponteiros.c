#include <stdio.h>

int *pval;
int val = 5;

int main()
{
    pval = &val;

    printf("O valor apontado por 'pval' é: %d\n", *pval);

    return 0;
}
