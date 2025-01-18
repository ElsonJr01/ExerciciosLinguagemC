#include <stdio.h>
#include <time.h>

int main(){
	
	int i, opcao, vetor[10];
	
	srand(time(NULL));
	
for(i=0; i<10; i++){
	vetor[i] = rand() % 100;
   }	
   for(i=0; i<10; i++){
      printf("%2d ", vetor[i]);		
	}
do{
	printf("\nDigite a opcao desejada: \n(0)Finalizar o Programa: \n(1)Imprmir o vetor na ordem inicio ao fim: \n(2)Imprimir o vetor na ordem inversa:");
	printf("\n");
	scanf("%d", &opcao);
	
	switch(opcao){
	case 0: printf("\nPrograma Finalizado, Goodbye."); break; 
	
	case 1:
	for(i=0; i<10; i++){
      printf("%2d ", vetor[i]);		
	}
	break;
	case 2: 
	for(i=9; i>=0; i--){
		printf("%d ", vetor[i]);
	}
	default: printf("\nA Sophia e chorona! "); break;
}
}while(opcao != 0);
	
	return 0;
}
