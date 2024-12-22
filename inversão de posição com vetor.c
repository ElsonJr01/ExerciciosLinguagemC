//Escreva um vetor de tamanho 20 e imprima na tela. Em seguida troque o primeiro elemento com o ultimo 
//e o segundo com o penultimo, ate o decimo com o decimo primeiro, imprima o vetor N modificado. 
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[20];
	int i, aux, vet1 = 19, j;
	
	for(i=0; i<20; i++){
		printf("\nDigite o vetor %d: ", i);
		scanf("%d", &vet[i]);
	}
	printf("\nVetor Normal: ");
	for(i=0; i<20; i++){
		printf("%2d ", vet[i]);
	}
         
    printf("\n"); 
    for(i=0; i<10; i++){
    	aux = vet[i];
    	vet[i] = vet[vet1];
    	vet[vet1] = aux; 
		vet1--;
	}
	printf("\nVetor aprimorado: ");
	for(i=0; i<20; i++){
		printf("%2d ", vet[i]);
	}
	return 0;
}
