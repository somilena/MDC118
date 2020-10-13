/* 3. Escrever um programa em C que associe um valor
quantitativo a uma nota qualitativa conforme a 
tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente,
4 = Bom e 5 = Ótimo. */


#include <stdio.h>

int main () {


    int valor;

    printf("Qual foi a sua nota? ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1: 
        printf("%s\n", "Eita, você está com uma nota RUIM, estude mais!");
        break;
    case 2:
        printf("%s\n", "Eita, você está com uma nota INSUFICIENTE, estude mais!");
        break;
    case 3:
        printf("%s\n", "Parabéns, você está com uma nota SUFICIENTE para passar!");
        break;
    case 4:
        printf("%s\n", "Parabéns, você está com uma BOA nota!");
    case 5:
        printf("%s\n", "Parabéns, você está com uma ÓTIMA nota!");
        break;
    default: 
        printf("%s\n", "Ops! Erro! O sistema aceita somente notas no valor de 1 a 5!");
        break; 
    }

    return 0;
}