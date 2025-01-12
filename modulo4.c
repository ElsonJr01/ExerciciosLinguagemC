#include <stdio.h>
#include<stdlib.h>
float somatoria (int n);
float pi (int n);
/* Fun��o principal */
void main (void)
{
int n;
float t;
/* mostra mensagem para o usu�rio */
printf("Digite o numero do termo desejado: ");
/* captura valor entrado via teclado */
scanf("%d",&n);
if (n<1)
{printf("Erro: numero de termos menor do que 1");
exit(0);};
/* chama a fun��o e exibe resultado */
printf("Valor de pi com %d termos: %f\n",n, pi(n));
printf("Valor do somatorio  com %d termos: %f\n",n, somatoria(n));
}

/* Programa para c�lculo de PI pela f�rmula de Leibnitz */
#include <stdio.h>
/* Fun��o auxiliar */
float pi (int n)
{ float s = 0.0; /* somatorio */
int num = -1; /* numerador do somatorio */
int i; /* contador de termos */
for (i=0; i<n; i++)
{
num = (-1)*num;
s = s + num/(float)(2*i+1);
}
return 4*s;
}
/* Fun��o auxiliar */
float somatoria (int n)
{ float s = 0.0; /* somatorio */

int i; /* contador de termos */
for (i=0; i<=n; i++)
{

s = s + 5*i*i+ 2*i +8;
}
return s;
}
