//2.Escreva uma função para calcular a soma de dois valores inteiros. 
//Essa função não recebe nenhum parâmetro, porque ler os dois valores inteiros dentro dela, mais retorna a soma, 
//que deve ser impressa na função main. 
//Construa um arquivo .c, com include, protótipo da função, função main, e a declaração da função (soma1.c)

#include <stdio.h>

void soma(void);

int main(){ 
soma(); 	
return 0;
}

void soma(void){
     float num1, num2, resultado;
	     printf("\nDigite o primeiro valor: ");
              scanf("%f", &num1);
                 printf("\nDigite o segundo valor: ");
                    scanf("%f", &num2);  
					resultado = num1 + num2;
					     printf("\nResultado: %.2f", resultado);
}


