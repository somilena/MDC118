#include <stdio.h>

int main ()
{



    /* Sintaxe */
    //  do {
    //
    //    } while (condição)
    int i = 10;
    do 
    {
        printf("%d, ", i);
        i++;
    } while (i < 10);
    printf("\n");





    /* Saltar uma repetição/laço */
    i = 10;
    do 
    {
        if (i < 20) 
            continue;  // saltou a repetição
        printf("%d, ", i);
        i++;
    } while (i < 10);
    printf("\n");





    /* Dowhile aninhado */
    i = 0;
    do
    {
        int j = 0;
        do
        {
            printf("%d, %d ", i, j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);
    printf("\n");





    /* Dowhile infinito */
    do
    {
        printf("Ao infinito e além!\n");
    } while(1);

    





    return 0;
}