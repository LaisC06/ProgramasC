#include <stdio.h>
void calculaIntervalo();


int main(){

    calculaIntervalo();
}
void calculaIntervalo() {
    /*13. Um intervalo de tempo pode ser dado em dias, horas, minutos, segundos ou
    sequências "decrescentes" destas unidades (em dias e horas; em horas e minutos;
    em horas, minutos e segundos), de acordo com o interesse de quem o está
    manipulando. Escreva um programa que converta um intervalo de tempo dado em
    segundos para horas, minutos e segundos. Por exemplo, se o tempo dado for 3 850
    segundos, o programa deve fornecer 1 h 4 min 10 s.*/

    printf("Este programa converte um intervalo de tempo dado em segundos para horas, minutos e segundos.\n\n");

    int segundos, horas, minutos;

    printf("Digite os segundos:\t");
    scanf("%d", &segundos);

    horas = segundos/3600;
    segundos -= horas * 3600;

    minutos = segundos/60;
    segundos -= minutos * 60;

    printf("\t%d horas, %d minutos e %d segundos\n", horas, minutos, segundos );
}
