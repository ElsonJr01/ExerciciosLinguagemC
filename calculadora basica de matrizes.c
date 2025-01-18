#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int matriz[2][2];
	int mat[2][2];
	int mat1[2][2];
	int i;
	int j;
	int operacao;
	
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		printf("\nDigite o valor que esta na linha %d, coluna %d da primeira matriz: ", i, j);
    		scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("\nDigite o valor que esta na linha %d, coluna %d da segunda matriz: ", i, j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("\nDigite a operacao que deseja: ");
	printf("\n(1)Soma: ");
	printf("\n(2)Subtracao: ");
	printf("\n(3)Divisao: ");
	printf("\n(4)Multiplicacao: ");
	printf("\n(5)Resto da divi: ");
	scanf("%d", &operacao);
	
	if(operacao == 1){
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
			    mat1[i][j] = matriz[i][j] + mat[i][j];
			}
			printf("\n");
		}
	}
	if(operacao == 2){
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
			    mat1[i][j] = matriz[i][j] - mat[i][j];
			}
			printf("\n");
		}
	}
	if(operacao == 3){
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
			    mat1[i][j] = matriz[i][j] / mat[i][j];
			}
			printf("\n");
		}
	}
    if(operacao == 4){
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
			    mat1[i][j] = matriz[i][j] * mat[i][j];
			}
			printf("\n");
		}
	}
	if(operacao == 5){
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
			    mat1[i][j] = matriz[i][j] % mat[i][j];
			}
			printf("\n");
		}
	}

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
		printf("%2d ",mat1[i][j]);
		}
		printf("\n");
	}
	return 0;
}
