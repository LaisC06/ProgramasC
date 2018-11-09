#include <stdio.h>
int diferentes(int, int, int);
void subconjuntos();

int main()
{
	subconjuntos();
	return 0;
}

void subconjuntos(){

	/*
	39. Escreva um programa que escreva todos os subconjuntos com três elementos do
	conjunto {1, 2, 3, ..., n}, n dado.
	*/
	printf("Este programa que escreva todos os subconjuntos com tres elementos de um conjunto {1, 2, 3, ..., n}\n\n" );

	int n;
	printf("Digite um numero:\t");
	scanf("%d", &n);

    printf("{ " );
    for (int i = 1; i <= n; i++) {
        printf("%d, ", i );
    }
	printf("}\n" );

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = j; k <= n; k++) {
				if(diferentes(i, j, k) == 1) printf("{%d, %d, %d}\n", i, j, k);
			}
		}
	}

}
int diferentes(int a, int b, int c){

	if(a == b) return 0;
	if(a == c) return 0;
	if(b == c) return 0;

	return 1;

}
