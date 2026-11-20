#include <stdio.h>

int main(void) {
    int m[3][3];
    int pares = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            if (m[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de valores pares: %d\n", pares);
    return 0;
}
