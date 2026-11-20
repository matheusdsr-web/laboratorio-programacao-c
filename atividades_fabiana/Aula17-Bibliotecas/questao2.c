#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50], categoria[20];
    char copia[50], descricao[100];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");
    printf("Nome do produto: ");
    scanf("%49s", produto);
    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", produto);
    printf("Caracteres: %zu\n", strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: Invalida\n");
    }

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");
    return 0;
}
