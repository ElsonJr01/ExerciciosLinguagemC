//Objetivo: Criar uma fun��o que receba dois ponteiros para inteiros e calcule a soma e a multiplica��o desses 
//dois inteiros.A fun��o deve alterar os valores passados diretamente nas vari�veis originais 
//(modificando os valores pelas vari�veis de mem�ria).

#include <stdio.h>

int ponteiro(int *potA, int *potB);
int multi(int *potA, int *potB);

int main(){
 int x;
 int y;
 
 printf("\nDigite o valor: ");
 scanf("%d", &x);
 
 printf("\nDigite o valor: ");
 scanf("%d", &y);
 
int resultado = ponteiro(&x, &y);
printf("\nA soma e: %d", resultado);
printf("\nMultiplicacao e %d", multi(&x, &y));
return 0;
}

int ponteiro(int *potA, int *potB){
return *potA + *potB;	
}
int multi(int *potA, int *potB){
	return *potA * *potB;
}
