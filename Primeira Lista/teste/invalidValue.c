#include <stdio.h>
#include <stdlib.h> // para a funcao strtof()
#include <math.h> // para a HUG_VALF
#include <errno.h> // para a constante ERANGE

float getNFloat(char txt[100])
{
   char n[100];
   float fn = 0.0;

   printf("%s: ", txt);

   scanf("%s", n);
   fn = strtof(n, NULL);

   switch((int)fn) // Casting para inteiro para poder usar o switch
   {
      case ((int)HUGE_VALF): // Casting para inteiro, pois o valor e float
      {
         printf("Fora da faixa de valores validos!\n");
         return (getNFloat(txt));
      }

      case ERANGE:
      {
         printf("Fora da faixa de valores validos!\n");
         return (getNFloat(txt));
      }

      case 0:
      {
         printf("\n\tNUMERO INVALIDO!\n\n");
         return (getNFloat(txt));
      }

      default:
      {
         return (fn);
      }
   }

   return (0.0);
}

int main()
{
   float n = getNFloat("Teste");

   printf("Valor eh: %.2f\n", n);

   return (0);
}
