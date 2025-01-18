#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int mat1[4][4];
	int mat2[4][4];
	int i;
	int j;
	
	srand(time(NULL));
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			mat1[i][j] = rand();
		} 
	}
	
	printf("\nGerando numero de matriz aleatorio!\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		    printf("%5d ", mat1[i][j]);
		}	printf("\n");
	}
	printf("\nMultiplicando por dois \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			mat2[i][j] = mat1[i][j]*2;
		} 
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		    printf("%5d ", mat2[i][j]);
		}	printf("\n");
	}
	
	
	return 0;
}
