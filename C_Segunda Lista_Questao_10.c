#include <stdio.h>
#include <stdlib.h>
void maior(int* a, int* b);
int maiorElemento(int * vet, int n);


int main(int argc, char const *argv[]) {

    int *vet, n;

    printf("Este programa mostra o maior numero em um vetor\n");
    printf("Quantos numeros possui o vetor?\n");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("O maior elemento do vertor e:\t%d\n", maiorElemento(vet, n-1));

    free(vet);

    return 0;
}

int maiorElemento(int * vet, int n){

    if(n == 1) maior(&vet[n-1], &vet[n]);
    else{
        maior(&vet[n-1], &vet[n]);
        maiorElemento(vet, n-1);
    }

    return vet[0];

}

void maior(int* a, int* b){
    if(*b > *a){
        *a += *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}
