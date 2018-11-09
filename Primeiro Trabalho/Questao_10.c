#include <stdio.h>
#include <stdlib.h>
void inverte(int n, int * vet);
void imprimeVetor(int vet[], int n);

int main(int argc, char const *argv[]) {

    /*
    (0,5 ponto) Implemente uma função que receba como parâmetro um vetor de
    números inteiros (vet) de tamanho n e inverta a ordem dos elementos
    armazenados nesse vetor. Essa função deve obedecer ao protótipo:
    void inverte(int n, int * vet);
    */

    int *vet = NULL;
    int n;

    printf("Quantos termos tem o vetor?\n");
    scanf("%d", &n);
    vet = (int *) malloc(n * sizeof(int));
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("\t%d:\t", i+1);
        scanf("%d", &vet[i]);
    }

    imprimeVetor(vet, n);
    inverte(n, vet);
    imprimeVetor(vet, n);

    return 0;
}

void inverte(int n, int * vet){
    int t[n], aux = n;

    for (int i = 0; i < n; i++) t[i] = vet[i];

    for (int i = 0; i < aux; i++) {
        n--;
        vet[i] = t[n];
    }

}
void imprimeVetor(int vet[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d  ", vet[i]);
    }
    printf("\n");
}
