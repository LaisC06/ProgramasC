#include <stdio.h>
#include <stdlib.h>
int mTriangular(int ** mat, int m);
int ** matrizDinamica(int m);
void ** preencheMatriz(int ** mat, int m);

int main(int argc, char const *argv[]) {

    printf("\nEste Programa verifica se uma matriz e triangular\n\n");

    int **mat, m;
    printf("Qual a ordem da matriz quadrada?\n");
    scanf("%d", &m);

    mat = matrizDinamica( m);
    preencheMatriz(mat, m);

    printf("\n\n");
    if(mTriangular(mat, m) == 1) printf("A matriz e triangular\n");
    else printf("A matriz nao e triangular\n");


    return 0;
}

int mTriangular(int ** mat, int m){


    for (int i = 0; i < m; i++) {
        for (int j = i+1; j < m; j++) {
            if(mat[i][j] != 0) return 0;
        }
    }

    return 1;
}

int ** matrizDinamica(int m){
    int **res;

    res = (int **) malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++) {
        res[i] = (int *) malloc(m * sizeof(int));
    }

    return res;

}

void ** preencheMatriz(int ** mat, int m){

    printf("Digite os termos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
