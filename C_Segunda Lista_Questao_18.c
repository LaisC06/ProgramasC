#include <stdio.h>
#include <stdlib.h>

void distintos(int *vet, int n);
void ordena(int * vet, int n);
void trocaValor(int* a, int* b);

int main(int argc, char const *argv[]) {

    int *vet, n;

    printf("Este programa mostra os valores distintos de um vetor\n");

    printf("Quantos numeros possui o vetor?\n");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    printf("Digite os elementos do vetor\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\n");
    distintos(vet, n);

    free(vet);

    return 0;
}

void distintos(int *vet, int n){

    int iguais = 0, contador = 0, *out;

    ordena(vet, n);

    for (int i = 0; i < n; i++) {
        while(vet[i] == vet[i+1]){
            i++;
        }
        contador += 1;
    }

    out = (int *) malloc(contador * sizeof(int));

    contador = 0;

    for (int i = 0; i < n; i++) {
        out[contador] = vet[i];
        while(vet[i] == vet[i+1]){
            i++;
        }

        contador += 1;
    }

    printf("Os numeros distintos sao: {");

    for (int i = 0; i < contador; i++) {
        if(i == contador-1) {printf(" %d }\n", out[i]); break;}
        printf(" %d,", out[i]);
    }


}

void ordena(int * vet, int n){

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
