//Faça um programa para ordenar um vetor com 100 numeros inteiros, imprima o vetor antes e apos a ordenação. 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 0 1 2 3 4 5 
// 3 5 8 2 7 9

int main(){
	int i, troca, vetor[100], copia, contador;
	srand(time(NULL));
	
	for(i=0; i<100; i++){
	vetor[i] = rand() % 200;
	}
	printf("\nAntes da Ordenacao: \n");
	for(i=0; i<100; i++){
		printf("%3d ", vetor[i]);
	}
	printf("\n");
do{     troca = 0; 
		contador++;
		for(i=0; i<99; i++){
			if(vetor[i] > vetor[i+1]){
				copia = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = copia;
				troca = 1;
			}
		}
}while(troca);
     printf("\nApos a ordenacao: Trocas = %d \n", contador);
	for(i=0; i<100; i++){
		printf("%3d ", vetor[i]);
	}	
	return 0; 
}
