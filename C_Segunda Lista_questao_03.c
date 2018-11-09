#include<stdio.h>

int primo(int n){
	int i,div=0;
	for(i=2;i<=n;i++){
		if(n%i==0) div++;
	}
	if(div>=2) return 1;
	else return n;
}
int fat(int n){
	if(n==2) return 2;
	else return primo(n)*fat(n-1);
}
int main(){
	int n;
	printf("Ola, bem vindo!\n\n");
	printf("Ola, entre com um numero para verificar o fatorial primo(primorial).\n");
	scanf("%d",&n);
	printf("%d\n",fat(n));
	return 0;
}
