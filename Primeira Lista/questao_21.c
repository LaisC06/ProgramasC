#include <stdio.h>
void retangulo();
int somaQuadrados(int , int);
int maiorNumero(int, int, int);

int main( int argc, const char* argv[] )
{
    retangulo();
}


void retangulo(){
    /*21. Escreva um programa para verificar se um triângulo de lados de comprimentos
    dados é retângulo, exibindo, nos casos afirmativos, sua hipotenusa e seus catetos*/

    printf("Este programa verifica se um triangulo e retangulo e mostra sua hipotenusa e seus catetos\n");

    int a, b, c, maior;

    printf("Digite o valor do primeiro lado do triangulo:\t");
    scanf("%d", &a);

    printf("Digite o valor do segundo lado do triangulo:\t");
    scanf("%d", &b);

    printf("Digite o valor do terceiro lado do triangulo:\t");
    scanf("%d", &c);

    maior = maiorNumero(a, b, c);

    if(maior == a) {
        if(a * a == somaQuadrados(c, b)) {
            printf("O triangulo e retangulo.\n");
            printf("Hipotenusa: %d\n", a);
            printf("Catetos: %d e %d\n", b, c );
        }else printf("O triangulo nao e retangulo.\n");
    }else if(maior == b){
        if(b * b== somaQuadrados(c, a)){
             printf("O triangulo e retangulo.\n");
             printf("Hipotenusa: %d\n", b);
             printf("Catetos: %d e %d\n", a, c );
         }
        else printf("O triangulo nao e retangulo.\n");
    }else {
        if(c * c == somaQuadrados(a, b)){
             printf("O triangulo e retangulo.\n");
             printf("Hipotenusa: %d\n", c);
             printf("Catetos: %d e %d\n", b, a );
         }
        else printf("O triangulo nao e retangulo.\n");
    }

}


int maiorNumero(int a, int b, int c){

    if(b > a) a = b;
    if(c > a) a = c;

    return a;
}


int somaQuadrados(int a, int b){
    return a * a + b * b;
}
