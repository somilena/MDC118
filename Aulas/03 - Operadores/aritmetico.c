#include <stdio.h>

int main () {
    
    int x = 10;
    int y = 20;
    int z;




    /* Operador da soma */
    z = x + y;
    printf ("\t A soma é: %d\n", z);
    printf ("\t A soma é: %d\n", x + y); // a soma e outras operações podem ser feita dessa forma também




    /* Operador da subtração */
    z = x - y;
    printf ("\t A subtração é: %d\n", z);




    /* Operador da multiplicação */
    z = x * y;
    printf ("\t A multiplicação é: %d\n", z);




    /* Operador da divisão */
    z = x / y;
    printf ("\t A divisão é: %d\n", z);


    printf ("\t A divisão feita de com conversão explicita é: %f\n", (double) x/y); // conversão explicita

    double w = x / y; // conversão implicita
    printf ("\t A divisão feita com conversão implicita é: %lf\n", w);

    w = x * 1.0 / y; // conversão implicita
    printf("\t A divisão feita de outra forma com conversão implicita é: %lf\n", w);




    /* Operador resto da divisão */
    z = x % y; // 10/20 = resultado 0 com resto 10
    printf ("\t O resto da divisão é: %d\n", z);

        // 4 % 2 = 0? par
        // 3 % 2 = 0? impar




    /* Operador de incremento */
    z = x++; // x = x + 1, usa o valor de x, depois incremento;
    // x era 10, depois x passou para 11;
    printf("\t O incremento x++ é: %d\n", z); 

    z = ++x; // incrementa x, depois usa o valor
    // x era 11 e passou para 12;
    printf("\t O incremento ++x é: %d\n", z);




    /* Operador de decremento */

    printf("\t O decremento x-- é: %d\n", x--); // x = x - 1, usa o valor de x, depois incrementa;
    printf("\t O decremento --x é: %d\n", --x); // incrementa x, depois usa o valor




    /* forma concatenada */
    x += 1; // x = x + 1;
    x -= 1; // x = x + 1;
    x *= 1; // x = x * 1;
    x /= 1; // x = x / 1;
    x %= 1; // x = x % 1;


    return 0;
}