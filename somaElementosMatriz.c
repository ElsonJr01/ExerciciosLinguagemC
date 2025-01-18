//Faça um programa que imprima e calcule a soma de todos os elementos de uma matriz 5x7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, j, matriz[5][7], soma =0;

	srand(time(NULL));
	for(i=0; i<5; i++){
		for(j=0; j<7; j++){
			matriz[i][j] = rand() % 101;
    }
}
printf("\nMatriz antes da soma dos valores.\n");
	for(i=0; i<5; i++){
			for(j=0; j<7; j++){
					soma += matriz[i][j];
			printf("%2d ", matriz[i][j]);
				} 
				printf("\n");
       	}
			printf("Soma dos valores da matriz: %d", soma);
	
	return 0;
}
