#include <stdio.h>

int main()
{
    int a = 0;

    while (a < 5)
    {
        printf("WHILE: %d\n", a);
        a++;
    };

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("FOR: %d\n", i);
    }

    return 0;
}
