//Crie uma fun��o chamada soma que receba dois par�metros do tipo int.
//Na fun��o main, pe�a ao usu�rio para inserir dois n�meros inteiros.
//Chame a fun��o soma e imprima o resultado.

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
