#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double avalia(double * poli, int grau, double x);
void imprimePoli(double* poli, int grau);

int main(int argc, char const *argv[]) {

    /*(1,0 ponto) Implemente uma função que permita a avaliação de polinômios. Cada
    polinômio é definido por um vetor que contém seus coeficientes. Por exemplo, o
    polinômio de grau 2, 3x2+2x+12, terá um vetor de coeficientes igual a v[]={12, 2, 3}.
    A função deve obedecer ao protótipo:
    double avalia(double * poli, int grau, double x);
    Onde o parâmetro poli é o vetor com os coeficientes do polinômio, grau é o grau
    do polinômio, e x é o valor para o qual o polinômio deve ser avaliado.*/

    double *vet = NULL, x;
    int grau ;

    printf("Qual o grau do polinomio?:\t");
    scanf("%d", &grau);

    vet = (double *) malloc((grau+1) * sizeof(double));

    printf("Digite os numeros no formato: ax^grau + bx^grau-1 +...\n");
    for (int i = 0; i <= grau; i++) {
        scanf("%lf", &vet[i]);
    }

    imprimePoli(vet, grau+1);

    printf("Qual o valor de x a ser avaliado?\n");
    scanf("%lf", &x);


    if(avalia(vet, grau, x) == 1) printf("O polinomio tem %.2lf como raiz", x);
    else printf("O polinomio nao tem %.2lf como raiz", x);

    return 0;
}

double avalia(double * poli, int grau, double x){
    int soma = 0;

    for (int i = 0; i <= grau; i++) {
        soma += poli[i] * pow(x, i);
    }

    if(soma == 0) return 1;
    else return 0;
}


void imprimePoli(double* poli, int grau){
    for (int i = 0; i < grau; i++) {
        if(i == grau-1){printf("%.0lfx^%d\n", poli[i], i); break;}
        printf("%.0lfx^%d + ", poli[i], i);
    }
}
