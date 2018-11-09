#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void carateristica();

int main()
{

    carateristica();

    return 0;
}

void carateristica(){
    /*30. O número 3025 possui a seguinte característica: 30 + 25 = 55 e 55^2 = 3025.
    Escreva um programa que escreva todos os números com quatro algarismos que
    possuem a citada característica.*/

    printf("Este programa escreve todos os numeros com quatro algarismos que possuem a seguinte característica:\n" );
    printf("30 + 25 = 55 e 55^2 = 3025\n\n");

    int t;
    char n1[5], n2[5];

    for (int i = 10; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            t = i + j;
            t *= t;
            if(t > 9999 || t < 1000) continue;
            sprintf(n2, "%d", t);
            t = i * 100 + j;
            sprintf(n1, "%d", t);

            if(strcmp(n1, n2) == 0)
            printf("%s possui a mesma carateristica.\nPois %d + %d = %d\n%d^2 = %s\n\n",n1, i, j, i+j, i+j, n2);



        }
    }



}
