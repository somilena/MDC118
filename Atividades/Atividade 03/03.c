/* 3. Escrever um programa em C que calcule o fatorial
de um número inteiro. */

#include <stdio.h>

int main()
{

    int fatorial;
    int numero;

    printf("Qual número inteiro você deseja calcular para fatorial? ");
    scanf("%d", &numero);

    for (fatorial = 1; numero > 1; numero--)
    {
        fatorial = fatorial * numero;
    }
    printf("O fatorial calculado: %d\n", fatorial);

    return 0;
}