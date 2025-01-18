//Faça uma matriz com numeros aleatorios e imprima a diagonal principal e a diagonal secundaria da mesma. 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define tam 7
int main(){
	
	int l, c, matriz[tam][tam];
	srand(time(NULL));
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			matriz[l][c] = rand() % 10;
		}
	}
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
		printf("%2d ", matriz[l][c]);
		}
		printf("\n");
	}
	
	printf("\nDiagonal principal: \n");
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
		if(l==c){
			printf("%2d ", matriz[l][c]);
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\nDiagonal secundaria: \n");
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			if(l!=c){
				printf("  ");
			} 
			if(l == c){
			printf("%2d ", matriz[l][tam - 1 - l]);	
				}	
		}
		printf("\n");
	}
	
	return 0;
}
