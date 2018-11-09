#include <stdio.h>
void amigos(int, int);
int somaDivisores(int );
void intervaloAmigos();

int main()
{
	   intervaloAmigos();
	   return 0;
}

void intervaloAmigos(){
    /*38. Dois números inteiros são ditos amigos se a soma dos divisores de cada um deles
    (menores que eles) é igual ao outro. Por exemplo, os divisores de 220 são 1, 2, 4,
    5, 10, 11, 20, 22, 44, 55 e 110 e 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 =
    284 e os divisores de 284 são 1, 2, 4, 71 e 142 e 1 + 2 + 4 + 71 + 142 = 220.
    Escreva um programa que determine todos os pares de inteiros amigos menores
    que um inteiro dado.*/
	printf("Este programa determina todos os pares de inteiros amigos menores que um inteiro dado.\n\n");

	int x;
	printf("Digite um numero:\t");
	scanf("%d", &x);

    for(int i = 0; i < x; i++){
        for (int j = i; j < x; j++) {
            if (i != j)amigos(i, j);
        }
    }
}

void amigos(int x, int y){

    int somaX, somaY;

    somaX = somaDivisores(x);
    somaY = somaDivisores(y);

    if(somaX == y && somaY == x)printf("%d e %d sao Amigos.\n",x, y );

}

int somaDivisores(int x){
    int soma = 0;
    for(int i = 1; i <= x/2; i++) if(x % i == 0) soma += i;
    return soma;

}
