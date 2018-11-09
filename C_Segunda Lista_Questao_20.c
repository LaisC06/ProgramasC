#include <stdio.h>
#include <stdlib.h>

int* insert(int * vet, int n);

int main(int argc, char const *argv[]) {
    int *vet, n;

    printf("Este programa adiciona um valor em um vetor na posicao dada\n");

    printf("Quantos numeros possui o vetor?\n");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\n");
    vet = insert(vet, n);

    for (int i = 0; i < n+1; i++) printf("%d  ", vet[i]);

    free(vet);

    return 0;
}

int* insert(int * vet, int n){
    int *out, num, pos;

    printf("Que numero voce deseja inserir no vetor?\n");
    scanf("%d", &num);
    printf("Em que posicao?\n");
    scanf("%d", &pos);
    printf("\n");

    out = (int *) malloc((n+1) * sizeof(int));

    for (int i = 0; i <= pos; i++) {
        if(i == pos) out[i] = num;
        else out[i] = vet[i];
    }

    for (int i = pos+1; i <= n; i++) {
        out[i] = vet[i-1];
    }

    return out;
}
