#include <stdio.h>
int maiorNumero();

int main(){

	maiorNumero();

	return 0;
}


int maiorNumero(){
    /*
    19. Escreva um programa para determinar o maior de três números dados.
    */

	printf("Este programa determinha o maior de 3 numeros dados\n\n");

    int a, b, c;

	printf("Digite o valor do primeiro numero:\t");
    scanf("%d", &a);

    printf("Digite o valor do segundo numero:\t");
    scanf("%d", &b);

    printf("Digite o valor do terceiro numero:\t");
    scanf("%d", &c);

    if(b > a) a = b;
    if(c > a) a = c;

    printf("\n\t%d e o maior valor.\n", a);

	return a;
}
