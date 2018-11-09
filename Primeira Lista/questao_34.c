#include <stdio.h>
void fatoresPrimos();
int sePrimo(int);
int semiprimo(int);

int main(){

    fatoresPrimos();

    return 0;
}

void fatoresPrimos(){
    /*34. Quando um número não é semiprimo, a Matemática prova que ele pode ser escrito
    de maneira única como um produto de potências de números primos distintos. Este
    produto é chamado de decomposição em fatores primos do número e os expoentes
    são chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 2^3x3^2x5.
    Escreva um programa que obtenha a decomposição em fatores primos de um
    inteiro dado.
    */

    printf("Este programa faz a decomposicao de um numero em fatores primos\n\n" );

    int n, a;
    a = n;

    printf("Digite um numero para obter a decomposicao em fatores primos:\t");
    scanf("%d", &n);

    if(semiprimo(n)==1){
         printf("O numero e semiprimo, logo a decomposicao em fatores primos e impossivel.\n");
         return;
     }

    // divide o numero o quanto puder, enquanto o resto da divisao for 0, por cada numero primo
    // para decompor o numero
    for(int i = 2; i <= n; i++){
        // se o numero nao for primo continua até encontrar o proximo numero primo
        if(sePrimo(i) == 0) continue;
        while(a % i == 0){
            a /= i;
            printf("%d ", i);
        }
    }
}

int sePrimo(int n){
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    if(n == 1) return 0;
    for(int i = 3; i < n; i += 2) if(n % i == 0) return 0;
    return 1;
}

int semiprimo(int n){
    if (sePrimo(n)) return 0;
    for (int i = 0; i < n; i++) {
        if(sePrimo(i) == 0) continue;
        for (int j = 0; j < n; j++) {
            if(sePrimo(j) == 0) continue;
            if(i * j == n){
                return 1;
            }
        }
    }
    return 0;
}
