#include <stdio.h>

int soma(int a, int b)
{
    int soma = a + b;
    return soma;
}

int main()
{
    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    int total = soma(a, b);

    printf("Resultado da soma: %d", total);

    return 0;
}
