#include <stdio.h>
void fibo();

int main(){
	fibo();
	return 0;
}

void fibo(){
    /*36. A sequência de Fibbonaci é a sequência (1, 1, 2, 3, 5, 8, 13, ...) definida por
    Escreva um programa que determine o n-ésimo termo desta sequência, n dado.*/

	printf("Este programa determin o n-esimo termo da sequencia de Fibbonaci\n\n");

	int x, a = 1, b = 1, soma = 0;
	printf("Digite um numero:\t");
	scanf("%d", &x);

    for(int i = 2; i<=x;i++){
        soma += b;
        a = b;
        b = soma;
        //printf("%d\n", a);

    }
    printf("\nO %d numero da sequencia Fibbonaci e:\t%d\n", x, b);
}
