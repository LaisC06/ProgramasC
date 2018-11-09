#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void imprimeMatriz(float **, int, int);
float ** somar(float ** matrizA,int m1, int n1, float ** matrizB, int m2, int n2);
float ** dividir(float ** matrizA,int m1, int n1, float ** matrizB, int m2, int n2);
float ** subtrair(float ** matrizA,int m1, int n1, float ** matrizB, int m2, int n2);
float ** multiplicar(float ** matrizA,int m1, int n1, float ** matrizB, int m2, int n2);

int main(int argc, char const *argv[]) {

    /*(0,5 ponto) Implemente uma função para somar, subtrair, multiplicar e dividir duas
    matrizes. Essas funções devem obedecer aos protótipos:
    a. float ** somar(float ** matrizA, float ** matrizB);
    b. float ** subtrair(float ** matrizA, float ** matrizB);
    c. float ** multiplicar(float ** matrizA, float ** matrizB);
    d. float ** dividir(float ** matrizA, float ** matrizB);*/

    float **mat1,**mat2, **res;
    int m1, n1, m2, n2;

    printf("Quantas linhas matriz 1?\n");
    scanf("%d", &m1);
    printf("Quantas colunas matriz 1?\n");
    scanf("%d", &n1);

    mat1 = (float **) malloc(m1 * sizeof(float *));

    for (int i = 0; i < m1; i++) {
        mat1[i] = (float *) malloc(n1 * sizeof(float));
    }

    printf("\nDigite os valores da 1 matriz:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("matriz 1 [%d][%d]: ", i, j);
            scanf("%f", &mat1[i][j]);
        }
    }

    printf("\n\n");
    imprimeMatriz(mat1, m1,n1);

    printf("\n\nQuantas linhas matriz 2?\n");
    scanf("%d", &m2);
    printf("Quantas colunas matriz 2?\n");
    scanf("%d", &n2);

    mat2 = (float **) malloc(m2 * sizeof(float *));

    for (int i = 0; i < m2; i++) {
        mat2[i] = (float *) malloc(n2 * sizeof(float));
    }

    printf("\nDigite os valores da 2 matriz:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            printf("matriz 2 [%d][%d]: ", i, j);
            scanf("%f", &mat2[i][j]);
        }
    }

    printf("\n\n");
    imprimeMatriz(mat2, m2,n2);

    sleep(2);

    system("cls");

    printf("\n\nResultado soma:\n");
    res = somar(mat1, m1, n1, mat2, m2, n2);
    printf("\n");
    if(NULL != res)imprimeMatriz(res, m1,n1);

    printf("\nResultado subtracao:\n");
    res = subtrair(mat1, m1, n1, mat2, m2, n2);
    printf("\n");
    if(NULL != res)imprimeMatriz(res, m1,n1);

    printf("\nResultado multiplicacao:\n");
    res = multiplicar(mat1, m1, n1, mat2, m2, n2);
    printf("\n");
    if(NULL != res)imprimeMatriz(res, m1,n2);

    printf("\nResultado divisao:\n");
    res = dividir(mat1, m1, n1, mat2, m2, n2);
    printf("\n");
    if(NULL != res)imprimeMatriz(res, m1,n1);

    free(mat1);
    free(mat2);
    free(res);
    return 0;
}

float ** somar(float ** matrizA,int m1, int n1, float ** matrizB, int m2, int n2){
    if(m1 != m2 || n1 != n2){
        printf("So e possivel somar matrizes de mesma ordem\n");
        return NULL;

    }

    float **res;

    res = (float **) malloc(m1 * sizeof(float *));

    for (int i = 0; i < m1; i++) {
        res[i] = (float *) malloc(n1 * sizeof(float));
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            res[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    return res;

}

float ** subtrair(float ** matrizA,int m1, int n1, float ** matrizB, int m2, int n2){
    if(m1 != m2 || n1 != n2){
        printf("So e possivel subtrair matrizes de mesma ordem\n");
        return NULL;

    }

    float **res;

    res = (float **) malloc(m1 * sizeof(float *));

    for (int i = 0; i < m1; i++) {
        res[i] = (float *) malloc(n1 * sizeof(float));
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            res[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    return res;
}

float ** multiplicar(float ** matrizA, int m1, int n1, float ** matrizB, int m2, int n2){
    if(n1 != m2) {
        printf("Nao e possivel multiplicar as matrizes.\n");
        return NULL;
    }

    float **res, row = m1, col = n2;

    res = (float **) malloc(row * sizeof(float *));

    for (int i = 0; i < row; i++) {
        res[i] = (float *) malloc(col * sizeof(float));
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < n1; k++) {
                res[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    return res;
}

float ** dividir(float ** matrizA,int m1, int n1, float ** matrizB, int m2, int n2){
    printf("\n====== Nao existe divisao de matrizes ======\nEsse metodo retorna os termos de uma matriz A, dividido pelos termos de uma matriz B\n\n");
    if(m1 != m2 || n1 != n2){
        printf("So e possivel dividir matrizes de mesma ordem\n");
        return NULL;

    }

    float **res;

    res = (float **) malloc(m1 * sizeof(float *));

    for (int i = 0; i < m1; i++) {
        res[i] = (float *) malloc(n1 * sizeof(float));
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            res[i][j] = matrizA[i][j] / matrizB[i][j];
        }
    }

    return res;
}

void imprimeMatriz(float ** matriz, int row, int col){

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%.1f\t", matriz[i][j]);
        }
        printf("\n");
    }

}
