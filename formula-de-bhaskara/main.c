#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int code(int code) {
	system("PAUSE");
	return code;
}

int error() {
	return code(-1);
}

int success() {
	return code(0);
}

int main(int argc, char *argv[])
{
    float a;
	float b;
	float c;
	float delta;
	float x1; 
	float x2;
    
	//ax^2 + bx + c = 0	
    printf("\nInsira o valor de a: ");
    scanf("%g", &a);
	int tries = 1;
	while (a == 0) {
		if(tries == 3) {
			printf("\n O valor de A nao pode ser igual a zero! Programa encerrado.");
			return error();
		}
		printf("\n O valor de A nao pode ser igual a zero! Por favor digite o valor de a novamente: ");	
		scanf("%g", &a);
		tries++;
	}
    printf("\nInsira o valor de b: ");
    scanf("%g", &b);
    printf("\nInsira o valor de c: ");
    scanf("%g", &c);
    
    delta = pow(b,2) -4 * a *c;
	if (delta < 0) {
		printf("\n O valor de delta nao pode ser negativo! Programa encerrado.");  
		return error();
    } 
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);

	printf("\n Valor de x1 e: %g", x1);    
	printf("\n Valor de x2 e: %g\n", x2);
	
	return success();
}
