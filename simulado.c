/*Você poderá usar as funções dos arquivos variavel.h e vetor.h
Escreva uma função que receba como parâmetros as medidas do comprimento e largura de uma sala. Essa função retorna 
a área da sala. Teste essa função na main.
Receba na main, um vetor tipo inteiro, e um valor também tipo inteiro. 
Escreva uma função que receba como parâmetros o vetor
 (número de elementos e ponteiro para a primeira posição) e o valor inteiro.
  Essa função retorna um vetor, em que para cada posição do vetor original, coloca o resto da divisão do 
  elemento da posição pelo valor inteiro. Imprima esse vetor na main.
Escreva uma função que receba dois vetores, de tamanhos diferentes, como parâmetros 
(o número de elementos dos vetores, e os ponteiros para a primeira posição dos vetores). 
Essa função imprime todos os elementos comuns aos dois vetores. Teste essa função na main.

Na função main, receba a quantidade N de alunos, e armazene as notas em um vetor. Escreva uma função, 
chamada calcula, que receba como parâmetros a quantidade dos alunos e um ponteiro para a primeira posição do vetor.
 A função calcula retorna para a main a quantidade de alunos com notas acima de 7. Imprima esse valor na main.
  Se nenhum aluno tirou nota acima de 7, imprima na função calcula “Nenhum aluno tirou nota acima de 7” e encerre o
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

