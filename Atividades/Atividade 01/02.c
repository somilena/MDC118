/* 2. Escrever um programa em C que converta um
 número x de segundos em horas, minutos e segundos. */


#include <stdio.h>

int main () {

    int x;
    int segundos;
    int minutos;
    int horas;

    printf("Digite um número em segundos para ser convetido em segundos, minutos e horas: ");
    scanf("%d", &x);


    segundos = x;
    minutos = x / 60;
    horas = x / 3600;
    
    printf("          ~~~~~~~~~~\n");

    printf("O valor é: %d segundos, %d minutos e %d horas.\n", segundos, minutos, horas);

    return 0;
}