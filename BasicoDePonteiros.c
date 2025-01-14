#include <stdio.h>

void imprime(int *x, int s[10]){
		int i;
for(i=0; i<10; i++){
	printf("Endereco de Vet %d: %p\n",i, &s[i]);
	printf("Conteudo de Vet: %d\n", s[i]);
	printf("Conteudo de P: %d\n", *x);	
	printf("Endereco de P: %p\n", x);
	printf("\n");
	}
}


int main(){
	
	int vet[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int *p;
	
	p = vet;
	imprime(p, vet);
	return 0;
}
