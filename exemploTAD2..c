#include "ponto.h"
main(){
	Ponto *p1,*p2;
	float dist;
	
	//cria dois pontos, p1 e p2
	p1=cria(5,5);
	p2=cria(10,10);
	//calcula a distancia
	dist=distancia(p1,p2);
	//imprime a distancia entre os dois pontos
	printf("\nA distancia entres os dois pontos=%f",dist);
}
