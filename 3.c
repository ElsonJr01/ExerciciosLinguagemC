#include <stdio.h>

int main() {
    // Definindo o vetor de tamanho 3
    int vetor[3];
    int i =0;

    // Solicita os valores ao usu�rio e os armazena no vetor
    for (i = 0; i < 3; i++) {
        printf("Digite o valor %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibe os valores inseridos no vetor
    printf("\nOs valores inseridos no vetor s�o:\n");
    for (i = 0; i < 3; i++) {
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
}

