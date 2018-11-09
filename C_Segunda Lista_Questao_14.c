#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float norma(int *vet, int n);

int main(int argc, char const *argv[]) {

    int *vet, n;

    printf("Este programa calcula a norma de um vetor\n");

    printf("Quantos numeros possui o vetor?\n");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\n");

    printf("A norma do vetor dado e:\t%.2f\n", norma(vet, n));

    free(vet);

    return 0;

}

float norma(int *vet, int n){
    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += vet[i] * vet[i];
    }

    return sqrt(soma);

}
