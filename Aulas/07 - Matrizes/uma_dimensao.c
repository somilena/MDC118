#include <stdio.h>


    const int tamanho = 10;

int main ()

{   //    0   1  2 3 4 5 6   7   8 9 
    //  |100|80| | | | | | |-20| | |

    // int numeros [TAMANHO];
    int numeros[] = {10, 5, 6, 98, -9, 0, 75, 4, 3, 1, 9};

    float notas_P1[22] = {};


    numeros[0] = 100;
    numeros[7] = -20; // o [7] é a posição
    numeros[1] = numeros[0] + numeros[7]; 
    scanf("%d", &numeros[2]);

    printf("%d, ", numeros[0]);
    printf("%d, ", numeros[1]);
    printf("%d, ", numeros[2]);
    printf("%d. \n", numeros[7]);


    for(int i=0; i < tamanho; i++)
    {
        numeros[i]= i + 1;
    }


    for(int i=0; i < tamanho; i++)
    {
        printf("%d, ", numeros[i]);
    }
    printf ("\n");


    for(int i=tamanho; i > 0; i--)
    {
        printf("%d, ", numeros[i - 1]);
    }
    printf("\n");



    return 0;
}