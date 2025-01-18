//faça um programa que descubra se uma matriz é um quadrado magico.

#include <stdio.h>
#include <stdlib.h>
#define tam 4
int main(){
	
	int l, c, mat[tam][tam] =  {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
	int soma, total, i=0, quadrado = 1;
	
	for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			printf("%2d ", mat[l][c]);
		}
		printf("\n");
	}
    	soma = 0;
		for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
			if(l == c){
			soma += mat[l][l];
		    }
		 }
	} 	
	total = soma;
		printf("\nSoma da Diagonal principal e: %2d", soma);
		soma = 0;
		for(l=0; l<tam; l++){
		for(c=0; c<tam; c++){
		if(l == c){
			soma += mat[l][tam - 1 - l];
		    }	
		 }
	}   printf("\nDiagonal secundaria e: %d", soma);
		    if(total != soma){
		    	printf("\nDiagonal secundaria diferente. ");
		    	quadrado = 0;
			}
	
	
	for(l=0; l<tam; l++){
	soma = 0;
		for(c=0; c<tam; c++){
			soma += mat[l][c];
			}
				printf("\nLinha %d e: %d",l+1, soma);
		}
	if(total != soma){
		    	printf("\nLinha %d diferente. ", l);
		    	quadrado = 0;
			}
			
    for(c=0; c<tam; c++){
	soma = 0;
		for(l=0; l<tam; l++){
			soma += mat[l][c];
			}
			printf("\nColuna %d e: %d",c+1, soma);
		}
	if(total != soma){
		    	printf("\ncoluna %d diferente. ", c);
		    	quadrado = 0;
			}
		if(quadrado == 0){
			printf("\nNAO E UM QUADRADO MAGICO.");
		}
		else {
			printf("\nE um quadrado. ");
		}
	
		
					
	return 0;
}
