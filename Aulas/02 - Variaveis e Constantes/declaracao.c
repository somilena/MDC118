#include <stdio.h>

/* tipo nome variavel = valor inicial  */
/*
variaveis globais
comentario em varias linhas
*/
// variaveis globais => comentario em uma linha
int numero;
char ch = 'A'; // ou ch = 50; -128 a 127
unsigned char var = -19; // 0 a 255 => 0 a 127 -128 a -1  (255 - 19 + 1) = 237
short int curto = 23546; // -32635 a 32634

int numero = 100;
long int longo = 100000L;
float decimal = 0.4643123545213; // 0.464312
double duplo = 0.4618231823;
const int SEXO_MASCULINO = 1; // na constante, o número não muda


int main() {

    // variavel local com escopo main
    int local =10;
    int numero = 20; // se declarar uma variavel local com o mesmo nome, vai prevalecer a variavel local

    {
        //variavel local com escopo bloco
        int temp =10;
    }
    printf("%c\n", ch);
    printf("%d\n", var);
    printf("%d\n", curto);

    printf("%d\n", numero);
    printf("%ld\n", longo); 
    printf("%f\n", decimal);
    printf("%f\n", duplo);
    printf("%d\n", SEXO_MASCULINO);

    return 0;
}