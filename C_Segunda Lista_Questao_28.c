#include <stdio.h>
#include <stdlib.h>

int ** mult(int ** mat1, int m1, int n1, int ** mat2, int m2, int n2);
void imprimeMatriz(int** mat, int m, int n);

int main(int argc, char const *argv[]) {

    printf("Este programa multiplica 2 matrizes\n\n");

    int **mat1, m1, n1, **mat2, m2, n2, **res;

    printf("\nQuantas linhas matriz 1?\n");
    scanf("%d", &m1);
    printf("Quantas colunas matriz 1?\n");
    scanf("%d", &n1);

    mat1 = (int **) malloc(m1 * sizeof(int *));

    for (int i = 0; i < m1; i++) {
        mat1[i] = (int *) malloc(n1 * sizeof(int));
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nQuantas linhas matriz 2?\n");
    scanf("%d", &m2);
    printf("Quantas colunas matriz 2?\n");
    scanf("%d", &n2);

    mat2 = (int **) malloc(m2 * sizeof(int *));

    for (int i = 0; i < m2; i++) {
        mat2[i] = (int *) malloc(n2 * sizeof(int));
    }

    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    res = mult(mat1, m1, n1, mat2, m2, n2);

    printf("\n\nResultado:\n");

    imprimeMatriz(res , n1, m2);

    return 0;
}

int ** mult(int ** mat1, int m1, int n1, int ** mat2, int m2, int n2){
    if(n1 != m2) {
        printf("Nao e possivel multiplicar as matrizes.\n");
        exit(1);
    }

    int **res, row = m1, col = n2;

    res = (int **) malloc(row * sizeof(int *));

    for (int i = 0; i < row; i++) {
        res[i] = (int *) malloc(col * sizeof(int));
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < n1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return res;

}

void imprimeMatriz(int** mat, int m, int n){

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }

}
