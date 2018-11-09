#include <stdio.h>
#include <stdlib.h>

int ** transposta(int ** mat, int m, int n);
void imprimeMatriz(int** mat, int m, int n);

int main(int argc, char const *argv[]) {

    printf("Este programa retorna a transposta de uma matriz.\n\n");

    int **mat, m, n;

    printf("Quantas linhas tem a matriz?\n");
    scanf("%d", &m);
    printf("Quantas colunas tem a matriz?\n");
    scanf("%d", &n);

    mat = (int **) malloc(m * sizeof(int*));

    for (int i = 0; i < m; i++) {
        mat[i] = (int *) malloc(n * sizeof(int));
    }

    printf("Digite os termos da matriz\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("M%d,%d: ", i ,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n\n");
    imprimeMatriz(mat, m, n);

    mat = transposta(mat, m, n);

    printf("\n\n");
    imprimeMatriz(mat, m, n);

    free(mat);

    return 0;
}


int ** transposta(int ** mat, int m, int n){
    int ** trp;

    trp = (int **) malloc( n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        trp[i] = (int *) malloc(m * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            trp[j][i] = mat[i][j];
        }
    }

    return trp;

}

void imprimeMatriz(int** mat, int m, int n){

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

}
