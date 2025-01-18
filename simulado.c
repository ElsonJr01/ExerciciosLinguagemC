/*Voc� poder� usar as fun��es dos arquivos variavel.h e vetor.h
Escreva uma fun��o que receba como par�metros as medidas do comprimento e largura de uma sala. Essa fun��o retorna 
a �rea da sala. Teste essa fun��o na main.
Receba na main, um vetor tipo inteiro, e um valor tamb�m tipo inteiro. 
Escreva uma fun��o que receba como par�metros o vetor
 (n�mero de elementos e ponteiro para a primeira posi��o) e o valor inteiro.
  Essa fun��o retorna um vetor, em que para cada posi��o do vetor original, coloca o resto da divis�o do 
  elemento da posi��o pelo valor inteiro. Imprima esse vetor na main.
Escreva uma fun��o que receba dois vetores, de tamanhos diferentes, como par�metros 
(o n�mero de elementos dos vetores, e os ponteiros para a primeira posi��o dos vetores). 
Essa fun��o imprime todos os elementos comuns aos dois vetores. Teste essa fun��o na main.

Na fun��o main, receba a quantidade N de alunos, e armazene as notas em um vetor. Escreva uma fun��o, 
chamada calcula, que receba como par�metros a quantidade dos alunos e um ponteiro para a primeira posi��o do vetor.
 A fun��o calcula retorna para a main a quantidade de alunos com notas acima de 7. Imprima esse valor na main.
  Se nenhum aluno tirou nota acima de 7, imprima na fun��o calcula �Nenhum aluno tirou nota acima de 7� e encerre o
programa.*/

#include <stdio.h>
#include "variavel.h"
#include "vetor.h"
//printf("%d", sizeof(variavel));
//malloc separa um bloco de memoria
//int *p = (int *)malloc(sizeof(int));
float area (float b, float h);
void vetorComum(int vetor1[][6], int n);
int laco(int mat[]);

int main(){
	float b;
	float h;
	int tamanho1;
	int mat[6];
	int vetor1[6][6];
	
	printf("\nDigite o comprimento: ");
	scanf("%f", &b);
	printf("\nDigite a largura: ");
	scanf("%f", &h);
	
	
	printf("\nA area e: %.2f", area(b, h));
	printf("\n");
    system("pause");
	printf("\nDigite a quantidade de linhas");


     vetorComum(vetor1,6);
     laco(mat[6]);
	
	return 0;
}

