#include <stdio.h>
void permuta();


int main(){

    permuta();
    return 0;
}

void permuta(){

    /*11. Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/

    printf("Este programa permuta o conteúdo de duas variáveis sem utilizar uma variável auxiliar.\n\n");

    int a, b;

    printf("\tDigite o primeiro numero:\t" );
    scanf("%d", &a);

    printf("\tDigite o segundo numero:\t" );
    scanf("%d", &b);

    printf("\n\ta = %d\n", a);
    printf("\tb = %d\n", b);

    a += b;
    b -= a;

    b *= -1;
    a -= b;

    printf("\n\ta = %d\n", a);
    printf("\tb = %d\n", b);


}
