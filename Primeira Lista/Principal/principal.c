#include <stdio.h>
#include <stdlib.h>
#include "questoes.h"
#include "getvar.h"
int selecionaQ();

int main() {

    int outra = 1;

    do{
        selecionaQ();
        printf("\n\nDeseja selecionar outra questao?\n");
        printf("\t1 - SIM\n\t2 - NAO\n\n" );
        scanf("%d", &outra);
    }while (outra != 2);




    return 0;
}

int selecionaQ(){
    system("cls");
    int nQuestao = getNIntPos("Qual questao voce deseja executar?\nEscreva um numero de 8 a 41, ou 0 para sair:\t");
    printf("\n");

    switch (nQuestao) {
        case 0: return 0;
        case 8: questao8(); break;
        case 9: questao9(); break;
        case 10: questao10(); break;
        case 11: questao11(); break;
        case 12: questao12(); break;
        case 13: questao13(); break;
        case 14: questao14(); break;
        case 15: questao15(); break;
        case 16: questao16(); break;
        case 17: questao17(); break;
        case 18: questao18(); break;
        case 19: questao19(); break;
        case 20: questao20(); break;
        case 21: questao21(); break;
        case 22: questao22(); break;
        case 23: questao23(); break;
        case 24: questao24(); break;
        case 25: questao25(); break;
        case 26: questao26(); break;
        case 27: questao27(); break;
        case 28: questao28(); break;
        case 29: questao29(); break;
        case 30: questao30(); break;
        case 31: questao31(); break;
        case 32: questao32(); break;
        case 33: questao33(); break;
        case 34: questao34(); break;
        case 35: questao35(); break;
        case 36: questao36(); break;
        case 37: questao37(); break;
        case 38: questao38(); break;
        case 39: questao39(); break;
        case 40: questao40(); break;
        case 41: questao41(); break;
        default: printf("\tQuestao invalida\n\n"); selecionaQ();
    }



    return 0;
}
