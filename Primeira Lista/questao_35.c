#include <stdio.h>
void urna();
int voto();
int confirma();
void vencedor(int, int);

int main(){
    urna();
    return 0;
}

void urna(){
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

int confirma(){
    int sim = 0;

    printf("\nVoce esta certo disso?\n\t1 - SIM\n\t2 - NAO\n\n\t");
    scanf("%d", &sim);
    return sim;
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
