#include <stdio.h>
void arredonda();

int main()
{
	arredonda();
	return 0;
}


void arredonda(){
    /*17. Escreva um programa que realize arredondamentos de números utilizando a regra
    usual da matemática: se a parte fracionária for maior do que ou igual a 0,5, o
    número é arredondado para o inteiro imediatamente superior, caso contrário, é
    arredondado para o inteiro imediatamente inferior
    */

	printf("Este programa arredonda um numero\n\n");

    float valor, resto;
    int valorArredondado;

	printf("Qual o valor a ser arredondado?\t");
	scanf("%f", &valor);

    valorArredondado = valor;
    resto = valor - valorArredondado;

    if(resto != 0) resto *= 10;
    if(resto >= 5) valorArredondado += 1;

    printf("O valor arredondado e:\t%d\n", valorArredondado);


}
