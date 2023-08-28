#include <stdio.h>

void multiplicarLinha(int matriz[][3], int linha, int multiplicador) {
    for (int j = 0; j < 3; j++) {
        matriz[linha][j] *= multiplicador;
    }
}

void multiplicarColuna(int matriz[][3], int coluna, int multiplicador) {
    for (int i = 0; i < 3; i++) {
        matriz[i][coluna] *= multiplicador;
    }
}

int main() {
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    multiplicarLinha(matriz, 1, 2);
    multiplicarColuna(matriz, 2, 3);

    printf("Matriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

# exerciciossistemas
