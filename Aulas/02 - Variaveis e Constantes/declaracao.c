#include <stdio.h>

int numero;
char ch = 'A'; // ou ch = 50; -128 a 127
unsigned char var = -19; // 0 a 255 => 0 a 127 -128 a -1  (255 - 19 + 1) = 237

int numero = 100;
long int longo = 100000L;
const int SEXO_MASCULINO = 1;

int main()
{
    printf("%c\n", ch);
    printf("%d\n", var);
    printf("%d\n", numero);
    printf("%ld\n", longo);
    printf("%d\n", SEXO_MASCULINO);

    return 0;
}