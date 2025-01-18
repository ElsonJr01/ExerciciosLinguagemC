//faça um programa que imprima a parte abaixo da diagonal principal de uma matriz 4x4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 12
int main(){
	int mat[tam][tam], l, c;
	
	srand(time(NULL));
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
		mat[l][c] = rand() % 10;	
		}
	} printf("\nMatriz Inteira: \n");
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			printf("%2d ", mat[l][c]);
		}
		printf("\n");
	}
	printf("\nParte de baixo da diagonal principal: \n");
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			if(l > c ){
				printf("%2d ", mat[l][c]);
			}
			if(c >= l){
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
