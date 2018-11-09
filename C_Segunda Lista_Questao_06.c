#include <stdio.h>
int iFat(int n);
int rFat(int n);


int main() {

    int n;

    printf("Este programa retorna, de forma interativa e recursiva, o fatorial de um numero dado\n\n");
    printf("Escreva o numero para saber o fatorial\n");
    scanf("%d", &n);

    printf("\no fatorial de %d e:\n\n", n);
    printf("Retorno recursivo:\t%d\n", rFat(n));
    printf("Retorno iterativo:\t%d\n", iFat(n));


    return 0;
}

int iFat(int n){
    int soma = 1;
    if(n == 0) return 1;

    for (int i = n; i > 0; i--) soma *= i;

    return soma;
}


int rFat(int n){
    if (n == 0 || n == 1) return 1;
    else return n * rFat(n-1);

}
