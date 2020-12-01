/* Escrever um programa em C que leia um ano e 
verifique se ele é bissexto (é multiplo de 4 e 
não é multiplo de 100, ou é múltiplo de 400) */


#include <stdio.h>

int main ()
{


    int ano;

    printf("Qual é o ano? ");
    scanf("%d", &ano);

    printf("            ~~~~~~~~~~~~~\n");


    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("UHUUUL! Esse ano é bissexto :D!\n", ano);
    }
    else
    {
        printf("OPA! O ano não é bissexto :(!\n", ano);
    }
    

    return 0;
}