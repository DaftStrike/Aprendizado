/*Programa de teste
	Autor: Pedro Vnzella
	Data: 22/02/2025
*/

#include <stdio.h>
#include <string.h>
#define TAM 50

int main(void)
{
	//Variaveis
	char nome[TAM];
	char genero[TAM];
	int idade;
	int salario;
	
	//Atribuicoes
	printf("Digite o seu nome:\n");
	fgets(nome, TAM, stdin);
	nome[strlen(nome) - 1] = '\0';
	
	printf("Digite o seu genero:\n");
	fgets(genero, TAM, stdin);
	genero[strlen(genero) - 1] = '\0';
	
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	
	printf("Quanto planeja receber? (Pergunta eliminatoria)\n");
	scanf("%d", &salario);
	
	printf("\n");
	
	//Impressao
	printf("Nome: %s\n", nome);
	printf("Genero: %s\n", genero);
	printf("Idade: %d\n", idade);
	printf("Salario Desejado: R$%d\n\n", salario);
	printf("Vaga criada com sucesso!");
	return 0;
}
