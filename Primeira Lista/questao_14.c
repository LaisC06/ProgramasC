#include<stdio.h>
void minToTempo();

int main(){

    minToTempo();
    return 0;

}

void minToTempo(){
    /*14. Escreva um programa que converta um intervalo de tempo dado em minutos para
    horas, minutos e segundos. Por exemplo, se o tempo dado for 145.87 min, o
    programa deve fornecer 2 h 25 min 52.2 s (vale lembrar que o ponto é o separador
    da parte inteira).*/

    printf("Este programa converte um intervalo de tempo dado em minutos para horas, minutos e segundos.\n\n");

    float minutos = 145.87, s;
    int h, m;

    printf("Quantos minutos voce deseja converter?\t");
    scanf("%f", &minutos);

    h = minutos/60;
    minutos -= h * 60;

    m = minutos;
    minutos -= m;

    s = 60 * minutos;

    printf("%d horas %d minutos %.2f segundos\n", h, m, s);

}
