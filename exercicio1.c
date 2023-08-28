#include <stdio.h>

int main() {
    int n;
    
   
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
   
    for (int i = 0; i < n; i++) {
        printf("Digite os valores da linha %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int menorNumero = matriz[0][0];
    int linhaMenorNumero = 0;
    
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < menorNumero) {
                menorNumero = matriz[i][j];
                linhaMenorNumero = i;
            }
        }
    }
    
       printf("A linha com o menor número é a linha %d\n", linhaMenorNumero + 1);
    
    return 0;
}

# exerciciossistemas
