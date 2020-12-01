#include <stdio.h>


const int Domingo = 0;
const int Segunda = 1;
const int Terca = 2;
const int Quarta = 3;
const int Quinta = 4;
const int Sexta = 5;
const int Sabado = 6;



/* Você pode declarar um conjunto de constantes inteiras, onde você vai dar um identificador
e dentro dessa enumeração, você vai apresentar as constantes. */
// começa de 0

enum dias {dom, seg, ter, qua, qui, sex, sab}; // enumeração // mais prático que a da linha 4 a 10 (const int)
enum genero {masculino, feminino};
enum status {ativo, inativo};


int main ()
{

    int dia_da_semana; 
    scanf("%d", &dia_da_semana);


    if (dia_da_semana == dom)
    {
        printf("Fim de semana!\n");
    }
    

    return 0;
}