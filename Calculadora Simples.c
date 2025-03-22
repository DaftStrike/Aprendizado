/* 	Este é um programa cujo objetivo é fazer cálculos automáticos de Bhaskara, dando valor de X1 e X2.
	Autor: Pedro José Vanzella
	Data: 22/02/2025
*/

#include <stdio.h>

int main(void)
{
	int x, y;
	
	//Leitura
	printf("Informe dois numeros:\n");
	scanf("%d %d", &x, &y);

	
	//Impressoes x e y
	printf("\n%d e %d\n", x, y);
	printf("SOMA: %d\n", x + y);
	printf("SUBT: %d\n", x - y);
	printf("QUOC: %d\n", x / y);
	printf("RESTO: %d\n", x % y);
	printf("MULTI: %d\n", x * y);
	printf("DIVISAO: %.2f\n", x / (float) y); //casting
	
	//Impressoes y e x
	printf("\n%d e %d\n", y, x);
	printf("SOMA: %d\n", y + x);
	printf("SUBT: %d\n", y - x);
	printf("QUOC: %d\n", y / x);
	printf("RESTO: %d\n", y % x);
	printf("MULTI: %d\n", y * x);
	printf("DIVISAO: %.2f\n", y / (float )x); //casting

	return 0;
}
