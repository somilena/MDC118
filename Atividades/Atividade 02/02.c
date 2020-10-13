/* 2. Escrever um programa em C que calcula o desconto 
sobre um valor com base na escala: até de 100.00 aplica 
1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica
10%.*/

#include <stdio.h>

int main()
{

    float valor;
    float desconto;
    float preco;

    printf("\n");
    printf("Informe o valor para calcular o desconto: ");
    scanf("%f", &valor);
    printf("                ~~~~~~~~~~\n");

    if (valor <= 100)
    {
        desconto = valor * 0.01;
        preco = valor - desconto;
        printf("O preço com o desconto fica R$ %.2f reais.\n", preco);
        printf("                ~~~~~~~~~~\n");
        printf("Desconto de 1%% aplicado!\n");
    }
    if (valor >= 100.01 && valor < 500)
    {
        desconto = valor * 0.05;
        preco = valor - desconto;
        printf("O preço com o desconto fica R$ %.2f reais.\n", preco);
        printf("                ~~~~~~~~~~\n");
        printf("Desconto de 5%% aplicado!\n");
    }
    if (valor > 500)
    {
        desconto = valor * 0.1;
        preco = valor - desconto;
        printf("O preço com o desconto fica R$ %.2f reais.\n", preco);
        printf("                ~~~~~~~~~~\n");
        printf("Desconto de 10%% aplicado!");
    }

    printf("\n");

    return 0;
}