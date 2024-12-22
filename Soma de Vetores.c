//faça um programa que some o conteudo de dois vetores de tamanho 25 e armazene o reaultado em um terceiro vetor. Imprima os 3 vetores na tela 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int vet1[25], vet2[25], vet3[25], i;

	srand(time(NULL));
	for(i=0; i<25; i++){
		vet1[i] = vet1[i] = rand() % 60;
		vet2[i] = vet2[i] = rand() % 60;
	}
	for(i=0; i<25; i++){
		vet3[i] = vet1[i] + vet2[i];
	}
	printf("\nVetor 1: ");
	for(i=0; i<25; i++){
		printf("%2d " , vet1[i]);
	}
	printf("\nVetor 2: ");
	for(i=0; i<25; i++){
		printf("%2d ", vet2[i]);
	}
	printf("\nVetor 3: ");
	for(i=0; i<25; i++){
		printf("%2d ", vet3[i]);
	}	
	return 0;
}
