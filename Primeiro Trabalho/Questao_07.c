#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
void clac_esfera(float r, float * area, float * volume);

int main(int argc, char const *argv[]) {

    /*
    (0,5 ponto) Implemente uma função que calcule a área da superfície e o volume de
    uma esfera de raio r. Essa função deve obedecer ao protótipo:
    void clac_esfera(float r, float * area, float * volume);
    A área da superfície e o volume são dados, respectivamente, por 4πr^2 e 4πr^3/3.
    */

    float r, area, volume;

    printf("Digite o raio da esfera, para calcular a area da superficie e o volume:\n");
    scanf("%f", &r);

    clac_esfera(r, &area, &volume);

    printf("Area da superficie:\t%.2f\nVolume:\t%.2f\n", area, volume);

    return 0;
}


void clac_esfera(float r, float * area, float * volume){
    *area = 4 * PI * r * r;
    *volume = (4 * PI * r * r * r)/3;

}
