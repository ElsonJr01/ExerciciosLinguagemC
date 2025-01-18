//imprima uma matriz 7x7 e logo em seguida imprima sua transposta.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define tam 7
int main(){
	
	int l, c, matriz[tam][tam], trans[tam][tam];
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
printf("\nMatriz Transposta: \n");
for(c=0; c<tam; c++){
	for(l=0; l<tam; l++){
		trans[c][l] = matriz[l][c];
	}
}	
for(c=0; c<tam; c++){
	for(l=0; l<tam; l++){
		printf("%2d ", trans[c][l]);
	}
	printf("\n");
}	
	
	
	
	
	
	return 0; 
}
