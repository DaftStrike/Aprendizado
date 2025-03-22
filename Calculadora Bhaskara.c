/*	Calculadora de Bhaskara
	Autor: Pedro Vazenlla
	Data: 01/03/2025
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, delta, x1, x2;
	
	printf("Digite o valor de A:\n");
	scanf("%f", &a);
	
	printf("Digite o valor de B:\n");
	scanf("%f", &b);
	
	printf("Digite o valor de C:\n");
	scanf("%f", &c);
	
	delta = pow(b, 2) - 4*a*c;
	
	x1 = (-b + sqrt(delta))/2*a;
	x2 = (-b - sqrt(delta))/2*a;
	
	printf("\nDelta: %.2f\n", delta);
	printf("X1: %.2f\n", x1);
	printf("X2: %.2f\n", x2);
	return 0;
}
