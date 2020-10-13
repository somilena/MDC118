/* 1. Escrever um programa em C que liste todos os
múltiplos de 3, entre 1 e 100. */


#include <stdio.h>

int main () {

    
    for (int x = 3; x <= 100; x = x + 3)
    {
        printf("%d  ", x);
    }
    printf("\n");

    return 0;
}
