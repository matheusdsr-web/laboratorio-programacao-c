#include <stdio.h>

int main(void) {
    int m[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
