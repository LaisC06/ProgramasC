#ifndef QUEST_H
#define QUEST_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define PI 3.14


int sePrimo(int n){
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    if(n == 1) return 0;
    for(int i = 3; i < n; i += 2) if(n % i == 0) return 0;
    return 1;
}

int semiprimo(int n){
    if (sePrimo(n)) return 0;
    for (int i = 0; i < n; i++) {
        if(sePrimo(i) == 0) continue;
        for (int j = 0; j < n; j++) {
            if(sePrimo(j) == 0) continue;
            if(i * j == n){
                return 1;
            }
        }
    }
    return 0;
}

int diferentes(int a, int b, int c){

	if(a == b) return 0;
	if(a == c) return 0;
	if(b == c) return 0;

	return 1;

}

int somaDivisores(int x){
    int soma = 0;
    for(int i = 1; i <= x/2; i++) if(x % i == 0) soma += i;
    return soma;

}

void amigos(int x, int y){

    int somaX, somaY;

    somaX = somaDivisores(x);
    somaY = somaDivisores(y);

    if(somaX == y && somaY == x)printf("%d e %d sao Amigos.\n",x, y );

}

int confirma(){
    int sim = 0;

    printf("\nVoce esta certo disso?\n\t1 - SIM\n\t2 - NAO\n\n\t");
    scanf("%d", &sim);
    return sim;
}

int voto(){
    int v;
    printf("83-Alibaba\n93-Alcapone\n00 - Branco\n\nEm quem deseja votar?\n" );
    scanf("%d", &v);
    switch (v) {
        case 83:
            printf("\nVoce esta votando no candidato:\tAlibaba.\n" );
            if (confirma() == 1)return 83;

        break;
        case 93:
            printf("\nVoce esta votando no candidato:\tAlcapone.\n" );
            if (confirma() == 1)return 93;

        break;
        case 00:
            printf("\nVoce esta votando em BRANCO!\n" );
            if (confirma() == 1)return 00;

        break;
        default:
            printf("\nVoce esta votando NULO!\n" );
            if (confirma() == 1)return 1;


    }

    return voto();
}

void vencedor(int ali, int alca ){
    if(ali > alca){
        printf("\n\n\tALIBABA E O VENCEDOR\n");
    }else if(alca > ali){
        printf("\n\n\tALCAPONE E O VENCEDOR\n");
    }else if (ali == alca && ali != 0){
        printf("\n\n\tEMPATE, TEREMOS OUTRO TURNO\n");
    }else{
        printf("\n\n\tBRANCOS E NULOS RECEBERAM MAIS VOTOS\n");
    }

}

int inverso(int x){
    int a, b;

    a = x/10;
    b = x - a * 10;

    return b * 10 + a;
}

void printData(int dia, int mes, int ano){
    char data[61] = "Voce tem:\t";
    if (ano == 1){
        sprintf(data, "%s%d ano, ", data, ano);
    }else{
        sprintf(data,"%s%d anos, ", data , ano);
    }

    if (mes == 1){
        sprintf(data, "%s%d mes e ", data , mes);
    }else{
        sprintf(data, "%s%d meses e ", data , mes);
    }

    if (dia == 1){
        sprintf(data, "%s%d dia.\n", data , dia);
    }else{
        sprintf(data, "%s%d dias.\n", data , dia);
    }

    printf("%s\n", data);


}

int getAno(int anoA, int anoN){

    while(anoN <= 0 || anoN >= anoA){
        printf("Em que ano voce nasceu?\t" );
        scanf("%d", &anoN);
        if(anoN <= 0 || anoN > anoA){
            printf("Ano Invalido\n");

        }
    }

    return anoN;
}

int getMes(int mesA, int mesN, int anoN){
    while (mesN <= 0 || mesN > 12) {
        printf("Em que mes voce nasceu?\t" );
        scanf("%d", &mesN);
        if(mesN <= 0 || mesN > 12) {
            printf("Mes Invalido\n");
        }else if(anoN == 0 && mesN > mesA){
            printf("Mes Invalido\n");
            mesN = 0;
        }
    }

    return mesN;
}

int getDia(int diaA, int diaN, int mesN){
    int maiorDia;
    if(mesN == 2) {
        maiorDia = 29;
    }else if(mesN == 4 || mesN == 6 || mesN == 9 || mesN == 11){
        maiorDia = 30;
    }else{
        maiorDia = 31;
    }

    while(diaN <= 0 || diaN > maiorDia){
        printf("Em que dia voce nasceu?\t" );
        scanf("%d", &diaN);
        if(diaN <= 0 || diaN > maiorDia){
            printf("Dia Invalido\n");
        }
    }
    return diaN;
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

int maiorNumero(int a, int b, int c){

    if(b > a) a = b;
    if(c > a) a = c;

    return a;
}

int somaQuadrados(int a, int b){
    return a * a + b * b;
}

float potencia(float x, int y){
    float result = x;

    for(int i = 1; i<y; i++ ) result *= x;

    return result;
}

int qtdNotas(float valor, int nota){
        int qtd = 0;
        while(valor >= 0){
                valor -= nota;
                qtd++;
        }
        qtd--;

        return qtd;
}

void dezUM(){
    //10.1. Converter uma temperatura dada em graus Fahrenheit para graus Celsius.

    printf("Este programa converte uma temperatura em Fahrenheit para Celsius\n\n");

    float fah, cel;

    printf("Digite a temperatura em Fahrenheit:\t");
    scanf("%f", &fah);

    cel = (fah - 32) * 5 / 9;

    printf("%.2f\n", cel);
}

void dezDois(){
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

void dezTres(){
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

void dezQuatro(){
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

void dezCinco(){
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

void questao8(){
    /*8. Sabendo que o dia 01/01/1900 foi uma segunda-feira, escreva um algoritmo que
    determine o dia da semana correspondente a uma data, posterior a 01/01/1900,
    dada. Por exemplo, se a data dada for 23/01/1900, o algoritmo deve fornecer como
    resposta terça-feira.*/

    printf("Este programa determina o dia da semana referente a uma data\n");

    int dia, mes, ano, ndias = 0;

    printf("Digite a data no formato dd/mm/aaaa:\t");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    mes--;
    ndias += mes * 31;


    switch (mes) {

        case 11: ndias--;
        case 10: ;
        case 9: ndias--;
        case 8: ;
        case 7: ;
        case 6: ndias--;
        case 5: ;
        case 4: ndias--;
        case 3: ;
        case 2: ndias-=3;
        case 1: ;
    }

    if ( ((ano%4)==0) && ( ((ano%100)!=0) || ((ano%400)==0) ) && (mes == 2))
        ndias += 1;

    ndias += -1 + (ano-1)*365 + (ano-1)/4 -(ano-1)/100 +(ano-1)/400 ;

    ndias += dia;
    ndias = ndias % 7;

    switch (ndias) {
        case 0: printf("\tSegunda\n"); break;
        case 1: printf("\tTerca\n"); break;
        case 2: printf("\tQuarta\n"); break;
        case 3: printf("\tQuinta\n"); break;
        case 4: printf("\tSexta\n"); break;
        case 5: printf("\tSabado\n"); break;
        case 6: printf("\tDomingo\n"); break;
    }
}

void questao9(){

    /*Avalie cada uma das expressões abaixo.
    9.1. (-(-9) + sqrt((-9)*(-9) - 4*3*6))/(2*3).
    9.2. ((pow(3, 2) == 9) && (acos(0) == 0)) || (4 % 8 == 3).*/

    printf("1 Expressao:\n");
    printf("(-(-9) + sqrt((-9)*(-9) - 4*3*6))/(2*3)\n");
    printf("(9 + sqrt(81 - 72))/6\n");
    printf("(9 + sqrt(9))/6\n");
    printf("(9 + 3)/6\n");
    printf("12/6\n");
    printf("%.2f\n\n", (-(-9) + sqrt((-9)*(-9) - 4*3*6))/(2*3));

    printf("2 Expressao:\n");
    printf("((pow(3, 2) == 9) && (acos(0) == 0)) || (4 %% 8 == 3)\n");
    printf("((9 == 9) && (0 == 0)) || 0\n");
    printf("(1 && 0) || 0\n");
    printf("0 || 0\n");
    printf("%d\n", ((pow(3, 2) == 9) && (acos(0) == 0)) || (4 % 8 == 3));

}

void questao10(){
    /*10. Escreva programas para
    10.1. Converter uma temperatura dada em graus Fahrenheit para graus Celsius.
    10.2. Gerar o invertido de um número com três algarismos (exemplo: o invertido de
    498 é 894).
    10.3. Somar duas frações ordinárias, fornecendo o resultado em forma de fração.
    10.4. Determinar o maior múltiplo de um inteiro dado menor do que ou igual a um
    outro inteiro dado (exemplo: o maior múltiplo de 7 menor que 50 é 49).
    10.5. Determinar o perímetro de um polígono regular inscrito numa circunferência,
    dados o número de lados do polígono e o raio da circunferência.*/
    printf("VOCE DESEJA:\n");
    printf("1: Converter uma temperatura dada em graus Fahrenheit para graus Celsius.\n");
    printf("2: Gerar o invertido de um numero com tres algarismos (exemplo: o invertido de 498 e 894).\n");
    printf("3: Somar duas fracoes ordinarias\n");
    printf("4: Determinar o maior multiplo de um inteiro dado menor do que ou igual a um outro inteiro dado \n(exemplo: o maior multiplo de 7 menor que 50 e 49).\n");
    printf("5: Determinar o perimetro de um poligono regular inscrito numa circunferencia\n");
    printf("0: Sair\n");

    int i;
    scanf("%d", &i);

    switch (i) {
        case 0: return;
        case 1: dezUM(); break;
        case 2: dezDois(); break;
        case 3: dezTres(); break;
        case 4: dezQuatro(); break;
        case 5: dezCinco(); break;
        default: printf("\n\tNumero invalido\n\n" ); questao10();
    }

}

void questao11(){

    /*11. Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/

    printf("Este programa permuta o conteúdo de duas variáveis sem utilizar uma variável auxiliar.\n\n");

    int a, b;

    printf("\tDigite o primeiro numero:\t" );
    scanf("%d", &a);

    printf("\tDigite o segundo numero:\t" );
    scanf("%d", &b);

    printf("\n\ta = %d\n", a);
    printf("\tb = %d\n", b);

    a += b;
    b -= a;

    b *= -1;
    a -= b;

    printf("\n\ta = %d\n", a);
    printf("\tb = %d\n", b);


}

void questao12(){

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

void questao13() {
    /*13. Um intervalo de tempo pode ser dado em dias, horas, minutos, segundos ou
    sequências "decrescentes" destas unidades (em dias e horas; em horas e minutos;
    em horas, minutos e segundos), de acordo com o interesse de quem o está
    manipulando. Escreva um programa que converta um intervalo de tempo dado em
    segundos para horas, minutos e segundos. Por exemplo, se o tempo dado for 3 850
    segundos, o programa deve fornecer 1 h 4 min 10 s.*/

    printf("Este programa converte um intervalo de tempo dado em segundos para horas, minutos e segundos.\n\n");

    int segundos, horas, minutos;

    printf("Digite os segundos:\t");
    scanf("%d", &segundos);

    horas = segundos/3600;
    segundos -= horas * 3600;

    minutos = segundos/60;
    segundos -= minutos * 60;

    printf("\t%d horas, %d minutos e %d segundos\n", horas, minutos, segundos );
}

void questao14(){
    /*14. Escreva um programa que converta um intervalo de tempo dado em minutos para
    horas, minutos e segundos. Por exemplo, se o tempo dado for 145.87 min, o
    programa deve fornecer 2 h 25 min 52.2 s (vale lembrar que o ponto é o separador
    da parte inteira).*/

    printf("Este programa converte um intervalo de tempo dado em minutos para horas, minutos e segundos.\n\n");

    float minutos = 145.87, s;
    int h, m;

    printf("Quantos minutos voce deseja converter?\t");
    scanf("%f", &minutos);

    h = minutos/60;
    minutos -= h * 60;

    m = minutos;
    minutos -= m;

    s = 60 * minutos;

    printf("%d horas %d minutos %.2f segundos\n", h, m, s);

}

void questao15(){
    /*15. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
    mecanismo para decidir o número de notas de cada valor que deve ser
    disponibilizado para o cliente que realizou o saque. Um possível critério seria o da
    "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem
    distribuídas em número mínimo possível. Por exemplo, se a máquina só dispõe de
    notas de R$ 50, de R$ 10, de R$ 5 e de R4 1, para uma quantia solicitada de R$
    87, o programa deveria indicar uma nota de R$ 50, três notas de R$ 10, uma nota
    de R$ 5 e duas notas de R$ 1. Escreva um programa que receba o valor da quantia
    solicitada e retorne a distribuição das notas de acordo com o critério da distribuição
    ótima.*/

    printf("Este programa mostra a quantidade de notas retiradas de um caixa eletrônico\n\n");

    int cin, dez, cinco, um, valor;

    printf("Escreva o valor que voce deseja retirar:\tR$");
    scanf("%d", &valor);

    cin = qtdNotas(valor, 50);
    valor -= cin * 50;

    dez = qtdNotas(valor, 10);
    valor -= dez * 10;

    cinco = qtdNotas(valor, 5);
    valor -= cinco * 5;

    um = qtdNotas(valor, 1);
    valor -= um;

    printf("\n\t%d notas de R$50\n\t%d notas de R$10\n\t%d notas de R$5\n\t%d notas de R$1\n", cin, dez, cinco, um);


}

void questao16(){
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

void questao17(){
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

void questao18(){
    /*18. Escreva um programa para verificar se um inteiro dado é um quadrado perfeito,
    exibindo, nos casos afirmativos, sua raiz quadrada.
    */

	printf("Este programa verifica se um numero e um quadrado perfeito\n\n");

    int n, raiz = 0;

    printf("Qual o numero que voce deseja saber se e um quadrado perfeito?\t");
	scanf("%d", &n);

    for (int i = 1; i <= n/2; i++) {
        if(i * i > n) break;
        if(i * i == n){
            raiz = i;
            break;
        }
    }

    if(raiz == 0) printf("%d nao e um quadrado perfeito.\n", n);
    else printf("%d e um quadrado perfeito, pois %d * %d = %d\n",n, raiz, raiz, n);

}

void questao19(){
    /*
    19. Escreva um programa para determinar o maior de três números dados.
    */

	printf("Este programa determinha o maior de 3 numeros dados\n\n");

    int a, b, c;

	printf("Digite o valor do primeiro numero:\t");
    scanf("%d", &a);

    printf("Digite o valor do segundo numero:\t");
    scanf("%d", &b);

    printf("Digite o valor do terceiro numero:\t");
    scanf("%d", &c);

    if(b > a) a = b;
    if(c > a) a = c;

    printf("\n\t%d e o maior valor.\n", a);

}

void questao20(){
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

void questao21(){
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

void questao22(){
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

void questao23(){
    /*23. Escreva um programa para determinar a idade de uma pessoa, em anos meses e
    dias, dadas a data (dia, mês e ano) do seu nascimento e a data (dia, mês e ano)
    atual*/

	printf("Este programa calcula a idade de uma pessoa em anos, meses e dias\n");

    int diaA, mesA, anoA, diaN = 0, mesN = 0, anoN = 0, anoI, mesI = 0, diaI = 0;

	printf("Digite o dia de hoje:\t");
	scanf("%d", &diaA);

	printf("Digite o mes atual:\t");
	scanf("%d", &mesA);

	printf("Digite o ano atual:\t");
	scanf("%d", &anoA);

	printf("\n" );

    anoN = getAno(anoA, anoN);
    mesN = getMes(mesA, mesN, anoA - anoN);
    diaN = getDia(diaA, diaN, mesN);

    anoI = anoA - anoN;
    if(mesA < mesN){
        anoI--;
        mesI = 12 -(mesN - mesA);

    }else if(mesA>mesN){
        mesI = mesA-mesN;
    }

    if (diaA > diaN){
        diaI = diaA - diaN;

    }else if (diaA < diaN){
        diaI = 30 - (diaN - diaA);
    }

    if(mesI == 0 && diaI==0 && anoI == 0){
        printf("\n\tPARABENS PELO SEU NASCIMENTO!!\n" );

    }else if (mesI == 0 && diaI==0){
        printf("\n\tPARABENS PELO SEU ANIVERSARIO!!\n" );

    }else if(mesI == 0 && diaA < diaN){
        anoI--;
    }

    printData(diaI, mesI, anoI);

}

void questao24(){
    /*24. Escreva um programa que, recebendo as duas notas bimestrais de um aluno,
    forneça a nota mínima que ele deve obter na prova final para que ele seja
    aprovado.*/

    printf("Este programa calcula a nota minima que um aluno precisa \nbaseado na media e nas duas primeiras notas deste aluno\n\n" );

    float n1, n2, falta, media;

    printf("Qual a media para o aluno ser aprovado?\t");
    scanf("%f", &media );

    media *= 3;

    printf("Digite a nota da AP1.\t");
    scanf("%f", &n1);

    printf("Digite a nota da AP2.\t");
    scanf("%f", &n2);

    if (n1 + n2 < media){
        falta = media - n1 - n2;
        if(falta > 10) printf("O aluno ja esta reprovado, pois precisa de:\t%.2f pontos\n", falta);
        else printf("O aluno precisa obter %.2f pontos na prova final.\n", falta);
    }else{
        printf("O aluno ja esta aprovado\n" );

    }


}

void questao25(){
    int i, a, q, Termo;
    for (i = 5; i > 0; i = i - 1){
        a = i;
        q = 3;
        Termo = a;
        while (Termo <= 9 * a){
            printf("%d \n", Termo); Termo = Termo * q;
        }
    }
}

void questao26(){
    /*26. Escreva um programa que determine a soma dos quadrados dos n primeiros
    números naturais, n dado.*/

	printf("Este programa determina a soma dos quadrados dos n primeiros numeros naturais\n\n");

    int n, soma = 0;
    printf("Digite o numero de quadrados que deseja saber a soma:\t");
	scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d^2 =\t  %d\n",i , i*i );
        soma += i * i;
    }
    printf("\t+_______\n\t  %d", soma);

}

void questao27(){

    /*27. Escreva um programa para calcular a soma dos n primeiros termos das sequências
    abaixo, n dado.
    27.1 (1/2, 3/5, 5/8, ...)
    27.2 (1, -1/2, 1/3, -1/4, ...)
    */

	printf("Este programa calcula a soma dos n primeiros termos das sequencias abaixo.\n27.1 (1/2, 3/5, 5/8, ...)\n27.2 (1, -1/2, 1/3, -1/4, ...)\n\n" );

    int n;
    float soma = 0;

    printf("Digite o numero de termos para saber a soma\t");
	scanf("%d", &n);

    printf("\nSoma de %d termos da sequencia 1 -> (1/2, 3/5, 5/8, ...)\n", n);
    for(float i = 1,x = 1, y = 2; i <= n; i++, x += 2, y += 3) {
        soma +=  x/y;
    }
    printf("Soma dos primeiros %d termos da sequencia 1:\t%.3f\n", n, soma );
    soma = 0;
    printf("\nSoma de %d termos da sequencia 2 -> (1, -1/2, 1/3, -1/4, ...)\n", n);
    for (float i = 1, x = 1; i <= n; i++, x *= -1) {
        soma += (1/i)* x;
    }
    printf("Soma dos primeiros %d termos da sequencia 2:\t%.3f\n", n, soma );
}

void questao28(){
    /*
    A questão do mínimo múltiplo comum é muito interessante como exemplo para a
    aprendizagem de programação. A ideia é a seguinte: x, 2x, 3x, etc. são múltiplos de x.
    Para se obter o mínimo múltiplo comum basta que se tome o primeiro destes números
    que seja múltiplo também de y.
    Programa para determinar o mínimo múltiplo comum de dois números positivos
    #include <stdio.h>
    main()
    {
    int x, y, i, Mmc;
    printf("Digite os dois numeros \n"); scanf("%d %d", &x, &y);
    Mmc = x;
    while (Mmc % y != 0)
    Mmc = Mmc + x;
    printf("mmc(%d, %d) = %d \n", x, y, Mmc);
    }
    Um problema que esta solução possui é que se o primeiro valor digitado fosse muito
    menor do que o segundo, o número de repetições necessárias para se chegar ao
    mmc seria muito grande. Refaça o exemplo, tomando o maior dos números dados
    como base do raciocínio ali utilizado.
    */

    printf("Este programa determina o minimo multiplo comum de dois numeros positivos\n" );
    printf("tomando o maior dos numeros dados como base do raciocinio utilizado.\n\n" );

    int x, y, Mmc;

    printf("Digite o primeiro numero:\t");
    scanf("%d", &x);

    printf("Digite o primeiro numero:\t");
    scanf("%d", &y);

    if(x > y){
        Mmc = x;
        while (Mmc % y != 0)
        Mmc = Mmc + x;
        printf("mmc(%d, %d) = %d \n", x, y, Mmc);
    }else{
        Mmc = y;
        while (Mmc % x != 0)
        Mmc = Mmc + y;
        printf("mmc(%d, %d) = %d \n", x, y, Mmc);
    }


}

void questao29(){
    /*29. Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus
    divisores. Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12,
    6 é perfeito. A matemática ainda não sabe se a quantidade de números perfeitos é
    ou não finita. Escreva um programa que liste todos os números perfeitos menores
    que um inteiro n dado.*/

    printf("Este programa liste todos os numeros perfeitos menores que um numero dado\n\n" );

    int soma = 0, n;
    printf("Digite um numero:\t");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            if(i % j == 0) {
                soma += j;
            }
        }
        if(soma == 2 * i) printf("\n%d e perfeito\npois a soma dos seus divisores e: %d\n\n", i, soma);
        soma = 0;
    }

}

void questao30(){
    /*30. O número 3025 possui a seguinte característica: 30 + 25 = 55 e 55^2 = 3025.
    Escreva um programa que escreva todos os números com quatro algarismos que
    possuem a citada característica.*/

    printf("Este programa escreve todos os numeros com quatro algarismos que possuem a seguinte característica:\n" );
    printf("30 + 25 = 55 e 55^2 = 3025\n\n");

    int t;
    char n1[5], n2[5];

    for (int i = 10; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            t = i + j;
            t *= t;
            if(t > 9999 || t < 1000) continue;
            sprintf(n2, "%d", t);
            t = i * 100 + j;
            sprintf(n1, "%d", t);

            if(strcmp(n1, n2) == 0)
            printf("%s possui a mesma carateristica.\nPois %d + %d = %d\n%d^2 = %s\n\n",n1, i, j, i+j, i+j, n2);



        }
    }



}

void questao31(){
    /*31. Escreva um programa que escreva todos os pares de números de dois algarismos
    que apresentam a seguinte propriedade: o produto dos números não se altera se os
    dígitos são invertidos. Por exemplo, 93x13 = 39x31 = 1.209*/

    printf("Este programa mostra todos os numeros com a seguinte propriedade:\n");
    printf("o produto dos números não se altera se os dígitos são invertidos. Por exemplo, 93x13 = 39x31 = 1.209\n\n");

    int a, b, c;

    for (int i = 10; i < 100; i++) {
        for (int j = i; j < 100; j++) {
            if(i == j) continue;
            c = i*j;
            a = inverso(i);
            b = inverso(j);
            if(c == a * b ) printf("%d * %d = %d * %d = %d\n",i, j, a, b, c );

        }
    }
}

void questao32(){
    /*32. Escreva um programa para determinar o número de algarismos de um número
    inteiro positivo dado.*/

	printf("Este programa determina o numero de algarismos de um numero\n\n" );

    int n, r = 0, i = 1, contador = 0;
	printf("Digite um numero:\t");
	scanf("%d", &n);

    do{
        r = n / i;
        i*=10;
        contador++;
    }while (r != 0);

    contador--;
    printf("\nNumero de algarismos:\t%d\n", contador);


}

void questao33(){
    /*33. Um número inteiro positivo é dito semiprimo se ele é igual ao produto de dois
    números primos. Por exemplo, 15 é semiprimo pois 15 = 3 x 5; 9 é semiprimo pois 9
    = 3 x 3; 20 não é semiprimo pois 20 = 2 x 10 e 10 não é primo. Os números
    semiprimos são fundamentais para o sistema de criptografia RSA (Evaristo, J,
    2002). Escreva um programa que verifique se um inteiro dado é semiprimo.
    */

    printf("Este programa verifica se um numero dado e semiprimo\n\n");

    int n, a, b, semiprimo = 0;
    printf("Digite um numero:\t");
    scanf("%d", &n);

    if(sePrimo(n)){
        printf("O numero digitado e primo, logo nao e semiprimo\n");
        return;
    }


    for (int i = 0; i < n; i++) {
        if(sePrimo(i) == 0) continue;
        for (int j = 0; j < n; j++) {
            if(sePrimo(j) == 0) continue;
            if(i * j == n){
                a = i;
                b = j;
                semiprimo = 1;
                break;
            }
        }
        if(semiprimo == 1) break;
    }

    if(semiprimo == 1) printf("%d e semiprimo pois %d * %d = %d\n", n, a, b, n);
    else printf("%d nao e semiprimo\n", n);
}

void questao34(){
    /*34. Quando um número não é semiprimo, a Matemática prova que ele pode ser escrito
    de maneira única como um produto de potências de números primos distintos. Este
    produto é chamado de decomposição em fatores primos do número e os expoentes
    são chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 2^3x3^2x5.
    Escreva um programa que obtenha a decomposição em fatores primos de um
    inteiro dado.
    */

    printf("Este programa faz a decomposicao de um numero em fatores primos\n\n" );

    int n, a;
    a = n;

    printf("Digite um numero para obter a decomposicao em fatores primos:\t");
    scanf("%d", &n);

    if(semiprimo(n)==1){
         printf("O numero e semiprimo, logo a decomposicao em fatores primos e impossivel.\n");
         return;
     }

    // divide o numero o quanto puder, enquanto o resto da divisao for 0, por cada numero primo
    // para decompor o numero
    for(int i = 2; i <= n; i++){
        // se o numero nao for primo continua até encontrar o proximo numero primo
        if(sePrimo(i) == 0) continue;
        while(a % i == 0){
            a /= i;
            printf("%d ", i);
        }
    }
}

void questao35(){
    /*35. Escreva um programa que transforme o computador numa urna eletrônica para
    eleição, em segundo turno, para presidente de um certo país, às quais concorrem
    os candidatos 83-Alibabá e 93-Alcapone. Cada voto deve ser dado pelo número do
    candidato, permitindo-se ainda o voto 00 para voto em branco. Qualquer voto
    diferente dos já citados é considerado nulo; em qualquer situação, o eleitor deve
    ser consultado quanto à confirmação do seu voto. No final da eleição o programa
    deve emitir um relatório contendo a votação de cada candidato, a quantidade votos
    em branco, a quantidade de votos nulos e o candidato eleito.*/

    printf("Este programa age como uma urna eletronica de uma eleicao\n" );
    printf("e calcula os votos entre 2 candidatos\n\n");


    int eleitores, ali=0, alca=0, nulo=0, branco=0;
    printf("Digite quantos eleitores votarao nesta eleicao:\t");
    scanf("%d", &eleitores);

    for (int i = 1; i <= eleitores; i++) {
        switch (voto()) {
            case 83:
                ali++;
            break;
            case 93:
                alca++;
            break;
            case 00:
                branco++;
            break;
            default:
                nulo++;
        }
        printf("\nVOTO CONFIRMADO\n\n\n\n\n" );

    }

    printf("ALIBABA - %d\nALCAPONE - %d\nBRANCOS - %d\nNULOS - %d",ali, alca, branco, nulo );

    vencedor(ali, alca);
}

void questao36(){
    /*36. A sequência de Fibbonaci é a sequência (1, 1, 2, 3, 5, 8, 13, ...) definida por
    Escreva um programa que determine o n-ésimo termo desta sequência, n dado.*/

	printf("Este programa determin o n-esimo termo da sequencia de Fibbonaci\n\n");

	int x, a = 1, b = 1, soma = 0;
	printf("Digite um numero:\t");
	scanf("%d", &x);

    for(int i = 2; i<=x;i++){
        soma += b;
        a = b;
        b = soma;
        //printf("%d\n", a);

    }
    printf("\nO %d numero da sequencia Fibbonaci e:\t%d\n", x, b);
}

void questao37(){
    /*37. A série harmônica S= 1 + 1/2 + 1/3 + ... + 1/n + ... é divergente. Isto significa que
    dado qualquer real k existe n0 tal que 1 + 1/2 + 1/3 + ... + 1/n0 + ... > k. Escreva
    um programa que dado um real k determine o menor inteiro n0 tal que S > k. Por
    exemplo se k = 2, o programa deve fornecer n0 = 4, pois
    1 + 1/2 + 1/3 + 1/4 = 2,083... e 1 + 1/2 + 1/3  =1,8333...
    */
    printf("A serie harmonica S= 1 + 1/2 + 1/3 + ... + 1/n + ... e divergente.\nIsto significa que dado qualquer real k existe n0 tal que 1 + 1/2 + 1/3 + ... + 1/n0 + ... > k\n" );
    printf("Este programa determine o menor inteiro n0 tal que S > k\n\n");

    float soma = 0.0;
    int x, i = 0;

    printf("Digite um numero:\t");
    scanf("%d", &x);

    while (soma < x){
        i++;
        soma += (float)1/(float)i;
        //printf("%f\n", soma);

    }
    printf("%d\n", i);

}

void questao38(){
    /*38. Dois números inteiros são ditos amigos se a soma dos divisores de cada um deles
    (menores que eles) é igual ao outro. Por exemplo, os divisores de 220 são 1, 2, 4,
    5, 10, 11, 20, 22, 44, 55 e 110 e 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 =
    284 e os divisores de 284 são 1, 2, 4, 71 e 142 e 1 + 2 + 4 + 71 + 142 = 220.
    Escreva um programa que determine todos os pares de inteiros amigos menores
    que um inteiro dado.*/
	printf("Este programa determina todos os pares de inteiros amigos menores que um inteiro dado.\n\n");

	int x;
	printf("Digite um numero:\t");
	scanf("%d", &x);

    for(int i = 0; i < x; i++){
        for (int j = i; j < x; j++) {
            if (i != j)amigos(i, j);
        }
    }
}

void questao39(){

	/*
	39. Escreva um programa que escreva todos os subconjuntos com três elementos do
	conjunto {1, 2, 3, ..., n}, n dado.
	*/
	printf("Este programa que escreva todos os subconjuntos com tres elementos de um conjunto {1, 2, 3, ..., n}\n\n" );

	int n;
	printf("Digite um numero:\t");
	scanf("%d", &n);

    printf("{ " );
    for (int i = 1; i <= n; i++) {
        printf("%d, ", i );
    }
	printf("}\n" );

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = j; k <= n; k++) {
				if(diferentes(i, j, k) == 1) printf("{%d, %d, %d}\n", i, j, k);
			}
		}
	}

}

void questao40(){
    /*40. Um inteiro positivo x é dito uma potência prima se existem dois inteiros positivos p
    e k, com p primo, tais que x = p^k. Escreva uma função que receba um inteiro e
    verifique se ele é uma potência prima.*/

    printf("Este programa verifica se um numero e uma potencia prima\n\n");


    int x, pPrimo = 0, y, z;
    printf("Digite um numero:\t");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        if(sePrimo(i) == 0) continue;
        for (int j = 0; j <= x; j++) {
            if(potencia(i, j) > x) break;
            if(potencia(i, j) == x){
                y = i;
                z = j;
                pPrimo = 1;
                break;
            }
        if(pPrimo == 1) break;
        }
    }

    if(pPrimo == 1)printf("%d e uma portencia prima, pois %d^%d = %d\n", x, y, z, x);

}

void questao41(){
    /*41. Um inteiro positivo x é dito uma potência perfeita de base z e expoente y se
    existem dois inteiros positivos z e y tais que x = z^y. Escreva uma função que
    receba um inteiro e verifique se ele é uma potência perfeita.*/
    printf("Este programa verifica se um numero e uma potencia perfeita\n\n");

    int x, z, y, perfeito = 0;
    printf("Digite um numero:\t");
    scanf("%d", &x);

    for (int i = 1; i < x; i++) {
        for (int j = 1; j <= x; j++) {

            if(potencia(i, j) > x) continue;
            if(potencia(i, j) == (float)x){
                y = i;
                z = j;
                perfeito = 1;
                break;
            }
        if(perfeito == 1) break;
        }
    }

    if(perfeito == 1) printf("%d e perfeito, pois %d^%d = %d\n",x,y,z,x );
    else printf("%d nao e perfeito\n", x);


}

#endif
