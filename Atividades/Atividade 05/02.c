/* Escrever um programa em C que localize um 
funcionário em uma matriz multidimensional a 
partir da sua matricula e imprima o respectivo 
telefone. Considere a matriz igual a 
{{1111, 30001000}, {2222, 30002000}, 
{3333, 30003000}, {4444, 30004000}, 
{5555, 30005000}, {6666, 30006000}, 
{7777, 30007000}}. */


#include <stdio.h>
#include <stdlib.h>



int main ()
{

    int funcionario[7][2] = {{1111, 30001000}, {2222, 30002000}, {3333, 30003000}, {4444, 30004000}, {5555, 30005000}, {6666, 30006000}, {7777, 30007000}};
    int matricula;

    printf("Digite um número de 1 a 7 para identificar o número de matrícula do funcionário: ");
    scanf("%d", &matricula);

    for(int i=0; i < 7; i++)
    {
        printf("O número do funcionário é: %d\n", funcionario[i]);
    }

    return 0;
}