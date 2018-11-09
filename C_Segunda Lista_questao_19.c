#include<stdio.h>

int ganhadorLoteria(int *vetor,int n);

int main(){
	int vetor[5],i=0;
	printf("Digite os valores: \n");
	for(;i<5;i++){
		scanf("%d",&vetor[i]);
	}
	printf("O numero do bilhete do ganhador da loteria federal é: %d\n",ganhadorLoteria(vetor,5));
	return 0;
}

int ganhadorLoteria(int *vetor,int n){
	int i=0,ganhador=0;
	for(;i<n;i++){
		ganhador+=vetor[i]%10;
		if(i<n-1) ganhador*=10;
	}
	return ganhador;
}
