#include<stdio.h>

int powRecursivo(int base, int expoente);
int powIterativo(int base, int expoente);

int main(){
	int i,j,base,expoente;
	printf("Ola, bem vindo!\n\n");
	printf("Digite a base e o expoente para verificar a potencia: \n");
	scanf("%d%d",&base,&expoente);
	printf("Pow Recursivo: %d\n",powRecursivo(base,expoente));
	printf("Pow Iterativo: %d\n",powIterativo(base,expoente));
	return 0;
}

int powRecursivo(int base, int expoente){
	if(expoente==0) return 1;
	else if(expoente==1) return base;
	else return base*powRecursivo(base,expoente-1);
}
int powIterativo(int base, int expoente){
	int i=1,r=base;
	if(expoente==0) return 1;
	else if(expoente==1) return base;
	for(;i<expoente;i++){
		r*=base;
	}
	return r;
}
