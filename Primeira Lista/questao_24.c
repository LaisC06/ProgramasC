#include <stdio.h>
void minFinal();

int main(){
    minFinal();
}

void minFinal(){
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
