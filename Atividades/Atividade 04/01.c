/* Escrever um programa em C que leia dois 
números inteiros e determine qual é o menor. */

#include <stdio.h>

int main()
{

    int primeiro_numero;
    int segundo_numero;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &primeiro_numero);
    printf("                    ~~~~~\n");
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &segundo_numero);

    printf("            ~~~~~~~~~~~~~~~~~~\n");

    if (primeiro_numero > segundo_numero)
    {
        printf("%d > %d \n", primeiro_numero, segundo_numero);
    }
    else if (primeiro_numero < segundo_numero)
    {
        printf("%d > %d \n", segundo_numero, primeiro_numero);
    }
    else
    {
        printf("Os dois números são iguais!\n");
    }

    return 0;
}