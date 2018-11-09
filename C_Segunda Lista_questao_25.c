#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int solucionaPolinomio(int *vetor,int grau,int x);

int main(){
	int grau,i,*vetor,x,correto=-1;
	printf("Ola, bem vindo!\n\n");
	printf("Qual o grau do polinomio que deseja usar?\n");
	scanf("%d",&grau);
	vetor=(int*) malloc(grau*sizeof(int));
	if(vetor==NULL){
		printf("Memoria insuficiente.\n");
		return 1;
	}
	printf("Por fazer insira o polinomio de grau %d consoante a seguinte regra z + ... + bx^grau-1 + ax^grau\n",grau);
	while(correto!=1){
		for (int i = 0; i <= grau; i++) {
			printf("Digite o %d numero constante do polinomio: ", i + 1);
			scanf("%d", &vetor[i]);
		}
		for(i=grau;i>=0;i--){
			if(i>0) printf("%d.x^%d + ",vetor[i],i);
			else printf("%d\n",vetor[i]);
		}
		printf("Está correto? Se sim, digite 1\n");
		scanf("%d",&correto);
	}
	printf("Qual o valor de x?\n");
	scanf("%d",&x);
	printf("= %d\n",solucionaPolinomio(vetor,grau,x));
	return 0;
}
int solucionaPolinomio(int *vetor,int grau,int x){
	int i=grau,resultado=0;
	printf("P(%d) = ",x);
	for(;i>=0;i--){
		printf("(%d.(%d^%d))",vetor[i],x,i);
		if(i>0) printf("+");
		resultado+=vetor[i]*pow(x,i);
	}
	return resultado;
}
