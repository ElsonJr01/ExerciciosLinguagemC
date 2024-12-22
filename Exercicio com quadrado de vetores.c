//faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuario. Em seguida calcule e salve 
//num segundo vetor o quadrado de cada elemnto do primeiro vetor. Por fim, imprima os dois valores. 

#include <stdio.h>
#include <math.h>

int main (){
	
	int vet[10];
	int vet1[10];
	int i;
	int j;

	for(i=0; i<10; i++){
		printf("\nDigite o vetor elemento %d: ", i);
		scanf("%d", &vet[i]);
	} 
	printf("\n");
	for(i=0; i<10; i++){
		vet1[i] = vet[i] * vet[i]; 
	}
		printf("\n");
	for(i=0; i<10; i++){
		printf("\nO quadrado do vetor %d e: ", i);
		printf("%d ", vet1[i]); 
	}		printf("\n");
	for(i=0; i<10; i++){
		printf("\nO vetor %d tem valor original: ", i);
		printf("%d", vet[i]);
	}
	return 0;
}
