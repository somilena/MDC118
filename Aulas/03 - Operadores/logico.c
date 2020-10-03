#include <stdio.h>

int main() {

    int x = 30;
    int y = 20;





    /* Operador E (&&) */
    printf("%d\n", x > y);
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y && x - 10 > y); // falso E (&&) qualquer coisa é falso




    /* Operador OU (||) */
    printf("%d\n", x > y);
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y || x - 10 > y); // verdadeiro OU (||) qualquer coisa é verdadeiro




    /* Operador NÃO (!()) */
    printf("%d\n", !(x > y));
    printf("%d\n", !(x - 10 > y));
    printf("%d\n", !(x > y || x - 10 > y));



    return 0;
}