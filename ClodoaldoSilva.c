#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int ramdom_dificuldade (int a, int b);


void main(){
	char A, B, C, nivel_dificuldade;
	int i, somapontos, jogador, resposta;
	
	srand(time(NULL));
	printf("Bem vindo ao jogo da tabuada!!!\n");
	
	printf("Escolha o nivel de dificuldade A(Facil), B(Medio) ou C(Dificil): ");
	scanf("%c", &nivel_dificuldade);
	
do{	

	switch (nivel_dificuldade){
		case 'A':
			ramdom_dificuldade(2, 9);
			break;
			
		case 'B':
			ramdom_dificuldade(11, 99);
			break;
			
		case 'C':
			ramdom_dificuldade(101, 999);
			break;
	} 
	printf("Digite 1 para jogar novamente ou 2 para sair: ");
	scanf("%d", &resposta);
} while (resposta !=2);
}
	



int ramdom_dificuldade (int a, int b){
	int i, resultado, jogador, total, somapontos;
	somapontos = 0;
	for (i = 0; i< 3; i++){
		int num1 = rand() % (9 - 2) + 2;
		int num2 = rand() % (b - a) + a;
		
		printf("%d X %d = ", num1, num2);
		scanf("%d", &resultado);

		if (resultado == num1 * num2){
			jogador = 10;
			printf("Parabens vc marcou %d pontos!!\n", jogador);				
		}else{
			printf("Resposta incorreta. Tente novamente: ");
			scanf("%d", &resultado);
			if(resultado == num1 * num2){
				jogador = 7;
				printf("OK vc marcou %d pontos!!\n", jogador);	
			}else{
				jogador = 0;
			}	
		}
	somapontos = somapontos + jogador;
	}	
printf("Seu score total foi de %d pontos de um total de 100 pontos!!!\n", somapontos);	

}

