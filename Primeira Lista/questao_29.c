#include <stdio.h>
void inteiroPerfeito();

int main(){
    inteiroPerfeito();
    return 0;
}

void inteiroPerfeito(){
    /*29. Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus
    divisores. Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12,
    6 é perfeito. A matemática ainda não sabe se a quantidade de números perfeitos é
    ou não finita. Escreva um programa que liste todos os números perfeitos menores
    que um inteiro n dado.*/

    printf("Este programa liste todos os numeros perfeitos menores que um numero dado\n\n" );

    int soma = 0, n;
    printf("Digite um numero:\t");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            if(i % j == 0) {
                soma += j;
            }
        }
        if(soma == 2 * i) printf("\n%d e perfeito\npois a soma dos seus divisores e: %d\n\n", i, soma);
        soma = 0;
    }

}
