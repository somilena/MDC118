#include <stdio.h>
#include <string.h>

int main ()
{

    char str[30] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
    // memset(str, sizeof(str), '\0');
    char outra[30];

    printf("Entre com uma string: ");
    // fgets(str, 30, stdin);  // {'t', 'e', 's', 't', 'e', ' ', '1', '2', '3', '\n'...}
    // gets(str);  // {'t', 'e', 's', 't', 'e', ' ', '1', '2', '3', '\0'...}
    scanf("%[^\n]s", str);
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");
    // puts(str);
    printf("A string str = %-30s\n", str);
    printf("\n");

    for (int i=0; i < 30; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nO tamanho da string str é: %li\n", strlen(str));
    printf("\n");

    for(int i=0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }


    // outra = str; dá ruim // não dá pra fazer atribuição (=)
    strcpy(outra, str);
    printf("\nA string outra = %-30s\n", outra);
    printf("\n");

    printf("Outra == str? %d\n", outra == str);
    printf("Strcmp(outra, str)? %d\n", strcmp(outra, str));

    // outra = outra + str; dá ruim
    strcat(outra, str);
    printf("Outra contactena com str = %-30s\n", outra);
    printf("\n");

    printf("Outra == str? %d\n", outra == str);
    printf("Strcmp(outra, str)? %d\n", strcmp(outra, str));
    printf("Strcmp(str, outra)? %d\n", strcmp(str, outra));
    printf("\n");

    printf("Encontrou 1 em outra? %s\n", strchr(outra, '1'));
    printf("Encontrou 0 em outra? %s\n", strchr(outra, '0'));
    printf("Encontrou 123 em outra? %s\n", strstr(outra, "123"));
    printf("Encontrou 456 em outra? %s\n", strstr(outra, "456"));
    printf("\n");


    return 0;
}