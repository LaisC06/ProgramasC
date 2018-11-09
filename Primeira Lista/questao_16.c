#include <stdio.h>
float jurosCompostos();
float potencia(float, int);

int main( int argc, const char* argv[] ){

    jurosCompostos();
	return 0;
}
float jurosCompostos(){
    /*16. De acordo com a Matemática Financeira, o cálculo das prestações para
    amortização de um financiamento de valor F em n prestações e a uma taxa de juros
    i é dada pela fórmula P = F/an¬i, onde an¬i = ((1 + i)^n – 1)/(i . (1 + i)^n). Escreva um
    programa que determine o valor das prestações para amortização de um
    financiamento, dados o valor do financiamento, o número de prestações para
    amortização e a taxa de juros.*/

    printf("Este programa determina o valor das prestações para amortização de um financiamento\n\n");

    float valor, p, a, juros;
	int parcelas;

	printf("Digite o valor do financiamento:\tR$");
	scanf("%f", &valor);

    printf("Digite a quantidade de prestacoes:\t");
    scanf("%d", &parcelas);

    printf("Digite a taxa de juros:\t");
    scanf("%f", &juros);

    juros /= 100;

    a=(potencia((1+juros),parcelas)-1)/(juros*potencia((1+juros),parcelas));

    p=valor/a;

    printf("O valor da prestacao e: R$ %.2f\n", p);

}

float potencia(float x, int y){
    float result = x;

    for(int i = 1; i<y; i++ ) result *= x;

    return result;

}
