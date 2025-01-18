//Crie uma função chamada troca que receba dois ponteiros de inteiros como parâmetros.
//Na função main, declare duas variáveis inteiras e passe seus endereços para a função troca.
//Imprima os valores antes e depois da troca.

#include<stdio.h>

void troca (int *potA, int *potB);

int main(){
	int x = 10;
	int y= 5; 

printf("\nAntes da troca: \nX = %d e y = %d", x , y);	

troca(&x, &y);

printf("\nDepois da troca: x = %d e y = %d", x, y);
	return 0;
}

void troca(int *potA, int *potB){
	int aux = *potA;
	*potA = *potB;
	*potB = aux;

}
