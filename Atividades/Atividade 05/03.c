/* Escrever um programa em C que leia até 80 
caracteres e imprima na ordem invertida. */

#include <stdio.h>
#include <string.h>

int main()
{

    char caractere[80];
    int a;
    int tamanho;

    printf("Digite uma sequencia de no máximo 80 caracteres: ");
    scanf("%[^\n]s", caractere);

    tamanho = strlen(caractere);

    printf("%d\n", tamanho);
    printf("\n");

    for (a = tamanho; a > -1; a--)
    {
        printf("%c \n", caractere[a]);
    }

    return 0;
}