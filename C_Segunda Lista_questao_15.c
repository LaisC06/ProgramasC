#include<stdio.h>
#include<stdlib.h>

int produtoEscalarVetor(int n,int* vetorA, int *vetorB);

int main(){
	int n,*vetorB,*vetorA,i;
	printf("Ola, bem vindo!\n\n");
	printf("Qual o tamanho dos vetores que deseja usar?\n");
	scanf("%d",&n);
	vetorA=(int*) malloc(n*sizeof(int));
	if(vetorA==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	vetorB=(int*) malloc(n*sizeof(int));
	if(vetorB==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	for (int i = 0; i < n; i++) {
		printf("Digite o %d numero do vetorA: ", i + 1);
		scanf("%d", &vetorA[i]);
	}
	printf("Agora ao vetor B: \n");
	for (int i = 0; i < n; i++) {
		printf("Digite o %d numero do vetorB: ", i + 1);
		scanf("%d", &vetorB[i]);
	}
	printf("O produto escalar é: %d\n",produtoEscalarVetor(n,vetorA,vetorB));
	return 0;
}

int produtoEscalarVetor(int n,int* vetorA, int *vetorB){
	int prod=0,i;
	for (i = 0; i < n; i++) {
		prod+=vetorA[i]*vetorB[i];
	}
	return prod;
}
