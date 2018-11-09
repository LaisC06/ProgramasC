#include <stdio.h>
void nAlgarismos();

int main(){
	nAlgarismos();
	return 0;
}


void nAlgarismos(){
    /*32. Escreva um programa para determinar o número de algarismos de um número
    inteiro positivo dado.*/

	printf("Este programa determina o numero de algarismos de um numero\n\n" );

    int n, r = 0, i = 1, contador = 0;
	printf("Digite um numero:\t");
	scanf("%d", &n);

    do{
        r = n / i;
        i*=10;
        contador++;
    }while (r != 0);

    contador--;
    printf("\nNumero de algarismos:\t%d\n", contador);


}
