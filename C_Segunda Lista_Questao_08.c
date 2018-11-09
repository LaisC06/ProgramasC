#include <stdio.h>
int MMC(int a, int b);
int MDC(int a, int b);
void maior(int*, int*);

int main(int argc, char const *argv[]) {

    int a, b;
    printf("Este programa retorna o MMC entre dois numeros de forma recursiva\n");
    printf("Digite o primeiro numero:\t");
    scanf("%d", &a);
    printf("Digite o primeiro numero:\t");
    scanf("%d", &b);

    printf("\nO MMC entre %d e %d e:\t%d",a , b, MMC(a,b));
    return 0;
}

int MDC(int a, int b){

    maior(&a, &b);

    if(a % b == 0) return b;
    else return MDC(b, a % b);
}

int MMC(int a, int b){

    if(a == b) return a;
    if(a == 0 || b == 0) {
        printf("\tNao existe MMC entre um numero e 0\n");
        return 0;
    }

    return (a*b)/MDC(a,b);

}

void maior(int* a, int* b){
    if(*b > *a){
        *a += *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}
