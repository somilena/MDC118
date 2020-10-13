/* 2. Escrever um programa em C que liste os 10 primeiros
números da série de Fibonacci (o próximo é a soma dos
dois anteriores). */

#include <stdio.h>

int main()
{

    int anterior = 0;
    int atual = 1;
    int proximo;


    printf("A listagem dos 10 primeiros números da série de Fibonacci são:\n");


    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", anterior);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return 0;
}