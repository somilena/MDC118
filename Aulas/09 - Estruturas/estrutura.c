#include <stdio.h>


// Declarar uma estrutura sem variavel
struct endereco_t 
{
    char logradouro[30];
    short int numero;
    unsigned int cep;
    char bairro[15];
};

struct contato_t 
{
    char nome[30];
    unsigned int telefone;
    struct endereco_t endereco; // criação de uma variavel dentro de uma estrutura
};



// // Declarar uma estrutura sem identificador
// struct
// {
//     char logradouto[30];
//     short int numero;
//     unsigned int cep;
//     char bairro[15];
// }; meu_endereco; // variavel


// // Declarar uma estrutura com identificador e variavel
// struct endereco
// {
//     char logradouto[30];
//     short int numero;
//     unsigned int cep;
//     char bairro[15];
// }; meu_endereco;


int main ()
{
    struct contato_t meu_contato; // um contato
    struct contato_t lista_contatos[10]; // dez contatos

    printf("<DIGITE AS INFORMAÇÕES DO CONTATO>\n");

    printf("\n\tNome do contato: ");
    scanf("%[^\n]s", meu_contato.nome);

    printf("        ~~~~~~~~~~~~\n");
    printf("\t~~~~~~~~~~~~\n\tTelefone: ");
    scanf("%ui", &meu_contato.telefone);


    struct endereco_t meu_endereco;

    printf("\n<DIGITE AS INFORMAÇÕES DO ENDEREÇO>\n");

    printf("\n\tLogradouro: ");
    scanf("%s", meu_contato.endereco.logradouro);

    printf("\n        ~~~~~~~~~~~~\n");
    printf("\t~~~~~~~~~~~~\n\tNúmero: ");
    scanf("%hd", &meu_contato.endereco.numero);

    printf("        ~~~~~~~~~~~~\n");
    printf("\t~~~~~~~~~~~~\n\tCEP: ");
    scanf("%ui", &meu_contato.endereco.cep);

    getchar();
    printf("        ~~~~~~~~~~~~\n");
    printf("\t~~~~~~~~~~~~\n\tBairro: ");
    scanf("%[^\n]s", meu_contato.endereco.bairro);


    printf("                   \n\t<INFORMAÇÕES DO USUÁRIO>\n");
    printf("\t%s, \n\tTelefone: %d.\n", meu_contato.nome, meu_contato.telefone);

    printf("                   \n\t<INFORMAÇÕES DO ENDEREÇO>\n");
    printf("\t%s, %d - CEP %ui - %s.\n", meu_contato.endereco.logradouro, meu_contato.endereco.numero, meu_contato.endereco.cep, meu_contato.endereco.bairro);
    printf("\n");



    return 0;
}