#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char nome[100];
    char cidade[100];
    char resultado[200];
    
    printf("\nDigite seu nome: ");
    fgets(nome, 100, stdin);
    printf("Nome: %s", nome); 

    printf("\nDigite sua cidade: "); 
    fgets(cidade, 100, stdin);
    printf("Cidade: %s", cidade);


    int tamNome = strlen(nome);
    int tamCidade = strlen(cidade);
    printf("\n");

    printf("Diferenca no numero de caracteres entre nome e cidade: %d\n", tamNome - tamCidade);

    if (strcmp(nome, cidade) > 0) {
        printf("O vetor NOME e maior que o vetor CIDADE.\n");
    } else if (strcmp(nome, cidade) < 0) {
        printf("O vetor CIDADE e maior que o vetor NOME.\n");
    } else {
        printf("Os vetores NOME e CIDADE são iguais.\n");
    }

    printf("\n"); 
    
    strcpy(resultado, cidade);
    strcat(resultado, nome); 
    
    printf("CIDADE + NOME: %s",resultado);

    nome[100] = strupr(nome); 
    printf("Nome em maiúsculas: %s", nome);

    return 0;
}
