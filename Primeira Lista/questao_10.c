#include <stdio.h>
#include <math.h>
#define PI 3.14
void fahToCel();
void inverso();
void somaFracao();
int * simplifica(int, int);
void maiorMultiplo();
void perimetro();


int main( ){

    fahToCel();
    inverso();
    somaFracao();
    maiorMultiplo();
    perimetro();

    return 0;
}

void fahToCel(){
    //10.1. Converter uma temperatura dada em graus Fahrenheit para graus Celsius.

    printf("Este programa converte uma temperatura em Fahrenheit para Celsius\n\n");

    float fah, cel;

    printf("Digite a temperatura em Fahrenheit:\t");
    scanf("%f", &fah);

    cel = (fah - 32) * 5 / 9;

    printf("%.2f\n", cel);
}

void inverso(){
    /*10.2. Gerar o invertido de um número com três algarismos (exemplo: o invertido de
    498 é 894).*/

    printf("Este programa inverte um numero com 3 algarismos\n\n");
    int n = 0, d, c, u;

    while (n < 100 || n > 999) {
            printf("Digite o numer a ser invertido:\t");
            scanf("%d", &n);
    }

    c = n / 100;
    d = (n - c * 100) / 10;
    u = n - 100 * c - 10 * d;

    n = u*100+d*10+c;
    printf("%d\n", n);

}

void somaFracao(){
    /*10.3. Somar duas frações ordinárias, fornecendo o resultado em forma de fração.*/

    printf("Este programa soma duas fracoes\n\n");

    int a, b, c, d, e, f;
    int *resultado;

    printf("Informe os numeros:\n\ta\t\tc\n\t__\t+\t__\n\tb\t\td\n\n");

    printf("Digite o valor de a:\t");
    scanf("%d", &a);

    printf("Digite o valor de b:\t");
    scanf("%d", &b);

    printf("Digite o valor de c:\t");
    scanf("%d", &c);

    printf("Digite o valor de d:\t");
    scanf("%d", &d);

    printf("\n");

    if(b == d){
        e = a + c;
        f = b;

        resultado = simplifica(e, f);
        e = resultado[0];
        f = resultado[1];

        printf("%d\t\t%d\t\t%d\n___\t+\t___\t=\t___\n%d\t\t%d\t\t%d\n\n", a, c, e, b, d, f );

    }else{
        a *= d;
        c *= b;
        e = a + c;
        f = b * d;

        resultado = simplifica(e, f);
        e = resultado[0];
        f = resultado[1];

        printf("%d\t\t%d\t\t%d\n___\t+\t___\t=\t___\n%d\t\t%d\t\t%d\n\n", a, c, e, b, d, f );
    }



}

void maiorMultiplo(){
    /*10.4. Determinar o maior múltiplo de um inteiro dado menor do que ou igual a um
    outro inteiro dado (exemplo: o maior múltiplo de 7 menor que 50 é 49).*/

    printf("Este programa determina o maior multiplo de um inteiro dado menor do que ou igual a um outro inteiro dado\n\n");
    int a, b, maior;

    printf("Digite um numero para saber o multiplo:\t");
    scanf("%d", &a);

    printf("Digite o numero maior:\t");
    scanf("%d", &b);

    for(int i = 0; i <= b; i++){
        if(a * i > b) break;
        maior = a * i;
    }

    printf("%d\n", maior);


}

void perimetro(){
    /*10.5. Determinar o perímetro de um polígono regular inscrito numa circunferência,
    dados o número de lados do polígono e o raio da circunferência.*/

    printf("Este programa calcula o perimetro de um poligono inscrito numa circunferencia\n\n" );

    float p, raio, lados = 0, angulo;

    printf("Digite o valor do raio da circunferencia:\t");
    scanf("%f", &raio);

    while (lados < 3) {
        printf("Digite o numero de lados do poligono:\t");
        scanf("%f", &lados);
        if(lados >= 3) break;
        printf("Digite um numero maior que 2\n");
    }

    angulo = 180/lados;

    p = lados * (2*(raio * sin(PI*angulo/180)));

    printf("O perimetro e:\t%.2f\n", p);

}

int * simplifica(int a, int b){
    int c = a;
    static int temp[2];

    if(b > a) c = b;

    for(int i = 2; i < c; i++){

        while (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
        }

    }
    temp[0] = a;
    temp[1] = b;
    return temp;
}
