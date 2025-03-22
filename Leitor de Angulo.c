/*	Prrograma que Lê um ângulo em graus e imprime o seno, cosseno e tangente desse ângulo
	Autor: Pedro José
	Data: 01/03/2025
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void)
{
	float ang, rad, cosseno;
	
	printf("Informe um angulo em graus:\n");
	scanf("%f", &ang);
	rad = ang*PI/180;
	cosseno = sqrt(1 - pow(sin(rad), 2));
	
	printf("\nSeno:\n");
	printf("%.2f\n\n", sin(rad));
	
	printf("Cosseno:\n");
	printf("%.2f\n\n", cos(rad));
	
	printf("Tangente:\n");
	printf("%.2f\n\n", tan(rad));
	
	printf("Regalia (cosseno logico):\n");
	printf("%.2f\n\n", cosseno);
	return 0;
}
