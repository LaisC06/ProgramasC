#include <stdio.h>
#include <math.h>
void avalia();

int main(){

    avalia();
    return 0;
}

void avalia(){

    /*Avalie cada uma das expressões abaixo.
    9.1. (-(-9) + sqrt((-9)*(-9) - 4*3*6))/(2*3).
    9.2. ((pow(3, 2) == 9) && (acos(0) == 0)) || (4 % 8 == 3).*/

    printf("1 Expressao:\n");
    printf("(-(-9) + sqrt((-9)*(-9) - 4*3*6))/(2*3)\n");
    printf("(9 + sqrt(81 - 72))/6\n");
    printf("(9 + sqrt(9))/6\n");
    printf("(9 + 3)/6\n");
    printf("12/6\n");
    printf("%.2f\n\n", (-(-9) + sqrt((-9)*(-9) - 4*3*6))/(2*3));

    printf("2 Expressao:\n");
    printf("((pow(3, 2) == 9) && (acos(0) == 0)) || (4 %% 8 == 3)\n");
    printf("((9 == 9) && (0 == 0)) || 0\n");
    printf("(1 && 0) || 0\n");
    printf("0 || 0\n");
    printf("%d\n", ((pow(3, 2) == 9) && (acos(0) == 0)) || (4 % 8 == 3));

}
