#include <stdio.h>

#if LINUX
  short int VARIAVEL
#endif

#if WINDOWS
  unsigned int VARIAVEL
#endif

// Leitura formatada
// scanf

// Escrita formatada
// printf

int main()
{
    char ch;
    int numero;
    float valor;
    char nome[30];

    printf("Digite uma caractere: ");
    scanf("%c", &ch); // referencia da variavel     
    printf("Digite um inteiro: ");
    scanf("%d", &numero);
    printf("Digite um ponto flutuante: ");
    scanf("%f", &valor);
    printf("Digite uma string: ");
    scanf("%s", nome); // não precisa de &
    
    // scanf("%c %d %f %s", &ch, &numero, &valor, nome);

    // printf("%c", ch);
    // printf("%d", numero);
    // printf("%f", valor);
    // printf("%s", nome);

    printf("%c %5d %5.2f %-30s\n", ch, numero, valor, nome);

    return 0;
}