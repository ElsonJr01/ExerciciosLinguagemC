/* TAD: Ponto (x,y) */
#include <stdlib.h> /* malloc, free, exit */
#include <stdio.h> /* printf */
#include <math.h> /* sqrt */
typedef struct ponto {
float x;
float y;
} Ponto;
//A fun��o que cria um ponto dinamicamente deve alocar a estrutura que representa o
//ponto e inicializar os seus campos:
Ponto* cria (float x, float y) {
Ponto* p = (Ponto*) malloc(sizeof(Ponto));
if (p == NULL) {
printf("Mem�ria insuficiente!\n");
exit(1);}
p->x = x;
p->y = y;
return p;
}
//a fun��o que libera um ponto deve apenas liberar a estrutura que foi
//criada dinamicamente atrav�s da fun��o cria:
void libera (Ponto* p) {
free(p);
}

//As fun��es para acessar e atribuir valores �s coordenadas de um ponto s�o de f�cil
//implementa��o, como pode ser visto a seguir.
void acessa (Ponto* p, float* x, float* y) {
*x = p->x;
*y = p->y;
}

void atribui (Ponto* p, float x, float y) {
p->x = x;
p->y = y;
}

//J� a opera��o para calcular a dist�ncia entre dois pontos pode ser implementada 
//da seguinte forma:
float distancia (Ponto* p1, Ponto* p2) {
float dx = p2->x - p1->x;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
float dy = p2->y - p1->y;
return sqrt(dx*dx + dy*dy);
}




