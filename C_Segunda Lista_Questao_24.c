#include <stdio.h>
#include <stdlib.h>

int alternativa();
int corrige(int * resp, int * gab, int n);

int main(int argc, char const *argv[]) {

    printf("Este programa recebe a sequência de respostas, o gabarito, e corrije um cartão-resposta dado com 50 questoes.\n\n
    ");

    int *resp, *gab, n = 50;

    printf("\n");

    resp = (int *) malloc(n * sizeof(int));
    gab = (int *) malloc(n * sizeof(int));

    printf("Digite o gabarito\n");

    for (int i = 0; i < n; i++) {
        printf("Questao %d:\t", i+1);
        gab[i] = alternativa();
    }

    printf("\nDigite as respostas\n");

    for (int i = 0; i < n; i++) {
        printf("Questao %d:\t", i+1);
        resp[i] = alternativa();
    }

    printf("\n");

    printf("\nO aluno marcou %d ponto(s).\n", corrige(resp, gab, n));

    free(resp);
    free(gab);

    return 0;
}

int alternativa(){
    int q = 0;

    while(q > 5 || q < 1){
        scanf("%d", &q);
        if(q > 5 || q < 1) printf("\n\tAlternativa invalida\nDigite uma nova alternativa\n");
    }

    return q;
}

int corrige(int * resp, int * gab, int n){
    int pontos = 0;
    for (int i = 0; i < n; i++) {
        if(resp[i] == gab[i]) {
            printf("Questao %d: Correta\n", i+1);
            pontos++;
        }
        else {
            printf("Questao %d: Errada\n", i+1);
        }
    }

    return pontos;

}
