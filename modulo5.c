/* troca por valor e por referencia*/
#include <stdio.h>
void trocaCerta(float *valor1, float *valor2);
void trocaErrada(float valor1, float valor2);

void main(void) 
{
	float v1, v2;
	int tp;
	printf("Entre com 2 valores a serem trocados.\nPrimeiro valor: ");
	scanf("%f", &v1);
	printf("Segundo valor: ");
	scanf("%f", &v2);
	printf("Entre com o tipo de troca: 1 troca correta, 2 para troca errada.\n");
	scanf("%d", &tp);
	
	/* Na ativação, a passagem por referência é indicada através do caractere & */
	if (tp==1)
      {
         trocaCerta(&v1, &v2);
	
		printf("Numeros trocados: %0.2f, %0.2f\n", v1, v2);
    }
	else
	{
        trocaErrada(v1,v2);
		printf("Numeros não trocados: %0.2f, %0.2f\n", v1, v2);
    }
		
	}
	
void trocaCerta(float *valor1, float *valor2) 
{
	float aux;	
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
	printf("Numeros trocados dentro de trocaCerta: %f, %f\n", *valor1, *valor2);
}
void trocaErrada(float valor1, float valor2) 
{
	float aux;	
	aux = valor1;
	valor1 = valor2;
	valor2 = aux;
	printf("Numeros trocados dentro de trocaErrada: %f, %f\n", valor1, valor2);
}


