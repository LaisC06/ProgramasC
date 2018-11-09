/*#include <stdio.h>
void diaDaSemana();
int validezData(int Dia, int Mes, int Ano)
int bissexto(int);


int main(){
    diaDaSemana();
    return 0;
}


void diaDaSemana(){

    int Dia, Mes, Ano,verif=0,invalido=1;

    printf("Digite a data no formato dd/mm/aaaa: \n");
    while((invalido==1)&&(verif<=10)){
        if(verif>=1) printf("Por favor digite uma data válida!\n");
        scanf("%d/%d/%d", &Dia, &Mes, &Ano);
        if(validezData(Dia,Mes,Ano)==1) invalido=0;
        else if(verif==10) printf("Você esgotou as tentativas!!\n");
        verif++;
    }
    if(invalido==1){
        printf("Você não digitou uma data válida\n");
        return
    }


    int  DiasDoAno, Dias31, AnosBiss, Aux, Mult4, Mult100, Mult400;
    long int Anos, NumDias;
    Anos = Ano - 1600;
    if (Mes < 9)Dias31 = Mes/2;
    else
    Dias31 = (Mes + 1)/2;
    DiasDoAno = 30*(Mes - 1) + Dia + Dias31;
    if (Mes > 2){
        if ((Ano % 4 != 0) || ((Ano % 100 == 0) && (Ano % 400 != 0)))
        DiasDoAno = DiasDoAno - 2;
        else
        DiasDoAno = DiasDoAno - 1;
    }
    Aux = Ano - 1;
    Mult4 = (Aux - (Aux % 4) - 1600)/4;
    Mult100 = (Aux - (Aux % 100) - 1600)/100;
    Mult400 = (Aux - (Aux % 400) - 1600)/400;
    AnosBiss = Mult4 - Mult100 + Mult400;
    NumDias = Anos*365 + DiasDoAno + AnosBiss;
    printf("\nData: %d/%d/%d Dia da semana:", Dia, Mes, Ano);
    switch(NumDias % 7){
        case 0 : printf(" Sabado"); break;
        case 1 : printf(" Domingo"); break;
        case 2 : printf(" Segunda"); break;
        case 3 : printf(" Terca"); break;
        case 4 : printf(" Quarta"); break;
        case 5 : printf(" Quinta"); break;
        case 6 : printf(" Sexta"); break;
    }
}
int validezData(int Dia, int Mes, int Ano){
    if((Dia>31)||(Dia<1)) return 0;
    if((Mes>12)||(Mes<1)) return 0;
    if(((Mes==2)||(Mes==4)||(Mes==6)||(Mes==9)||(Mes==11)) && (Dia>30)) return 0;
    if((bissexto(Ano)==0)&&(Dia==29)) return 0;
    return 1;
}


int bissexto(int ano){
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
        return 1;
    }
    else{
        return 0;
    }
}*/

#include <stdio.h>
#include <stdlib.h>

void calculo_dia_da_semana(int dia,int mes,int ano);

int main()
{
    int d,m,a,teste;
    do{
        teste = 0;
      printf("Calculo do dia da semana\n");
      printf("dia: ");
      scanf("%i",&d);
      printf("mes: ");
      scanf("%i",&m);
      printf("ano: ");
      scanf("%i",&a);
      if((d < 1 || d > 31) || (m < 1 || m > 12) || (a < 1583))
         teste = 1;
         if((m == 2) && (d + m) > 31) /*fevereiro tem no máximo 29 dias*/
         {
             if((m == 2) && (d == 29)) /*verifica se não é ano bissexto*/
             {
                 if(!(a% 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
                 teste = 1;
             }
         }
        if(teste)
        {
            printf("\n!!!ERRO!!! A data (%i/%i/%i) nao existe!!!\n",d,m,a);
        }
      }while(teste);
      //depois do teste de erro
            calculo_dia_da_semana(d,m,a);
system("Pause");
}
void calculo_dia_da_semana(int dia,int mes,int ano)
{
    switch (mes)
    {
        case 1: break;
        case 2: dia += 31; break;
        case 3: dia += 59; break;
        case 4: dia += 90; break;
        case 5: dia += 120; break;
        case 6: dia += 151; break;
        case 7: dia += 181; break;
        case 8: dia += 212; break;
        case 9: dia += 243; break;
        case 10: dia += 273; break;
        case 11: dia += 304; break;
        case 12: dia += 334; break;
    }
           /* Se o ano é um ano-bisexto E
           Se o mes de fevereiro ja passou entao acrescente um dia ao deslocamento*/
           if ( ((ano%4)==0) && ( ((ano%100)!=0) || ((ano%400)==0) ) && (mes > 2))
               dia += 1;
               dia += -1 + (ano-1)*365 + (ano-1)/4 -(ano-1)/100 +(ano-1)/400 ;

             switch (dia % 7)
             {
                case 0: printf("Segunda-feira\n"); break;
                case 1: printf("Terca-feira\n"); break;
                case 2: printf("Quarta-feira\n"); break;
                case 3: printf("Quinta-feira\n"); break;
                case 4: printf("Sexta-feira\n"); break;
                case 5: printf("Sabado.\n"); break;
                case 6: printf("Domingo.\n"); break;
             }
}            
