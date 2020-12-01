/* Escrever um programa em C que imprima os 
meses de um ano definidos por uma enumeração */

#include <stdio.h>

enum meses
{
    jan = 1,
    fev,
    março,
    abril,
    maio,
    junho,
    julho,
    agos,
    set,
    out,
    nov,
    dez
};

int main()
{

    int mes;

    printf("\tDigite um número para saber o mês: ");
    scanf("%d", &mes);
    printf("\n\t          ~~~~~~~~~~~~~~~~\n");
    printf("\t          ~~~~~~~~~~~~~~~~\n");

    switch (mes)
    {
    case jan:
        printf("\n\tÉ Janeiro!");
        break;
    case fev:
        printf("\n\tÉ Fevereiro! Mês do Carnaval!");
        break;
    case março:
        printf("\n\tÉ Março!");
        break;
    case abril:
        printf("\n\tÉ Abril! Mês da Pascoa!");
        break;
    case maio:
        printf("\n\tÉ Maio!");
        break;
    case junho:
        printf("\n\n\tÉ Junho!");
        break;
    case julho:
        printf("\n\tÉ Julho! Mês das férias!");
        break;
    case agos:
        printf("\n\tÉ Agosto!");
        break;
    case set:
        printf("\n\tÉ Setembro!");
        break;
    case out:
        printf("\n\tÉ Outubro!");
        break;
    case nov:
        printf("\n\tÉ Nobembro! Mês da Black Friday!");
        break;
    case dez:
        printf("\n\tÉ Dezembbro! Feliz Natal!");
        break;

    default:
        break;
    }
    printf("\n\n");

    return 0;
}