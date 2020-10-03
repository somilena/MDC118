#include <stdio.h>

int main() {

    int nota = 9;





    /* Sintaxe completa */
    // switch equivale a if-else-if so comparando igualdade//
    switch (nota) // a comparação é se é igual
    {
    case 10: // igualdade
        printf("%s\n", "eita, passei com 10!");
        break;
    case 9:
        printf("%s\n", "eita, passei com 9!");
        break;
    case 4:
        printf("%s\n", "eita, fiquei de recuperação com 4!");
        break;
    case 0:
        printf("%s\n", "eita, reprovei!");
        break;
    default: // usado quando não acha nada
        printf("%s\n", "eita, tô lascado!");
        break;
    }


    return 0;
}