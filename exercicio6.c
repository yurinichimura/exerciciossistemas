#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int matrizTransposta[colunas][linhas];

    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

# exerciciossistemas
