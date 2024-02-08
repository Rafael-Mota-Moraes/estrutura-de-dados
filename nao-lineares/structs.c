#include <stdio.h>

struct pessoa
{
    int idade;
    float altura;
};

typedef struct pessoa Pessoa;

int main()
{
    Pessoa p;
    p.altura = 1.65;
    p.idade = 19;

    printf("A altura da pessoa é: %.2f\n", p.altura);
    printf("A idade da pessoa é: %d\n", p.idade);

    return 0;
}
