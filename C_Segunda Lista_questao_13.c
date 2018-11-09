#include<stdio.h>
#include<stdlib.h>

void decompoeVetor(int n,int* vetor, int pares,int impares);

int main(){
	int n, *vetor,i,par=0,impar=0;
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
		if(vetor[i]%2==0) par++;
		else impar++;
	}
	decompoeVetor(n,vetor,par,impar);
	return 0;
}

void decompoeVetor(int n,int* vetor, int pares,int impares){
	int *vetorPar,*vetorImpar,i,j=0,k=0;
	vetorPar=(int*) malloc(pares*sizeof(int));
	if(vetorPar==NULL){
		printf("Memoria insuficiente.\n");
		//return 1;
	}
	vetorImpar=(int*) malloc(impares*sizeof(int));
	if(vetorImpar==NULL){
		printf("Memoria insuficiente.\n");
		//return 1;
	}
	for (i = 0; i < n; i++) {
		if(vetor[i]%2==0){
			vetorPar[j]=vetor[i];
			j++;
		}else{
			vetorImpar[k]=vetor[i];
			k++;
		}
	}
	printf("Vetor par p={");
	for (i = 0; i < pares; i++) {
		printf("%d",vetorPar[i]);
		if(i<pares-1) printf(",");
	}
	printf("}\nVetor impar i={");
	for (i = 0; i < impares; i++) {
		printf("%d",vetorImpar[i]);
		if(i<impares-1) printf(",");
	}
	printf("}.\n");
}
