#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2

int simetrica(int[ROW][COL]);
int ** matrizDinamica(int m, int n);
int simetricaD(int ** mat, int m, int n);
int ** transposta(int ** mat, int m, int n);
void imprimeMatriz(int ** mat, int m, int n);
void ** preencheMatriz(int ** mat, int m, int n);

int main(int argc, char const *argv[]) {
    /*(0,5 ponto) Implemente duas versões de uma função, seguindo as diferentes
    estratégias discutidas para alocar matrizes, que determine se uma matriz é
    simétrica quadrada ou não.*/

    int **mat, m, n, matriz[ROW][COL];

    printf("Preencha a matriz[%d][%d]\n", ROW, COL);
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nAgora a matriz dinamica\n");

    printf("Quantas linhas matriz ?\n");
    scanf("%d", &m);
    printf("Quantas colunas matriz ?\n");
    scanf("%d", &n);

    mat = matrizDinamica(m, n);

    imprimeMatriz(mat, m, n);

    if(simetrica(matriz) == 1)printf("A matriz e simetrica\n");
    else printf("A matriz nao e simetrica\n");

    printf("\n");

    if(simetricaD(mat, m, n) == 1)printf("A matriz dinamica e simetrica\n");
    else printf("A matriz dinamica nao e simetrica\n");

    free(mat);

    return 0;
}

int simetricaD(int ** mat, int m, int n){

    if(m != n) return 0;

    int ** trans;

    trans = transposta(mat, m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(mat[i][j] != trans[i][j]) return 0;
        }
    }

    return 1;


}

int simetrica(int mat[ROW][COL]){

    int **trans, **temp;

    temp = (int **) malloc(ROW * sizeof(int*));

    for (int i = 0; i < ROW; i++) {
        temp[i] = (int*) malloc(COL * sizeof(int));
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            temp[i][j] = mat[i][j];
        }
    }


    trans = transposta(temp, ROW, COL);

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if(mat[i][j] != trans[i][j]) return 0;
        }
    }

    return 1;
}

int ** matrizDinamica(int m, int n){
    int **res;

    res = (int **) malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++) {
        res[i] = (int *) malloc(n * sizeof(int));
    }

    preencheMatriz(res, m, n);

    return res;

}

void ** preencheMatriz(int ** mat, int m, int n){

    printf("Digite os termos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("matriz[%d][%d]: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprimeMatriz(int ** mat, int m, int n){

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("  %d", mat[i][j]);
        }
        printf("\n");
    }
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
