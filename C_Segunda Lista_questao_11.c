#include<stdio.h>
#include<stdlib.h>

void exibeInvertido(int n, int* vet);

int main(){
	int n, *vetor,i;
	printf("Ola, bem vindo!\n\n");
	printf("Qual o tamanho do vetor que deseja usar?\n");
	scanf("%d",&n);
	vetor=(int*) malloc(n*sizeof(int));
	if(vetor==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	for (int i = 0; i < n; i++) {
		printf("Digite o %d numero do vetor: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	printf("\n\n");
	exibeInvertido(n,vetor);
	free(vetor);
	return 0;
}

void exibeInvertido(int n, int* vet){
	int i=n-1;
	for(;i>=0;i--){
		printf("Vetor de indice %d(ou %dº elemento do vetor) = %d\n",i,i+1,vet[i]);
	}
}
