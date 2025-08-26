#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

bool OS = true, Continuar = false;
char SN;
int Escolha, i;

//SISTEMA OPERACIONAL (CASE 1)
void sistoper(){
    if(OS){
        printf("Deseja ativar o Windows XP? (S/N): ");
        scanf(" %c", &SN);
            if(SN == 'S' || SN == 's'){
        		OS = false;
       			printf("Sistema Operacional Ativado.\nReinicie o dispositivo para sua inicializacao.\n\n");
    		}
    		else
        		printf("Operacao cancelada.\n\n");
	}
    else{
    	printf("Deseja desativar o Windows XP? (S/N): ");
        scanf(" %c", &SN);
            if(SN == 'S' || SN == 's'){
        		OS = true;
       			printf("Sistema Operacional Desativado.\n\n");
    		}
    		else
        		printf("Operacao cancelada.\n\n");
	}        
	Continuar = true;
}

//INICIALIZA플O DA M핽UINA (CASE 2)
void bootprot(){
	if(OS){
		printf("\nO terminal esta conectado corretamente a maquina e capacitores de energia? (S/N): ");
		scanf(" %c", &SN);
		if(SN == 'S' || SN == 's'){
			printf("Deseja iniciar o protocolo de ativacao? (S/N): ");
			scanf(" %c", &SN);
			if(SN == 'S' || SN == 's'){
				printf("Iniciando protocolo");
				for(i = 0; i < 3; i++){
				sleep(1);
				printf(".");
				}
				sleep(1);
				printf("\nProtocolo iniciado. Encerrando programa.");
				sleep(2);
				Continuar = false;
			}
			else{
        		printf("Operacao cancelada.\n\n");
        		Continuar = true;
    		}
		}
		else{
        	printf("Operacao cancelada.\n\n");
        	Continuar = true;
    	}
	}
	else{
		printf("Nao eh possivel acessar o Protocolo enquanto o Sistema Operacional estiver ligado.\n\n");
		Continuar = true;	
	}
}

//CONFIGURA플O DE DISPOSITIVO (CASE 3)
void dispconfig(){
	printf("Nao eh possivel alterar as configuracoes no momento, trava por disco ativada.\n\n");
	Continuar = true;
}

//LOGS DE TEXTO (CASE 4)
void logs(){
    if(!OS){
        printf("Logs liberados na Area de Trabalho.\n\n");
        Continuar = true;
    }
    else{
        printf("Sistema Operacional nao inicializado.\n\n");
        Continuar = true;
    }
}

//MENSAGEM SECRETA (CASE 5)
void flor(){
	char SenhaFlor[13];
	printf("Por seguranca, escreva em letras maiusculas a segunda senha, presente proxima ao mar e as melodias: ");
	scanf(" %s", &SenhaFlor);
	if(strcmp(SenhaFlor, "MELHORSALA3C") == 0){
		sleep(1);
		printf("\n"
		"Garanto - ou quase - que, caso esteja lendo isso, algo aconteceu a [CENSURADO]. Nao fique triste!\n" 
		"A descoberta dessa maquina trouxe toda felicidade que [CENSURADO] poderia pedir.\n"
		"Basta ver toda [CENSURADO] que foi posta em sua criacao!\n"
		"Receio que as coisas nao andam muito [CENSURADO] em Penumbra ultimamente...\n"
		"Indicios mostram que ha algum [CENSURADO] racional em meio a cidade.\n"
		"E posso afirmar que este [CENSURADO] nao eh um de nos, mas...\n"
		"Lamento em dizer que minha unica contribuicao sao as primeiras [CENSURADO]. Esta eh a verdade.\n\n");
		getch();
		fflush(stdin);
		Continuar = true;
	}
	else{
		printf("Senha incorreta.\n\n");
		Continuar = true;
	}
}

//ENCERRAMENTO DO SISTEMA (CASE 6)
void sair(){
	printf("Deseja encerrar o programa? (S/N): ");
	scanf(" %c", &SN);
	if(SN == 'S' || SN == 's')
		Continuar = false;
	else{
		printf("Operacao cancelada.\n\n");
		Continuar = true;
	}
}

//FUN플O PRINCIPAL
int main(){
	char Senha[12];
	int Tentativas = 6;
	
	//Teste de Senha
	do{
		printf("Insira a senha: ");
		scanf(" %11s", &Senha);
		fflush(stdin);
		if(strcmp(Senha, "190600Bowie") == 0){
			printf("Bem vindo!\n\n");
			break;
		}
		else{
			Tentativas--;
			if(Tentativas != 0)
				printf("Senha incorreta, %d tentativas restantes.\n\n", Tentativas);
		}
	}
	while(Tentativas > 0);
	
	//Inicio Programa
	if(Tentativas != 0){
		do{
			sleep(1);
			printf("Digite o valor de escolha:\n\t1 - Sistema Operacional\n\t2 - Protocolo\n\t3 - Configurar Dispositivo\n\t4 - Logs\n\t5 - ???\n\t6 - Fechar e Reiniciar\n-> ");
			scanf("%d", &Escolha);
			switch(Escolha){
				case 1:
					sistoper();
					break;
					 
				case 2:
					bootprot();
					break;
					
				case 3:
					dispconfig();
					break;
					
				case 4:
					logs();
					break;
					
				case 5:
					flor();
					break;
					
				case 6:
					sair();
			}
		}
		while(Continuar);
	}
	else{
		printf("Limite de tentativas.\nTente novamente em 24 horas.\n");
		printf("\nAperte qualquer tecla para desligar o dispositivo.");
		getch();
	}
	return 0;
}
