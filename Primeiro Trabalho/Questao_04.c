#include<stdio.h>
#include<stdlib.h>
int soma_impares(int);
int main() {

    /*(0,5 ponto) Implemente uma função que retorne a soma dos n primeiros números
    naturais ímpares. Essa função deve obedecer ao protótipo:
    int soma_impares(int n);*/

    int n;

    printf("Quanto numeros voce almeja somar:\n");
    scanf("%d", &n);

    printf("A soma e %d",soma_impares(n));

    return 0;
}

int soma_impares(int n){

    if(n == 1) return 1;
    else return soma_impares(n-1)+ 2*n-1;

}
