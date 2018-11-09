#include <stdio.h>
/*25. Mostre a configuração da tela após a execução do programa
#include <stdio.h> main()
{
int i, a, q, Termo;
for (i = 5; i > 0; i = i - 1)
{
a = i;
q = 3;
Termo = a;
while (Termo <= 9 * a)
{
printf("%d \n", Termo); Termo = Termo * q;
}
}
} */
int main(){
    int i, a, q, Termo;
    for (i = 5; i > 0; i = i - 1){
        a = i;
        q = 3;
        Termo = a;
        while (Termo <= 9 * a){
            printf("%d \n", Termo); Termo = Termo * q;
        }
    }
    return 0;
}
