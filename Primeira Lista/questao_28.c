#include <stdio.h>
void multiplo();

int main(){

    multiplo();
    return 0;

}

void multiplo(){
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
