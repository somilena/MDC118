/* 1. Escrever um programa em C que determine se um
 número é par ou impar. */


#include <stdio.h>

int main () {

    int x;

    printf("Introduza um número para ser determinado se é impar ou par: ");
    scanf("%d", &x);

    printf("          ~~~~~~~~~\n");

    printf("O número é impar ou par?\n");

    if (x % 2 == 0)
    {
        printf("É par!\n");
    }
    else 
    {
        printf("É impar!\n");
    }

    return 0;
}