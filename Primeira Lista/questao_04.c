#include<stdio.h>
#include<math.h>

/*4. A média geométrica de n números positivos é a raiz n-ésima do produto destes
números. Supondo que o processador é capaz de calcular l n-ésimas, escreva
um algoritmo para determinar a média geométrica de n números dados.
*/

int main(){
    float contador, media, aux, produto = 1.0;
    printf("Quantos numeros deseja inserir?\n" );
    scanf("%f", &contador);

    for (int i = 0; i<contador; i++){
        printf("Digite um numero:\t" );
        scanf("%f", &aux);
        produto *= aux;

    }

    media = pow(produto, 1.0/contador);

    printf("\n\tA media geometrica dos numeros dados e:\t%.2f\n", media);




}
