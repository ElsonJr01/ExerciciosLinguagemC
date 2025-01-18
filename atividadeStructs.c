#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int dia, mes, ano;
}DataNas;

typedef struct {
	DataNas dataNas;
	int idade;
	char sexo;
	char nome[100];
}Pessoa;

void imprime(Pessoa p){
		printf("\tNome: %s\n", p.nome);
		printf("\tIdade: %d\n", p.idade);
		printf("\tSexo: %c\n", p.sexo);
		printf("\tData de Nasc: %2d/%2d/%4d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);		
}

Pessoa lerpessoa(){
	Pessoa p;
	printf("\nDigite o nome do usuario: ");
	fgets(p.nome, 100, stdin);
	printf("\nDigite a idade: ");
	scanf("%d", &p.idade);
	scanf("%c");
	printf("\nDigite M para Masculino e F para Feminino: ");
	scanf("%c", &p.sexo);
	printf("\nDigite dia, mes e ano nesse formato: dd mm aaaa: ");
	scanf("%2d %2d %4d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
	scanf("%c");
	return p;
}

int main(){
	
	int i, j;
	Pessoa pessoas[2][2];
	printf("%d\n", sizeof(Pessoa));
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
		pessoas[i][j] = lerpessoa();
		}
		printf("\n");
	}
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
		imprime(pessoas[i][j]);
 		}
 		printf("\n");
 	}
	return 0;
}
