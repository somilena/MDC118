#include <stdio.h>

int main () {

    int condicao = 10;





    /* Sintaxe básica 
    if (condicao) {  -->  "se condição for verdadeira então"
        // comando
    }  */

    if (condicao) {
        printf("%s\n", "passei aqui");
        printf("%s\n", "passei aqui");

    }




    /* Somente um comando */
    if (!condicao) { // condição != 0 // 0 é falso e 1 é verdadeiro
        printf("%s\n", "passei aqui");

    }




    
    /* Sintaxe completa */
    if (condicao) 
    {
        printf("%s\n", "de boas");
    } 
    else 
    {
        printf("%s\n", "deu ruim");
    }





    /* if-else-if */
    float nota = 10;

    if(nota >5) {
        printf("%s\n", "aprovado");
    } 
    else if (nota > 1) 
    {
        printf("%s\n", "recuperação");
    }
    else
    {
        printf("%s\n", "reprovado");
    }

        printf("%s\n", "---------");


    if (nota > 5)
    {
        printf("%s\n", "aprovado");
    }

    if (nota > 1 && nota < 5) // envolvimento lógico
    {
        printf("%s\n", "recuperacao");
    }

    if (nota < 1)
    {
        printf("%s\n", "reprovado");
    }






    /* ifs alinhados */
    float falta = 75;
    if (nota >= 5) 
    {
        if (falta >= 75) {
            printf("%s\n", "aprovado");{}
        }
        else 
        {
            printf ("%s\n", "reprovado por falta");
        }
    } else {
        printf("%s\n", "reprovado por nota");
    }






/* Escrever if dentro do if, equivale a isso: */
//  if (nota >=5)
//  {
//        if(falta >= 75)
/// equivale
//  if (nota >= 5 && falta >= 75) // aprovado
// 




    return 0;
}