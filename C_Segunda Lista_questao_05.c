#include<stdio.h>

int fibonacci(int n);

int main(){
	int n;
	printf("Ola, bem vindo!\n\n");
	printf("Por favor entre com um numero n, para verificar o n-esimo numero da sequência fibonacci: \n");
	scanf("%d",&n);
	printf("N-esimo numero: %d\n",fibonacci(n));
	return 0;
}

int fibonacci(int n){
	if(n==1) return 1;
	else if(n==2) return 1;
	else return fibonacci(n-1)+fibonacci(n-2);
}
