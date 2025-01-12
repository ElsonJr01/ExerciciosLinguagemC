#include <stdio.h>
float media(int );

void main(void) {
int nAlunos,nTurmas,i;
float mediaTurma,somaMediaTurma=0,mediaEscola;	
	//calculo da media das notas da escola
	printf("Entre com o numero de turmas da escola:");
     	scanf("%d",&nTurmas);
	for(i=1;i<nTurmas+1;i++){
     //calculo da media das notas de uma turma
    
	 printf("\nEntre com o numero de alunos da turma%d:",i);
        scanf("%d", &nAlunos); 
     mediaTurma=media(nAlunos);
     printf("\n A media da turma=%0.2f",mediaTurma); 
	 somaMediaTurma=somaMediaTurma+mediaTurma;
	}
	mediaEscola=somaMediaTurma/nTurmas;
	printf("\nA media das notas da escola=%0.2f",mediaEscola);
}

float media(int n) {
    
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
} 

