//Objetivo: Criar uma função que receba dois ponteiros para inteiros e calcule a soma e a multiplicação desses 
//dois inteiros.A função deve alterar os valores passados diretamente nas variáveis originais 
//(modificando os valores pelas variáveis de memória).

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
