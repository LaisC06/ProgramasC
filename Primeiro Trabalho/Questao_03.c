#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n);

int main(){

    /*(0,5 ponto) Implemente uma função que retorne o n-ésimo termo da série de
    Fibonacci. A série de Fibonacci é dada por: 1 1 2 3 5 8 13 21…, isto é, os dois
    primeiros termos são iguais a 1 (um) e cada termo seguinte é a soma dos dois
    termos anteriores. Essa função deve obedecer ao protótipo:
    int fibonacci(int n);*/

    int n;

    printf("Quantos numeros voce deseja calcular da sequencia:\n");
    scanf("%d", &n);

    printf("o n num de fibs e %d",fibonacci(n));

    return 0;
}

int fibonacci(int n){
    if (n <= 2) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
