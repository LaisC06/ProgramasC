#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double desvioPadrao(int n,double* vetor);

int main(){
	int n,i;
	double *vetor;
	printf("Ola, bem vindo!\n\n");
	printf("Qual o tamanho do vetor que deseja usar?\n");
	scanf("%d",&n);
	vetor=(double*) malloc(n*sizeof(double));
	if(vetor==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	for (int i = 0; i < n; i++) {
		printf("Digite o %d numero do vetor: ", i + 1);
		scanf("%lf", &vetor[i]);
	}
	printf("O desvio padrão é: %lf\n",desvioPadrao(n,vetor));
	return 0;
}

double desvioPadrao(int n,double* vetor){
	int i;
	double media=0.00,fracao=0.00,r;
	for (i = 0; i < n; i++) {
		media+=vetor[i];
	}
	media/=n;
	for (i = 0; i < n; i++) {
		fracao+=pow((vetor[i]-media),2);
	}
	fracao/=n;
	r=sqrt(fracao);
	return r;
}
