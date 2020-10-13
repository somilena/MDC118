/* 3. Escrever um programa em C que converta um valor
 em Gigabytes em bytes (1Gb = 1024^3 bytes). */


 #include <stdio.h>

int main () {

    int valor;
    unsigned long int x;
    int bytes = 1073741824;

    printf("\n");
    printf("Digite um valor em Gygabites para ser convertido em Bytes: ");
    scanf("%d", &valor);

    x = valor * bytes;

    printf("           ~~~~~~~~~\n");


    printf("O resultado é: %u bytes\n", x);
    printf("\n");


    return 0;
}