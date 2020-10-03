#include <stdio.h>

int main()
{

    int x = 20;
    int y = 20;
    int z;

    /* Maior que (>) */
    printf("\t x > y? %d\n", x > y); // 0 é falso e 1 é verdadeiro

    /* Menor que (<) */
    printf("\t x < y? %d\n", x < y);

    /* Igual a (==) */
    printf("\t x == y? %d\n", x == y); // == (tudo igual)

    /* Maior e igual (>=) */
    printf("\t x >= y? %d\n", x >= y);

    /* Menor e igual (<=) */
    printf("\t x <= y? %d\n", x <= y);

    /* Diferente d (!=) */
    printf("\t x != y? %d\n", x != y); // ! é operador logico negacao not

    return 0;
}