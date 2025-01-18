#include <stdio.h>
#include <string.h>

void entraNomes(char vet[5][20]);

void main(void) {
    int i;
    char nome[5][20]; 

    entraNomes(nome);

    printf("\nImprime os nomes no vetor de nomes:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", nome[i]);
    }
}

void entraNomes(char vet[5][20]) {
    int i;
    printf("Entra com os nomes:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEntre com o nome %d: ", i + 1);
        fgets(vet[i], 20, stdin);
        vet[i][strcspn(vet[i], "\n")] = '\0'; 
    }
}

