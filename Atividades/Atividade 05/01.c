/* Escrever um programa em C que leia 10 valores 
e imprima o maior e o menor valores lidos. */

#include <stdio.h>

int main()
{

    int numero;
    int maior;
    int menor;
    int a;

    printf("\tDigite o 1 número inteiro: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;


    for(a=1; a<10; a++)
    {
    printf("\n\tDigite o %d numero inteiro: ", a + 1);
    scanf("%i", &numero);

    if (numero > maior)
        maior = numero;
    else if (numero < menor)
        menor = numero;
    }

    printf("                ~~~~~~~~~~~~~\n");

    printf("\tO maior número é: %d \n", maior);
    printf("\tO menor número é: %d \n", menor);

    return 0;
}