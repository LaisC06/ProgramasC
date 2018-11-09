#include<stdio.h>

int fat_impar(int n);

int main(){
	int n=2,verif=0;
	printf("Ola, bem vindo!\n\n");
	while(n%2!=1){
		if(verif>=1) printf("Por favor digite um numero impar para verificar o fatorial ímpar: \n");
		printf("Digite um numero n impar para verificar seu fatorial impar: \n");
		scanf("%d",&n);
		verif++;
	}
	printf("O fatorial impar e: %d\n",fat_impar(n));
	return 0;
}
int fat_impar(int n){
	int i=1,r=1;
	if(i==n)
		return 1;
	else
		return fat_impar(n-2)*n;
}
