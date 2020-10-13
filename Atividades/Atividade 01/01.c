/* 1. Escrever um programa em C que calcule o perímetro
de uma circunferência (p = 2 x pi x raio, considerendo 
pi = 3.1416). */


#include <stdio.h>

int main () {

    int perimetro;
    int raio;
    int pi = 3.1416;

    printf("---> Digite o valor do raio: ");
    scanf("%d", &raio);

    perimetro = 2 * pi * raio;

    printf("         ~~~~~~~~~~~\n");

    printf("O valor do perímetro é: %d\n", perimetro);

    return 0;
}