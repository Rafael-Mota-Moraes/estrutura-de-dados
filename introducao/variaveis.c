#include <stdio.h>

int a = 5;
float num = 2.3;
double d = 4.6;
char c = 't';

int main()
{
    printf("O valor da variável 'a': %d\n", a);
    printf("O valor da variável 'num': %.1f\n", num);
    printf("O valor da variável 'd': %.1lf\n", d);
    printf("O valor da variável 'c': %c\n", c);

    return 0;
}