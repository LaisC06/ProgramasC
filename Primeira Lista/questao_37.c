#include <stdio.h>
void harmonica();

int main(){

    harmonica();
    return 0;
}

void harmonica(){
    /*37. A série harmônica S= 1 + 1/2 + 1/3 + ... + 1/n + ... é divergente. Isto significa que
    dado qualquer real k existe n0 tal que 1 + 1/2 + 1/3 + ... + 1/n0 + ... > k. Escreva
    um programa que dado um real k determine o menor inteiro n0 tal que S > k. Por
    exemplo se k = 2, o programa deve fornecer n0 = 4, pois
    1 + 1/2 + 1/3 + 1/4 = 2,083... e 1 + 1/2 + 1/3  =1,8333...
    */
    printf("A serie harmonica S= 1 + 1/2 + 1/3 + ... + 1/n + ... e divergente.\nIsto significa que dado qualquer real k existe n0 tal que 1 + 1/2 + 1/3 + ... + 1/n0 + ... > k\n" );
    printf("Este programa determine o menor inteiro n0 tal que S > k\n\n");

    float soma = 0.0;
    int x, i = 0;

    printf("Digite um numero:\t");
    scanf("%d", &x);

    while (soma < x){
        i++;
        soma += (float)1/(float)i;
        //printf("%f\n", soma);

    }
    printf("%d\n", i);

}
