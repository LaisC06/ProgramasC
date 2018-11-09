#ifndef GETVAR_H
#define GETVAR_H
#include <stdio.h>
#include <stdlib.h> // para a funcao strtof()
#include <math.h> // para a HUG_VALF
#include <errno.h> // para a constante ERANGE

float getNFloat(char txt[100]){

    char temp[100];
    float n = 0.0;

    printf("%s", txt);
    scanf("%s", temp);

    n = strtof(temp, NULL);

    switch ((int) n) {
        case (int)HUGE_VALF:
            printf("erro HUGE_VALF\n");
            return getNFloat(txt);
        case ERANGE:
            printf("erro ERANGE\n");
            return getNFloat(txt);
        case 0:
            printf("\tNumero Invalido\n\n");
            return getNFloat(txt);
        break;
        default: return n;

    }


}

float getNFloatPos(char txt[100]){
    char temp[100];
    float n = 0.0;

    printf("%s", txt);
    scanf("%s", temp);

    n = strtof(temp, NULL);

    switch ((int) n) {
        case (int)HUGE_VALF:
            printf("erro HUGE_VALF\n");
            return getNFloat(txt);
        case ERANGE:
            printf("erro ERANGE\n");
            return getNFloat(txt);
        case 0:
            printf("\tNumero Invalido\n\n");
            return getNFloat(txt);
        break;
        default:
            if(n > 0){
                return n;
            }else{
                printf("Digite um numero positivo\n");
                return getNFloatPos(txt);
            }

    }



}

int getNInt(char txt[100]){

    char temp[100];
    int n = 0;

    printf("%s", txt);
    scanf("%s", temp);

    n = atoi(temp);

    switch (n) {
        case (int)HUGE_VALF:
            printf("erro HUGE_VALF\n");
            return getNFloat(txt);
        case ERANGE:
            printf("erro ERANGE\n");
            return getNFloat(txt);
        case 0:
            printf("\tNumero Invalido\n\n");
            return getNFloat(txt);
        break;
        default: return n;

    }

}

int getNIntPos(char txt[100]){

    char temp[100];
    int n = 0;

    printf("%s", txt);
    scanf("%s", temp);

    n = atoi(temp);

    switch (n) {
        case (int)HUGE_VALF:
            printf("erro HUGE_VALF\n");
            return getNFloat(txt);
        case ERANGE:
            printf("erro ERANGE\n");
            return getNFloat(txt);
        case 0:
            printf("\tNumero Invalido\n\n");
            return getNFloat(txt);
        break;
        default:
            if(n > 0) {
                return n;
            }else{
                printf("Digite um numero positivo\n");
                return getNFloat(txt);
            }
    }
}


#endif
