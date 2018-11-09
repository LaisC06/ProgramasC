#include <stdio.h>
int sePrimo(int);
void powPrimo();
int potencia(int, int);

int main( ){

    powPrimo();
    return 0;
}

void powPrimo(){
    /*40. Um inteiro positivo x é dito uma potência prima se existem dois inteiros positivos p
    e k, com p primo, tais que x = p^k. Escreva uma função que receba um inteiro e
    verifique se ele é uma potência prima.*/

    printf("Este programa verifica se um numero e uma potencia prima\n\n");


    int x, pPrimo = 0, y, z;
    printf("Digite um numero:\t");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        if(sePrimo(i) == 0) continue;
        for (int j = 0; j <= x; j++) {
            if(potencia(i, j) > x) break;
            if(potencia(i, j) == x){
                y = i;
                z = j;
                pPrimo = 1;
                break;
            }
        if(pPrimo == 1) break;
        }
    }

    if(pPrimo == 1)printf("%d e uma portencia prima, pois %d^%d = %d\n", x, y, z, x);

}

int sePrimo(int n){
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    if(n == 1) return 0;
    for(int i = 3; i < n; i += 2) if(n % i == 0) return 0;
    return 1;
}

int potencia(int x, int y){
    int result = x;

    for(int i = 1; i<y; i++ ) result *= x;

    return result;

}
