/*
	Algoritmo capaz de verificar o status de um numero.
	Autor: Pedro Vnzella
	Data: 21/03/2025
*/

#include <stdio.h>

int main(void)
{
	int Num;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &Num);
	if(Num % 2 == 0)
		printf("O numero eh par.");
	else
		printf("O numero eh impar.");
	return 0;
}
