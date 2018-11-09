#include <stdio.h>
void quadradoPerfeito();

int main()
{
	quadradoPerfeito();

	return 0;
}

void quadradoPerfeito(){
    /*18. Escreva um programa para verificar se um inteiro dado é um quadrado perfeito,
    exibindo, nos casos afirmativos, sua raiz quadrada.
    */

	printf("Este programa verifica se um numero e um quadrado perfeito\n\n");

    int n, raiz = 0;

    printf("Qual o numero que voce deseja saber se e um quadrado perfeito?\t");
	scanf("%d", &n);

    for (int i = 1; i <= n/2; i++) {
        if(i * i > n) break;
        if(i * i == n){
            raiz = i;
            break;
        }
    }

    if(raiz == 0) printf("%d nao e um quadrado perfeito.\n", n);
    else printf("%d e um quadrado perfeito, pois %d * %d = %d\n",n, raiz, raiz, n);

}
