#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char matriz[3][3];
	int l, c, i, jogo, j;
	int linha, coluna, ganhou, contador, opcao;
	
	do{
		jogo = 1;
		contador = 0;
		j = 0, i = 0;
		ganhou = 0;
		printf("\tJogo da velha: \n\n");
		for(l=0; l<3; l++){
			for(c=0; c<3; c++){
				matriz[l][c] = ' ';
			}
		}
			do{
			printf("\t 0   1   2\n\n");
			for(l=0; l<3; l++){
				printf("\t");
				for(c=0; c<3; c++){
					printf(" %c ", matriz[l][c]);
					if(c<2){
					printf("|");
							}
					if(c==2){
						printf("  %d", l);
						}
					}
						if(l<2){
						printf("\n\t-----------\n");
					}
				}
				
				do{
					printf("\nJOGADOR %d, Digite o par de cordenadas, ex: (a, b):\n", j+1);
					scanf("%d", &linha);
					scanf("%d", &coluna);
					
				}while(linha<0 || linha>2 || coluna<0 || coluna>2 || matriz[linha][coluna] != ' ');
				
				if(jogo == 1){
					matriz[linha][coluna] = '0';
					jogo++;
				}
				else {
					matriz[linha][coluna] = 'X';
					jogo = 1;
				}
				contador++;
				if(matriz[0][0] == '0' && matriz[0][1] == '0' && matriz[0][2] == '0' ||
				   matriz[1][0] == '0' && matriz[1][1] == '0' && matriz[1][2] == '0' ||
				   matriz[2][0] == '0' && matriz[2][1] == '0' && matriz[2][2] == '0'){
				   	printf("\nO Jogador 1 venceu por linha, Parabens.\a");
				   	ganhou = 1;
				   }
				if(matriz[0][0] == 'X' && matriz[0][1] == 'X' && matriz[0][2] == 'X' ||
				   matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X' ||
				   matriz[2][0] == 'X' && matriz[2][1] == 'X' && matriz[2][2] == 'X'){
				   	printf("\nO Jogador 2 venceu por linha, Parabens.\a");
				    ganhou = 1;
				   }
				if(matriz[0][0] == '0' && matriz[1][0] == '0' && matriz[2][0] == '0' ||
				   matriz[0][1] == '0' && matriz[1][1] == '0' && matriz[2][1] == '0' ||
				   matriz[0][2] == '0' && matriz[1][2] == '0' && matriz[2][2] == '0'){
				   	printf("\nO Jogador 1 venceu por coluna, Parabens.\a");
				   ganhou = 1;
				   } 
				if(matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X' ||
				   matriz[0][1] == 'X' && matriz[1][1] == 'X' && matriz[2][1] == 'X' ||
				   matriz[0][2] == 'X' && matriz[1][2] == 'X' && matriz[2][2] == 'X'){
				   	printf("\nO Jogador 2 venceu por coluna, Parabens.\a");
				   ganhou = 1;
				   }
				if(matriz[0][0] == '0' && matriz[1][1] == '0' && matriz[2][2] == '0'){
					printf("\nO jogador 1 ganhou na Diagonal Principal.\a");
				   ganhou = 1;
				}
				if(matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X'){
					printf("\nO jogador 2 ganhou na Diagonal Principal.\a");
				  ganhou = 1;
				}
				if(matriz[0][2] == '0' && matriz[1][1] == '0' && matriz[2][0] == '0'){
					printf("\nO jogador 1 ganhou na Diagonal Secundaria.\a");
				 ganhou = 1;
				}
				if(matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X'){
					printf("\nO jogador 2 ganhou na Diagonal Secundaria.\a");
				 ganhou = 1;
				}
		}while(ganhou == 0 && contador < 9);
		if(ganhou == 0){
			printf("\nNinguem ganhou. Deu empate.\n");
		}
		printf("\nDigite 1 para jogar novamente: ");
		scanf("%d", &opcao);
	}while(opcao == 1);
	return 0;
}
