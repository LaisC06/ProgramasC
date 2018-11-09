#include <stdio.h>
void calculaEntrada();

int main()
{

    calculaEntrada();
    return 0;

}

void calculaEntrada(){

    /*12. Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a
    entrada maior do que ou igual às duas prestações; estas devem ser iguais, inteiras
    e as maiores possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a
    entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for
    R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são a iguais a R$
    100,00. Escreva um programa que receba o valor da mercadoria e forneça o valor
    da entrada e das duas prestações, de acordo com as regras acima. Observe que
    2
    Escola Superior de Tecnologia
    uma justificativa para a adoção desta regra é que ela facilita a confecção e o
    consequente pagamento dos boletos das duas prestações.*/

    printf("Este programa calcula a entrada mais duas prestacoes do valor de um produto,");
    printf("\nsendo a entrada maior do que ou igual as duas prestacoes");
    printf("\nque devem ser iguais, inteiras e as maiores possiveis.\n\n");

    float valor, entrada;
    int prestacao;

    printf("\n\tDigite o valor do produto:\tR$ ");
    scanf("%f", &valor);

    prestacao = valor / 3;
    entrada = prestacao + (valor - prestacao * 3);

    printf("\n\tEntrada:\tR$ %.2f\n", entrada);
    printf("\tPrestacao:\tR$ %.2f\n", (float)prestacao);
}
