#include <stdio.h>
void somaQuadrados();

int main(){
	somaQuadrados();
    return 0;
}

void somaQuadrados(){
    /*26. Escreva um programa que determine a soma dos quadrados dos n primeiros
    números naturais, n dado.*/

	printf("Este programa determina a soma dos quadrados dos n primeiros numeros naturais\n\n");

    int n, soma = 0;
    printf("Digite o numero de quadrados que deseja saber a soma:\t");
	scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d^2 =\t  %d\n",i , i*i );
        soma += i * i;
    }
    printf("\t+_______\n\t  %d", soma);

}
