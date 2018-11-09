#include<stdio.h>
int qtdNotas(float, int);
void saque();

int main(){

        saque();
        return 0;
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

void saque(){
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
