#include <stdio.h>
int sePrimo(int);
void semiprimo();


int main( int argc, const char* argv[] )
{

    semiprimo();
    return 0;
}

void semiprimo(){
    /*33. Um número inteiro positivo é dito semiprimo se ele é igual ao produto de dois
    números primos. Por exemplo, 15 é semiprimo pois 15 = 3 x 5; 9 é semiprimo pois 9
    = 3 x 3; 20 não é semiprimo pois 20 = 2 x 10 e 10 não é primo. Os números
    semiprimos são fundamentais para o sistema de criptografia RSA (Evaristo, J,
    2002). Escreva um programa que verifique se um inteiro dado é semiprimo.
    */

    printf("Este programa verifica se um numero dado e semiprimo\n\n");

    int n, a, b, semiprimo = 0;
    printf("Digite um numero:\t");
    scanf("%d", &n);

    if(sePrimo(n)){
        printf("O numero digitado e primo, logo nao e semiprimo\n");
        return;
    }


    for (int i = 0; i < n; i++) {
        if(sePrimo(i) == 0) continue;
        for (int j = 0; j < n; j++) {
            if(sePrimo(j) == 0) continue;
            if(i * j == n){
                a = i;
                b = j;
                semiprimo = 1;
                break;
            }
        }
        if(semiprimo == 1) break;
    }

    if(semiprimo == 1) printf("%d e semiprimo pois %d * %d = %d\n", n, a, b, n);
    else printf("%d nao e semiprimo\n", n);
}

int sePrimo(int n){
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    if(n == 1) return 0;
    for(int i = 3; i < n; i += 2) if(n % i == 0) return 0;
    return 1;
}
