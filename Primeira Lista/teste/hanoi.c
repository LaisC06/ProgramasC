#include<stdio.h>
int hanoi(int n, int O,  int D, int T);
void mover(int, int);

int main() {
    // numero de discos
    int n = 0;
    printf("Digite o numero de discos:\n\t");
    scanf("%d", &n);

    // executa o hanoi!
    hanoi(n, 1, 3, 2);
    return 0;
}

// Método que realiza (imprime) o movimento
// de um disco entre dois pinos
void mover(int O, int D){
    printf("%d -> %d\n", O, D);
}
// Método que implementa a recursão
// O = pino origem
// D = pino destino
// T = pino de trabalho
int hanoi(int n, int O,  int D, int T){
    if (n > 0){
        hanoi(n - 1, O, T, D);
        mover(O, D);
        hanoi(n - 1, T, D, O);
    }
}
