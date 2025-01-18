//Crie um programa que prencha uma matriz 5x10 com numeros inteiros, em seguida: 
//A) Some cada uma das linhas e armazene o resultado em um vetor:
//b) Some cada uma das colunas armazenando o resultado em um vetor:
//C) imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual e a soma das colunas. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int matriz[5][10], i, j, somaLinha[5] = {0}, linha, somaColuna[10]={0};

	srand(time(NULL));
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			matriz[i][j] = rand() % 2;
		}
	}
		for(i=0; i<5; i++){
			linha = 0;
     		for(j=0; j<10; j++){
			   somaLinha[i] += matriz[i][j];
               somaColuna[j] += matriz[i][j];		
		}
	}
		for(i=0; i<5; i++){
			for(j=0; j<10; j++){
				printf("%2d ", matriz[i][j]);
		}
		printf("\n");
   	}
   	printf("Vetor com soma das Linhas: \n");
		for(i=0; i<5; i++){
			printf("\nSoma da Linhas %d: %d ",i+1, somaLinha[i]);
			}
			printf("\nVetor soma das Colunas:");
		for(j=0; j<10; j++){
		printf("\nSoma das Coluna %d: %d ",j+1 , somaColuna[j]);	
    }
	return 0;
}
