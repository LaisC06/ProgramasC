#include<stdio.h>

// 7. Escreva um algoritmo para determinar o resto de uma divisão inteira utilizando uma
// máquina de calcular que efetue apenas as quatro operações: adição, subtração,
// multiplicação e divisão.

int main(int argc, char const *argv[]) {
    int a, b, resultado;
    a = 25;
    b = 6;

    resultado = a/b;

    if (resultado * b == a) printf("Resto = 0\n" );
    else printf("Resto = %d\n",a - resultado * b );


    return 0;
}

inteiros dividendo, divisor, resultado, resto;
dividendo = num1
divisor = num2
resultado = dividendo / divisor

se resultado * divisor == dividendo
    escreva "Resto = 0";
senao
    escreva "Resto = %d", dividendo - divisor / resultado;
