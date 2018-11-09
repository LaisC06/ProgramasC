#include <stdio.h>
#include "headers/getvar.h"
void diaSemana();

int main( int argc, const char* argv[] )
{
	diaSemana();
}


void diaSemana(){
    /*5. Sabendo que o dia 01/01/1900 foi uma segunda-feira, escreva um algoritmo que
    determine o dia da semana correspondente a uma data, posterior a 01/01/1900,
    dada. Por exemplo, se a data dada for 23/01/1900, o algoritmo deve fornecer como
    resposta terça-feira.*/

    int dia, mes, ano, ndias;

    dia = getNIntPos("Digite o dia\t");
    mes = getNIntPos("Digite o mes\t");
    ano = getNIntPos("Digite o ano\t");


    ano = ano - 1900;
    ndias = ano * 365;
    ndias += ano/4;

    if(ano % 4 == 0 && mes < 3) ndias--; printf("sim\n" );

    printf("anos bissextos: %d\n", ano/4);

    mes--;
    ndias += mes * 31;

    switch (mes) {
        case 12:
        ndias--;
        case 10:
        ndias--;
        case 7:
        ndias--;
        case 5:
        ndias--;
        case 3:
        ndias-=3;
    }

    ndias += dia;
    ndias -=1;
    printf("ndias: %d\n", ndias);
    ndias = ndias % 7;
    printf("ndias: %d\n", ndias);
    switch (ndias) {
        case 0:
        printf("\tSegunda\n");
        break;
        case 1:
        printf("\tTerca\n");
        break;
        case 2:
        printf("\tQuarta\n");
        break;
        case 3:
        printf("\tQuinta\n");
        break;
        case 4:
        printf("\tSexta\n");
        break;
        case 5:
        printf("\tSabado\n");
        break;
        case 6:
        printf("\tDomingo\n");
        break;

    }


}
