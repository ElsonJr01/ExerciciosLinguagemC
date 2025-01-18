#include <stdio.h>

int main(){
	
	int vet[8];
	int i=0;
	
	for(i=0; i<8; i++){
		printf("\nDigite 8 vetores: ");
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<8; i++){
		printf("\nO numero do vetor %d e:", i);
		printf("%d", vet[i]);
	}
	printf("\n");
	for(i=0; i<8; i++){
		vet[i] = vet[i]*3;
	}
		printf("\n");
	for(i=0; i<8; i++){
		printf("\n O vetor %d alterado e: ", i);
		printf("%d", vet[i]);
	}
	
	
	return 0;
}
