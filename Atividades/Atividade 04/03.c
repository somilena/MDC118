/* Escrever um programa em C que leia uma tecla 
e determine se ela é uma letra, um dígito 
ou um caractere especial. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char tecla;

    printf("Digite um caractere especial, um dígito ou uma letra: ");
    scanf("%c", &tecla);

    if (isdigit(tecla))
    {
        printf("É um dígito.\n");
    }
    else if (isalpha(tecla))
    {
        printf("É uma letra.\n");
    }
    else
    {
        printf("É um caractere especial.\n");
    }

    return 0;
}