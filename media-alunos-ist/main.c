#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota1;
    float nota2;
    float media;
    
    printf("\ninsira sua primeira nota aqui:\n");
    scanf("%g",&nota1);
    printf("\ninsira sua nota da segunda prova aqui\n");
    scanf("%g",&nota2);
    media = (nota1 + nota2) / 2;
    printf("\nsua media e: %g\n", media);
    
    if(media>=6){
           printf("\nparabens!! voce passou!!\n");
    } else if(media<4){
           printf("\nvoce foi reprovado :(\n");
    } else {
           printf("\nvoce nao foi aprovado, mas tem o direto de fazer uma prova final.\n");       
    
  system("PAUSE");	
  return 0;
}
