/* Escrever um programa em C que leia uma 
estrutura contendo dia, mes e ano e imprima a 
data tanto no formato BR (dd/mm/aaaa) quanto 
no formato US (mm/dd/aaaa). */


#include <stdio.h>


struct data_t
{
    int dia;
    int mes;
    int ano;
};



int main ()
{

    struct data_t calendario;

    printf("\tDe 1 a 7. Determine um dia do mês: ");
    scanf("%d", &calendario.dia);

    printf("\tDe 1 a 12. Determine o mês: ");
    scanf("%d", &calendario.mes);

    printf("\tDetermine o ano: ");
    scanf("%d", &calendario.ano);


    printf("\n\tA data no formato brasileiro (BR): \n\t(%d/%d/%d)\n", calendario.dia, calendario.mes, calendario.ano);


    printf("\n\tA data no formato americano (US): \n\t(%d/%d/%d)\n\n", calendario.mes, calendario.dia, calendario.ano); 


    return 0;
}