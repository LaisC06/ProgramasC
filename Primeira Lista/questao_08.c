#include <stdio.h>
void diaSemana();

int main(){
	diaSemana();
    return 0;
}


void diaSemana(){
    /*8. Sabendo que o dia 01/01/1900 foi uma segunda-feira, escreva um algoritmo que
    determine o dia da semana correspondente a uma data, posterior a 01/01/1900,
    dada. Por exemplo, se a data dada for 23/01/1900, o algoritmo deve fornecer como
    resposta terça-feira.*/

    printf("Este programa determina o dia da semana referente a uma data\n");

    int dia, mes, ano, ndias = 0;

    printf("Digite a data no formato dd/mm/aaaa:\t");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    mes--;
    ndias += mes * 31;


    switch (mes) {

        case 11: ndias--;
        case 10: ;
        case 9: ndias--;
        case 8: ;
        case 7: ;
        case 6: ndias--;
        case 5: ;
        case 4: ndias--;
        case 3: ;
        case 2: ndias-=3;
        case 1: ;
    }

    if ( ((ano%4)==0) && ( ((ano%100)!=0) || ((ano%400)==0) ) && (mes == 2))
        ndias += 1;

    ndias += -1 + (ano-1)*365 + (ano-1)/4 -(ano-1)/100 +(ano-1)/400 ;

    ndias += dia;
    ndias = ndias % 7;

    switch (ndias) {
        case 0: printf("\tSegunda\n"); break;
        case 1: printf("\tTerca\n"); break;
        case 2: printf("\tQuarta\n"); break;
        case 3: printf("\tQuinta\n"); break;
        case 4: printf("\tSexta\n"); break;
        case 5: printf("\tSabado\n"); break;
        case 6: printf("\tDomingo\n"); break;
    }

}
