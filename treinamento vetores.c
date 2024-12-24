#include <stdio.h>

int main(){
	
	int i =0, s = 0;
	int vet[5];
	float media;
	printf("\nDigite os vetores\n");
	
	for(i=0; i<5; i++){
	printf("\nDigite o valor do vetor %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<5; i++){
			s+=vet[i];
	}
	for(i=0; i<5; i++){
	printf("\nDados inseridos: ");
	printf("%d", vet[i]);	
	}
	media = s/5.0;
	printf("\nMedia dos vetores %.2f: ", media);
	
	system("\npause");
	
//	char nome[] = {'Elson'};

	return 0;
}
