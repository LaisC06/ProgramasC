#include <stdio.h>
void raizes();
int delta(int, int, int);
int raizDelta(int);

int main(){

    raizes();
	return 0;
}


void raizes(){
    /*22. Escreva um programa para determinar as raízes reais ou complexas de uma
    equação do segundo grau, dados os seus coeficientes.*/

    printf("Este programa mostra as raizes de uma funcao do segundo grau\n");

    float a, b, c, d, rDelta;
    float x1, x2;

    printf("\tax^2 + bx + c\n\n");

    printf("Digite o valor de a:\t");
    scanf("%f", &a);

    printf("Digite o valor de b:\t");
    scanf("%f", &b);

    printf("Digite o valor de c:\t");
    scanf("%f", &c);

    printf("\n\n" );

    d = delta(a, b, c);
    printf("%.2f\n",d );
    if(d > 0){
        if(raizDelta(d) != 0){
            rDelta = raizDelta(d);
            x1 = (-b + rDelta)/(2 * a);
            x2 = (-b - d)/(2 * a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }else{
            printf("x1:\n%.2f + R(%.2f)\n_________\n   %.2f\n\n", -b, d, 2*a);
            printf("x2:\n%.2f - R(%.2f)\n_________\n   %.2f\n\n", -b, d, 2*a);

        }
    }else{
        if(raizDelta(-d) != 0){
            rDelta = raizDelta(-d);

            printf("x1:\n%.2f + %.2f*i\n_________\n   %.2f\n\n", -b, rDelta, 2*a);
            printf("x2:\n%.2f - %.2f*i\n_________\n   %.2f\n\n", -b, rDelta, 2*a);

        }else{
            printf("x1:\n%.2f + R(%.2f)*i\n_________\n   %.2f\n\n", -b, -d, 2*a);
            printf("x2:\n%.2f - R(%.2f)*i\n_________\n   %.2f\n\n", -b, -d, 2*a);

        }

    }


}

int delta(int a, int b, int c){
    return b * b - 4 * a * c;
}

int raizDelta(int delta){
    for (int i = 0; i < delta; i++) {
        if(i * i == delta) return i;
        if(i * i > delta) return 0;
    }
}
