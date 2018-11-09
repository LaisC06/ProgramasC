#include <stdio.h>
void classTriangulo();


int main()
{
    classTriangulo();

}


void classTriangulo(){
    /*20. Escreva um programa para classificar um triângulo de lados de comprimentos
    dados em escaleno (os três lados de comprimentos diferentes), isósceles (dois
    lados de comprimentos iguais) ou equilátero (os três lados de comprimentos
    iguais).*/

    printf("Este programa verifica se um triangulo e escaleno, isosceles ou equilatero\n\n" );

    int a, b, c, ladosIguais = 0;

    printf("Digite o valor do primeiro lado do triangulo:\t");
    scanf("%d", &a);

    printf("Digite o valor do segundo lado do triangulo:\t");
    scanf("%d", &b);

    printf("Digite o valor do terceiro lado do triangulo:\t");
    scanf("%d", &c);

    if(a == b) ladosIguais++;
    if(a == c) ladosIguais++;
    if(b == c) ladosIguais++;

    if(ladosIguais == 3) printf("\tO triangulo e equilatero\n");
    else if(ladosIguais == 1) printf("\tO triangulo e isosceles\n");
    else printf("\tO triangulo e escaleno\n");


}
