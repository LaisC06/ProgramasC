#include <stdio.h>
void calculaIdade();
int getAno(int, int);
int getMes(int, int, int);
int getDia(int, int, int);
void printData(int, int, int);

int main()
{
	calculaIdade();
}

void calculaIdade(){
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
