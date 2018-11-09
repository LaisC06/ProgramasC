#include<stdio.h>
int primo(int n);

int main(){

    /*(1,0 ponto) Implemente uma função para testar se um número inteiro é primo ou
    não. Essa função deve obedecer ao protótipo a seguir e ter como valor de retorno 1
    (um) se n for primo e 0 (zero) caso contrário.
    int primo(int n);*/

    int num;

    printf("Digite um numero para a verificar se e primo:\n");
    scanf("%d", &num);

    if(primo(num)==1) printf("O numero %d e primo\n", num);
    else printf("O numero %d nao e primo\n", num);

    return 0;
}

int primo(int n){

    if(n == 2) return 1;
    if (n < 2) return 0;
    if (n % 2 == 0) return 0;

    for(int i = 3; i < n; i+=2)
        if(n % i == 0) return 0;

    return 1;
}
