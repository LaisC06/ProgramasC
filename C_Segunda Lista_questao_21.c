#include<stdio.h>
#include<stdlib.h>

void insercaoReordenacao(int *vetor, int tamanho, int n);

int main(){
	int *vetor,n,i,tamanho;
	printf("Ola, bem vindo!\n\n");
	printf("Digite o tamanho do vetor que será usado na reordenação: \n");
	scanf("%d",&tamanho);
	vetor=(int*) malloc(tamanho*sizeof(int));
	if(vetor==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	for(i=0;i<tamanho;i++) {
		printf("Digite o %d numero do vetor: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	printf("Qual o valor que deseja inserir no vetor? \n");
	scanf("%d",&n);
	insercaoReordenacao(vetor,tamanho,n);
	printf("Novo vetor: \n{");
	for(i=0;i<tamanho+1;i++) {
		printf("%d",vetor[i]);
		if(i<tamanho) printf(", ");
	}
	printf("}\n");
	free(vetor);
	return 0;
}

void insercaoReordenacao(int *vetor, int tamanho, int n){
	int i=0,indice=-1;
	for(;i<tamanho;i++) {
		if(n<vetor[i])indice=i;
		if(indice!=-1) break;
	}
	if(indice==-1) indice=tamanho;
	vetor = (int*) realloc(vetor, (tamanho+1)*sizeof(int));
	if(vetor==NULL){
		printf("Memoria insuficiente.\n");
	}
	for(i=tamanho;i>=0;i--){
		if(indice<i) vetor[i]=vetor[i-1];
		if(indice==i){
			vetor[i]=n;
			break;
		}
	}
}
