//Crie uma função chamada soma que receba dois parâmetros do tipo int.
//Na função main, peça ao usuário para inserir dois números inteiros.
//Chame a função soma e imprima o resultado.

#include <stdio.h>

int soma(int a, int b);

int main(){
	
	int a , b; 
	
	printf("\nDigite um valor: ");
	scanf("%d", &a);
	
	printf("\nDigite outro valor: ");
	scanf("%d", &b);
	
	int resultado = soma(a,b);
	printf("\nResultado: %d ", resultado); 
	
	return 0;
}

int soma (int a, int b){
	return a+b; 
}
