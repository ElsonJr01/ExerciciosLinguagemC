#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	float vetor[5];
	int i=0;

	srand (time(NULL));
	
	for(i=0; i<=5; i++){
		vetor[i] = 1 + rand() % 60;
	}
	for(i=0; i<=5; i++){
		printf("\nVetor %d: ", i+1);
		printf("%.2f", vetor[i]);
	}
	
	return 0; 
}
