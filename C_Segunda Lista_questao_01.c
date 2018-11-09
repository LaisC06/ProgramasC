#include <stdio.h>

int kesimo_digito(int n,int l);

int main() {
	int n,l;
	printf("Ola, bem vindo!\n\n");
	printf("Digite o numero e em seguida o kesimo termo:\n");
	scanf("%d%d",&n,&l);
	printf("O %d digito e: %d\n",l,kesimo_digito(n,l));
	return 0;
}

int kesimo_digito(int n,int l){
	int i=1,r,aux;
	aux=n;
	for(;i<=l;i++){
		if(i==l) r=aux%10;
		aux=(aux-(aux%10))/10;
	}
	return r;
}
