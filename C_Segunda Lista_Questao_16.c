#include <stdio.h>
#include <stdlib.h>
int amplitude(int * vet, int n);
int ordena(int * vet, int n);
void trocaValor(int* a, int* b);

int main(int argc, char const *argv[]) {

    int *vet, n;

    printf("Este programa calcula a amplitude da relacao de numeros\n");

    printf("Quantos numeros possui o vetor?\n");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\n");

    printf("A amplitude da relacao e:\t%d\n", amplitude(vet, n));



    free(vet);

    return 0;
}

int amplitude(int * vet, int n){
    ordena(vet, n);
    return vet[n-1] - vet[0];
}

int ordena(int * vet, int n){

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if(vet[i] > vet[j]) trocaValor(&vet[i], &vet[j]);
        }
    }

}

void trocaValor(int* a, int* b){
    *a += *b;
    *b = *a - *b;
    *a = *a - *b;
}
