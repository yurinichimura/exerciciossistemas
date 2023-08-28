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

    int linhaMultiplicar, colunaMultiplicar;
    int multiplicadorLinha, multiplicadorColuna;

    printf("Digite o número que deseja multiplicar a linha: ");
    scanf("%d", &multiplicadorLinha);

    printf("Digite o número que deseja multiplicar a coluna: ");
    scanf("%d", &multiplicadorColuna);

    printf("Digite o número da linha que deseja multiplicar: ");
    scanf("%d", &linhaMultiplicar);

    printf("Digite o número da coluna que deseja multiplicar: ");
    scanf("%d", &colunaMultiplicar);

  
    for (int j = 0; j < colunas; j++) {
        matriz[linhaMultiplicar][j] *= multiplicadorLinha;
    }

   
    for (int i = 0; i < linhas; i++) {
        matriz[i][colunaMultiplicar] *= multiplicadorColuna;
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

# exerciciossistemas
