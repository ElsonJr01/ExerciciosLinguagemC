
#include <stdio.h>
void tabuada(void); // prot�tipo da fun��o tabuada
void main(void) {
//Chama a fun��o tabuada
tabuada();
}

//Declara��o da fun��o tabuada
void tabuada(void) {
int n, c, r;
printf("\n Digite um numero entre 1 e 10: ");
scanf("%d", &n);
for(c=1; c<=10; c++) {
r = n*c;
printf("\n %d x %2d = %3d",n, c, r);
}
}


