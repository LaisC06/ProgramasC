#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pi(int n);

int main(int argc, char const *argv[]) {

    /*(1,0 ponto)Implemente uma função que retorne uma aproximação do valor de p, de
    acordo com a fórmula de Leibniz:
    pi = (1-1/3+1/5-1/7+1/9-1/11)
    Escola Superior de Tecnologia
    Isto é: pi = 4 * somatoria i = 0, n( (-1^i)/2 * i + 1)
    Essa função deve obedecer ao seguinte protótipo, em que n indica o número de
    termos que deve ser usado para avaliar o valor de :
    double pi(int n);*/

    int n = 0;
    printf("Digite um numero para obter uma aproximação de pi pela fórmula de Leibniz:\n");
    scanf("%d", &n);

    printf("%f\n", pi(n));
    return 0;
}

double pi(int n){
    double soma = 0;
    for (double i = 0; i <= n; i++) {
        soma += pow(-1,i) / (2*i + 1);
    }

    return soma * 4;
}
