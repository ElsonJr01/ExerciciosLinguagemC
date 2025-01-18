//3.	Escreva uma função para calcular a soma de dois valores inteiros. Essa função  
// recebe como parâmetros os dois valores a serem somados, e retorna a soma, que deve ser impressa na função main.
// Construa um arquivo .c, com include, protótipo da função, função main, e a declaração da função (soma2.c)

#include <stdio.h>

int soma(int num1, int num2);

int main(){
	int num1, num2, resultado;
	printf("\nDigite um valor: ");
	scanf("%d", &num1);
	printf("\nDigite outro valor: ");
	scanf("%d", &num2);
	  
	  resultado = soma(num1, num2);
          printf("\nResultado: %d", resultado);
          
          return 0;
}

int soma(int num1, int num2){
    	return num1+num2;
}
