//3.	Escreva uma fun��o para calcular a soma de dois valores inteiros. Essa fun��o  
// recebe como par�metros os dois valores a serem somados, e retorna a soma, que deve ser impressa na fun��o main.
// Construa um arquivo .c, com include, prot�tipo da fun��o, fun��o main, e a declara��o da fun��o (soma2.c)

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
