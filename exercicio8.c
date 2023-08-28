#include <stdio.h>

void matrizTransposta(int matriz[][3], int linhas, int colunas, int resultado[][3]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int matrizOriginal[3][3] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};

    int matrizTranspostaResultante[3][3];

    matrizTransposta(matrizOriginal, 3, 3, matrizTranspostaResultante);

    printf("Matriz transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizTranspostaResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}

# exerciciossistemas
