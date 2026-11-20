#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], codigo[10];
    char copia[50], mensagem[100];

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");
    printf("Nome do estudante: ");
    scanf("%49s", nome);
    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    strcpy(copia, nome);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nome);

    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: Codigo invalido\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));
    printf("\n%s\n", mensagem);
    return 0;
}
