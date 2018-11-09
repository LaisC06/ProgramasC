#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int raizes(float a, float b, float c, float * x1, float * x2);

int main(int argc, char const *argv[]) {

    /*(1,0 ponto) Implemente uma função que calcule as raízes de uma equação do
    segundo grau, do tipo ax2+bx+c = 0. Essa função deve obedecer ao protótipo:
    int raizes(float a, float b, float c, float * x1, float * x2);
    Essa função deve ter como valor de retorno o número de raízes reais e distintas da
    equação. Se existirem raizes reais, seus valores devem ser armazenados nas variáveis
    apontadas por x1 e x2.*/

    int a, b , c, nRaizes ;
    float x1, x2;
    //a = -1;    b = 2;    c = 3;
    //a = 1;    b = 4;    c = 4;    apenas uma raiz

    printf("Digite os valores para ax^2 + bx + c\n");
    printf("a:\t");
    scanf("%d", &a);
    printf("b:\t");
    scanf("%d", &b);
    printf("c:\t");
    scanf("%d", &c);
    printf("\n");
    printf("%dx^2 + %dx + %d\n",a ,b, c);

    nRaizes = raizes(a, b, c, &x1, &x2);

    if(nRaizes == 2) printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    else if(nRaizes == 1)printf("Esta funcao tem apenas uma raiz\nx = %.2f\n", x1);
    else printf("Nao existem raizes reais.\n");


    return 0;
}


int raizes(float a, float b, float c, float * x1, float * x2){
    int d = b*b-4*a*c;

    if(d < 0) return 0;

    *x1 = (-b+sqrt(d))/(2*a);
    *x2 = (-b-sqrt(d))/(2*a);
    if(d == 0) return 1;
    return 2;
}
