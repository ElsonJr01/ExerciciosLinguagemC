//Crie uma fun��o chamada troca que receba dois ponteiros de inteiros como par�metros.
//Na fun��o main, declare duas vari�veis inteiras e passe seus endere�os para a fun��o troca.
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
