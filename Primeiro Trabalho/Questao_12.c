#include <stdio.h>
#include <stdlib.h>
void deriva(double * poli, int grau, double * out);
void imprimePoli(double* poli, int grau);

int main(int argc, char const *argv[]) {

    /*(1,0 ponto) Implemente uma função que calcule a derivada de um polinômio. Cada
    polinômio é representado como exemplificado na questão 11. A função deve
    obedecer ao protótipo:
    void deriva(double * poli, int grau, double * out);
    Onde out é o vetor, de dimensão grau-1, no qual a função deve guardar os
    coeficientes do polinômio resultante da derivada.*/

    int grau = 3;
    double vet[] = {4, 3, 2, 1}, out[grau];

    deriva(vet, grau, out);

    imprimePoli(vet, 4);
    imprimePoli(out, 3);

    return 0;
}



void deriva(double * poli, int grau, double * out){

    for (int i = 0; i < grau; i++) {
        out[i] = poli[i+1] * (i+1);
    }

}

void imprimePoli(double* poli, int grau){
    for (int i = 0; i < grau; i++) {
        if(i == grau-1){printf("%.0fx^%d\n", poli[i], i); break;}
        printf("%.0fx^%d + ", poli[i], i);
    }
}
