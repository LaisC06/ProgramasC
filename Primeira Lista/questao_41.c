#include <stdio.h>
void perfectInt();
int potencia(int, int);

int main()
{

    perfectInt();

    return 0;
}

void perfectInt(){
    /*41. Um inteiro positivo x é dito uma potência perfeita de base z e expoente y se
    existem dois inteiros positivos z e y tais que x = z^y. Escreva uma função que
    receba um inteiro e verifique se ele é uma potência perfeita.*/
    printf("Este programa verifica se um numero e uma potencia perfeita\n\n");

    int x, z, y, perfeito = 0;
    printf("Digite um numero:\t");
    scanf("%d", &x);

    for (int i = 1; i < x; i++) {
        for (int j = 1; j <= x; j++) {

            if(potencia(i, j) > x) continue;
            if(potencia(i, j) == (float)x){
                y = i;
                z = j;
                perfeito = 1;
                break;
            }
        if(perfeito == 1) break;
        }
    }

    if(perfeito == 1) printf("%d e perfeito, pois %d^%d = %d\n",x,y,z,x );
    else printf("%d nao e perfeito\n", x);


}

int potencia(int x, int y){
    int result = x;

    for(int i = 1; i<y; i++ ) result *= x;

    return result;

}
