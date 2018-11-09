#include <stdio.h>
#include <stdlib.h>
int pares(int n, int * vet);

int main(int argc, char const *argv[]) {

    /*(0,5 ponto) Implemente uma função que receba como parâmetro um vetor de
    números inteiros (vet) de tamanho n e retorne quantos números pares estão
    armazenados nesse vetor. Essa função deve obedecer ao protótipo:
    int pares(int n, int * vet);*/

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

    printf("O vetor tem %d numero(s) par(es).\n", pares(n, vet));

    return 0;
}

int pares(int n, int * vet){
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if(vet[i] % 2 == 0) cont++;
    }

    return cont;


}
