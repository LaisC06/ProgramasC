#include <stdio.h>
void produtoInverso();
void produtoInversoAll();
int inverso(int);

int main( int argc, const char* argv[] )
{
    // sem algarismos repetidos, por exemplo, 99*88, 55 * 44,...
    //sem um sendo o inverso do outro, por exemplo 15* 51, 38*83,...
    produtoInverso();

    // imprime todos
    produtoInversoAll();

}

void produtoInverso(){
    /*31. Escreva um programa que escreva todos os pares de números de dois algarismos
    que apresentam a seguinte propriedade: o produto dos números não se altera se os
    dígitos são invertidos. Por exemplo, 93x13 = 39x31 = 1.209*/

    //

    printf("Este programa mostra todos os numeros com a seguinte propriedade:\n");
    printf("o produto dos números não se altera se os dígitos são invertidos. Por exemplo, 93x13 = 39x31 = 1.209\n");
    printf("sem algarismos repetidos, por exemplo, 99*88, 55 * 44,...\n");
    printf("sem um sendo o inverso do outro, por exemplo 15* 51, 38*83,...\n\n");

    int a, b, c;

    for (int i = 10; i < 100; i++) {
        for (int j = i; j < 100; j++) {
            if(i == j) continue;
            c = i*j;
            a = inverso(i);
            b = inverso(j);
            if(c == a * b && i != b && a != i) printf("%d * %d = %d * %d = %d\n",i, j, a, b, c );


        }
    }
}

void produtoInversoAll(){
    /*31. Escreva um programa que escreva todos os pares de números de dois algarismos
    que apresentam a seguinte propriedade: o produto dos números não se altera se os
    dígitos são invertidos. Por exemplo, 93x13 = 39x31 = 1.209*/

    printf("Este programa mostra todos os numeros com a seguinte propriedade:\n");
    printf("o produto dos números não se altera se os dígitos são invertidos. Por exemplo, 93x13 = 39x31 = 1.209\n\n");

    int a, b, c;

    for (int i = 10; i < 100; i++) {
        for (int j = i; j < 100; j++) {
            if(i == j) continue;
            c = i*j;
            a = inverso(i);
            b = inverso(j);
            if(c == a * b ) printf("%d * %d = %d * %d = %d\n",i, j, a, b, c );

        }
    }
}

int inverso(int x){
    int a, b;

    a = x/10;
    b = x - a * 10;

    return b * 10 + a;
}
