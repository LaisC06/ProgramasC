#include <stdio.h>
#include <stdlib.h>
int negativos(int n, float * vet);

int main(int argc, char const *argv[]) {

    /*(0,5 ponto) Implemente uma função que receba como parâmetro um vetor de
    números reais (vet) de tamanho n e retorne quantos números negativos estão
    armazenados nesse vetor. Essa função deve obedecer ao protótipo:
    int negativos(int n, float * vet);*/

    //float vet[] = {-1, -2, 3};
    float *vet = NULL;
    int n;

    printf("Quantos termos tem o vetor?\n");
    scanf("%d", &n);
    vet = (float *) malloc(n * sizeof(float));
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("\t%d:\t", i+1);
        scanf("%f", &vet[i]);
    }

    printf("O vetor tem %d numero(s) negativo(s).\n", negativos(n, vet));

    return 0;
}

int negativos(int n, float * vet){
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if(vet[i] < 0) cont++;
    }

    return cont;
}
