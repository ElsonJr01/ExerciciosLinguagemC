#include <stdio.h>
#include<stdlib.h>
#include"vetor.h"

float media(float* v, int N);
 
void main(void){
	int n;  // numero de elementos do vetor lido
	float *v,mediaV;
	
	printf("\n Entre com o numero de elementos do vetor :");
	scanf("%d",&n);
	
	v=leiaVetorF(n);	
	printf("\n Imprimir o vetor");
	escreveVetorF(v,n);
	mediaV=media(v,n);
	printf("\nMedia=%0.2f",mediaV);
		
}
