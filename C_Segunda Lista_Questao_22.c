#include <stdio.h>
#include <stdlib.h>
int* pop(int *vet, int n);


int main(int argc, char const *argv[]) {

    int *vet, n;

    printf("Este programa remove um componente de ordem dada de um vetor dado.\n");

    printf("Quantos numeros possui o vetor?\n");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\n");

    vet = pop(vet, n);

    for (int i = 0; i < n-1; i++) printf("%d  ", vet[i]);

    return 0;
}

int* pop(int *vet, int n){
    int *out, pos;

    printf("Qual posicao voce deseja deletar?\n");
    scanf("%d", &pos);

    out = (int *) malloc((n-1) * sizeof(int));

    for (int i = 0, j = 0; i < n-1; i++, j++) {
        if(i+1 == pos) j++;
        out[i] = vet[j];
    }

    return out;
}
