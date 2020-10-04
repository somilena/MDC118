#include <stdio.h>

int main()
{



    /* Sintaxe while */
    // while (condição) / somente uma condição, repetição indeterminada

    int i = 10;
    while (i < 10)
    {
        printf("%d, ", i);
        i++;
    }
    printf("\n");

    char opcao = getchar (); // ler uma tecla
    while (opcao != '0')
    {
        printf("%c", opcao);
        opcao = getchar();
    }





    /* While aninhado */
    int i = 0;
    while (i < 10)
    {
        int j = 0;
        while (j < 10)
        {
            printf("%d, %d ", i, j);
            j++;
        }
        i++;
    }





    /* While infinito */
    while(0) {
        printf("Ao infinito e além!\n");
    }





    return 0;
}