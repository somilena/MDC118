/* Escrever um programa em C que leia o nome 
(30 caracteres) e o telefone de 10 contatos 
(inteiro longo), e depois imprima todos os 
contatos no formato "nome - telefone". */


#include <stdio.h>


struct contato
{
    char nome[30];
    unsigned int telefone;
};


int main ()
{
    struct contato lista[10];

    for(int i=0; i<10; i++)
    {

        printf("\n\tNome: (somente letras!)\n");
        scanf("\n\t%[^\n]s", lista[i].nome);
        getchar();

        printf("\tTelefone: (somente números!)\n");
        scanf("\n\t%d", &lista[i].telefone);
        getchar();

        printf("            ~~~~~~\n");

    }


    printf("\n\t<LISTA DOS CONTATOS>\n");

    for (int i=0; i<10; i++)
    {
        printf("\n\t%s - %d\n", lista[i].nome, lista[i].telefone);
    }
    return 0;
}