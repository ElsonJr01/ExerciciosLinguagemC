#include <stdio.h>

int ponteiro(int x, int y);

int main(){
 int x, y;	
printf("\nDigite um valor:");
scanf("%d", &x);
 
printf("\nDigite um valor:");
scanf("%d", &y);

	printf("\nValor: %d", ponteiro(x, y));
	
	return 0;
}

int ponteiro(int x, int y){

int *potX = &x;
int *potY = &y;
int soma = *potX + *potY;
		return soma;
}
