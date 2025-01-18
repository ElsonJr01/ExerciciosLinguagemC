//Dada duas matrizes A e B, ambas 3x3.
// faça m program para calcular a soma das duas matrizes e salva-las em uma matriz C. imprima as tres matrizes 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define tam 3
int main(){

	int l, c, matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam]; 

srand(time(NULL));

for(l=0; l<tam; l++){
	for(c=0; c<tam; c++){
		matrizA[l][c] = rand() % 10;
	}
}
for(l=0; l<tam; l++){
	for(c=0; c<tam; c++){
		matrizB[l][c] = rand() % 20;
	}
}
for(l=0; l<tam; l++){
	for(c=0; c<tam; c++){
		matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
	}
}
printf("Matriz A: \n");
for(l=0; l<tam; l++){
	for(c=0; c<tam; c++){
		printf("%2d ", matrizA[l][c]);
	}
	printf("\n");
}
printf("\nMatriz B: \n");
for(l=0; l<tam; l++){
	for(c=0; c<tam; c++){
		printf("%2d ", matrizB[l][c]);
	}
	printf("\n");
}
printf("\nMatriz C: \n");
for(l=0; l<tam; l++){
	for(c=0; c<tam; c++){
		printf("%2d ", matrizC[l][c]);
	}
	printf("\n");
}



	return 0;
} 
 
 
