#include <stdio.h>

/*
== Igualdade
> maior
< menor
>= maior ou igual
<= menor ou igual
!= diferente
*/

int main()
{
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("A variável 'a' é igual a 0\n");
    }
    else
    {
        printf("A variável 'a' é diferente a 0\n");
    }

    int n1, n2, n3;

    printf("Digite 3 números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Números: %d %d %d\n", n1, n2, n3);

    /*
    && E
    || OU
    */

    if (n1 == n2 && n2 == n3)
    {
        printf("Os números são iguais.\n");
    }

    return 0;
}
