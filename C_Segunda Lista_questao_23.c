#include<stdio.h>
#include<stdlib.h>

void numerosIguais(int n1,int n2,int *vetorA,int *vetorB);

int main(){
	int n1,n2, *vetorA,*vetorB,i;
	printf("Ola, bem vindo!\n\n");
	printf("Qual o tamanho do vetorA que deseja usar?\n");
	scanf("%d",&n1);
	vetorA=(int*) malloc(n1*sizeof(int));
	if(vetorA==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	for (i = 0; i < n1; i++) {
		printf("Digite o %d numero do vetor: ", i + 1);
		scanf("%d", &vetorA[i]);
	}
	printf("\n");
	printf("Qual o tamanho do vetorB que deseja usar?\n");
	scanf("%d",&n2);
	vetorB=(int*) malloc(n2*sizeof(int));
	if(vetorB==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	for (i = 0; i < n2; i++) {
		printf("Digite o %d numero do vetor: ", i + 1);
		scanf("%d", &vetorB[i]);
	}
	printf("\n\n");
	numerosIguais(n1,n2,vetorA,vetorB);
	return 0;
}

void numerosIguais(int n1,int n2,int *vetorA,int *vetorB){
	int i,j,tamanho,*vetorC,indice=0;
	if(n1>n2) tamanho=n1;
	else tamanho=n2;
	vetorC=(int*) malloc(tamanho*sizeof(int));
	if(vetorC==NULL){
		printf("Memoria insuficiente.\n");
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){ 
			if(vetorA[i]==vetorB[j]){
				vetorC[indice]=vetorA[i];
				indice++;
			}
		}
	}
	if(indice==0) printf("Não há valores iguais em ambas as listas, portanto o conjunto intersecção é igual a i={0}\n");
	else{
		printf("O conjunto da intersecção entre vetor A e vetor B é: \ni={");
		for(i=0;i<indice;i++){
			printf("%d",vetorC[i]);
			if(i<indice-1) printf(", ");
		}
		printf("}\n");
	}
}
