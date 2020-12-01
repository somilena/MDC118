
#include <stdio.h>

/* Leitura de caracteres */
// getc
// getchar


/* Escrita de caracteres */
// putc
// putchar


int main() {
    char ch = getc(stdin); // ler do teclado
    putc(ch, stdout); // escreve na tela ou console
    
    getchar(); // PRESSIONAR ENTER

    ch = getchar(); // getc(stdin)
    putchar(ch);  // putc(stdout)

    printf("Escolha uma opção: \n");
    printf("1 => somar\n");
    printf("2 => subtrair\n");
    printf("0 => sair\n");

    while(ch != '0') {
        ch = getchar();
    }
    
    return 0;
}