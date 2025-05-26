#include <stdio.h>
#include <string.h>
#include <ctype.h>

char substituir_caractere(char ch, int modo) {
    if (isupper(ch)) {
        if (modo == 1)
            return 'A' + (ch - 'A' + 19) % 26;
        else
            return 'A' + (ch - 'A' + 7) % 26;
    } else if (islower(ch)) {
        if (modo == 1)
            return 'a' + (ch - 'a' + 19) % 26;
        else
            return 'a' + (ch - 'a' + 7) % 26;
    }
    return ch;
}

void criptografar(char *mensagem) {
    for (int i = 0; i < strlen(mensagem); i++) {
        mensagem[i] = substituir_caractere(mensagem[i], 1);
    }
}

void descriptografar(char *mensagem) {
    for (int i = 0; i < strlen(mensagem); i++) {
        mensagem[i] = substituir_caractere(mensagem[i], 0);
    }
}

int main() {
    char mensagem[1000];
    int opcao;

    printf("===== Cifra de Substituição =====\n");
    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("\nEscolha uma opção:\n");
    printf("1 - Criptografar\n");
    printf("2 - Descriptografar\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1) {
        criptografar(mensagem);
        printf("\nMensagem criptografada: %s\n", mensagem);
    } else if (opcao == 2) {
        descriptografar(mensagem);
        printf("\nMensagem descriptografada: %s\n", mensagem);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
