#include <stdio.h>

void somarLinhas(int matriz[][3], int colunas, int linha1, int linha2) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha2][j] = matriz[linha1][j] + matriz[linha2][j];
    }
}

void multiplicarLinhas(int matriz[][3], int colunas, int linha1, int linha2) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha2][j] = matriz[linha1][j] * matriz[linha2][j];
    }
}

int main() {
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    somarLinhas(matriz, 3, 0, 1);
    multiplicarLinhas(matriz, 3, 1, 2);

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
