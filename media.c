//Exemplo de função que recebe um valor inteiro como parâmetro 
//e retorna um valor tipo float.
#include <stdio.h>
float media(int );
void main(void){
	int nElementos,i;
	float mediaConjunto;
	printf("\nEntre com o numero de elementos do conjunto %d:",i);
     scanf("%d", &nElementos); 
     mediaConjunto=media(nElementos);
     printf("\n A media do Conjunto=%0.2f",mediaConjunto); 
}
float media(int n)
{
      float a,media=0.0;
      int i;
      for(i=1;i<=n;i++)
        {
         printf("Digite o elemento%d:",i);
         /* captura valor entrado via teclado */
         scanf("%f",&a);
         media= media +a;
         }  
      media=media/n;
      return media;
}  //veja media.c

