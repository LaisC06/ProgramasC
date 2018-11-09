#include<stdio.h>
int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);
void maior(int*, int*);

int main(){
    /*(1,0 ponto) Implemente uma função que indique se um ponto (x, y) está localizado
    dentro ou fora de um retângulo. O retângulo é definido por seus vértices inferior
    esquerdo (x0, y0) e superior direito (x1, y1). A função deve ter como valor de
    retorno 1 (um), se o ponto estiver dentro do retângulo, e 0 (zero) caso contrário,
    obedecendo ao protótipo:
    int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);
    */
    
    int x0, y0, x1, y1, x, y;

    printf("Digite o ponto que voce deseja verificar:\n");
    scanf("%d %d", &x, &y);
    printf("Digite o ponto 1 do retangulo:\n");
    scanf("%d %d", &x0, &y0);
    printf("Digite o ponto 2 do retangulo:\n");
    scanf("%d %d", &x1, &y1);

    if (dentro_ret(x0, y0, x1, y1, x, y)==1) printf("Esta dentro.\n" );
    else printf("Esta fora\n");
}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){

    maior(&x0, &x1);
    maior(&y0, &y1);

    if (x > x0 && x < x1 && y > y0 && y < y1) return 1;
    return 0;

}

void maior(int* a, int* b){

    if(*b < *a){
        *a += *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}
