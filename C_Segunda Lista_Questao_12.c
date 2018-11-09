#include <stdio.h>
#include <stdlib.h>

int palin(int vet[],int n);

int main(int argc, char const *argv[]) {

    int *vet, n;

    printf("Este programa verifica se um vetor e palindromo\n");

    printf("Quantos numeros possui o vetor?\n");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\n");

    if(palin(vet, n) == 1) printf("O vetor e palindromo\n");
    else printf("O vertor nao e palindromo");

    free(vet);

    return 0;
}

int palin(int vet[],int n){
    int a = 0, b = n-1;

    for (int i = 0; i < n/2; i++) {
        if(vet[a] != vet[b]) return 0;
    }

    return 1;

}
