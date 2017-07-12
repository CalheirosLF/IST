#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float a, b, c, delta, x1, x2;
    
    printf("\ninsira o valor de a.\n");
    scanf("%g", &a);
    printf("\ninsira o valor de b.\n");
    scanf("%g", &b);
    printf("\ninsira o valor de c.\n");
    scanf("%g", &c);
    
    delta = (b * b) + (-4 * a * c);
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
 
    if ((delta>=0 ) && (a!=0))
    {
    printf("\n Valor de x1 e: %g", x1);
    
    printf("\n Valor de x2 e: %g\n", x2);
    
    }else{
          if (a==0)
          {
          printf("\n O valor de A nao pode ser igual a zero! Por favor, reinicie o programa.");
          }else{
                printf("\n O valor de delta nao pode ser negativo.\n");
              
                printf("\n Por favor, reinicie o programa!\n");
                }
                }
                
  
  system("PAUSE");	
  return 0;
}
