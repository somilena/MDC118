#include <stdio.h>

int main () 
{

    printf("Sem o uso de for:\n");
    printf("%d, ", 1);
    printf("%d, ", 2);
    printf("%d, ", 3);
    printf("%d, ", 4);
    printf("%d, ", 5);
    printf("%d, ", 6);
    printf("%d", 7);
    printf("\n~~~~~~~");
    printf("\n");





    /*Sintaxe*/
    // for (inicialização; condição; incremento) // serve para repetição

    for (int i=0; i<10; i++) // contador incrementando de 1
    {
        printf("%d, ", i);
    }
    printf("\n");


    for (int i=1; i<=20; i = i*2) // contador incrementando de 2
    {
        printf("%d, ", i);
    }
    printf("\n");



    for (int i=10; i>0; i--) // contador incrementando de 1
    {
        printf("%d, ", i);
    }
    printf("\n");





    /* For aninhados */
    // Um laço dentro de um laço

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            printf("%d, %d ", i, j);
        }
    }
    printf("\n");





    /* For infinito (;;) */
    for(;;) { // laço infinito, ter cuidado!!
        printf("Entre com 1 a 4: ");
        char opcao = getchar (); // getchar - ler alguma letra do teclado
        switch(opcao) {
            case '1': printf("opção 1\n"); break;
            case '2': printf("opção 2\n"); break;
            case '3': printf("opção 3\n"); break;
            case '4': printf("opção 4\n"); break;
            default: printf("opção inválida\n"); break;
        }
        if (opcao == '0') break;
    }



    return 0;
}