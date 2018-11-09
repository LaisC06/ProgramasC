#include <stdio.h>
void somaTermos();

int main(){
	somaTermos();
    return 0;
}

void somaTermos(){

    /*27. Escreva um programa para calcular a soma dos n primeiros termos das sequências
    abaixo, n dado.
    27.1 (1/2, 3/5, 5/8, ...)
    27.2 (1, -1/2, 1/3, -1/4, ...)
    */

	printf("Este programa calcula a soma dos n primeiros termos das sequencias abaixo.\n27.1 (1/2, 3/5, 5/8, ...)\n27.2 (1, -1/2, 1/3, -1/4, ...)\n\n" );

    int n;
    float soma = 0;

    printf("Digite o numero de termos para saber a soma\t");
	scanf("%d", &n);

    printf("\nSoma de %d termos da sequencia 1 -> (1/2, 3/5, 5/8, ...)\n", n);
    for(float i = 1,x = 1, y = 2; i <= n; i++, x += 2, y += 3) {
        soma +=  x/y;
    }
    printf("Soma dos primeiros %d termos da sequencia 1:\t%.3f\n", n, soma );
    soma = 0;
    printf("\nSoma de %d termos da sequencia 2 -> (1, -1/2, 1/3, -1/4, ...)\n", n);
    for (float i = 1, x = 1; i <= n; i++, x *= -1) {
        soma += (1/i)* x;
    }
    printf("Soma dos primeiros %d termos da sequencia 2:\t%.3f\n", n, soma );
}
