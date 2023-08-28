#include <stdio.h>

int main() {
    int maxNumber;

    
    do {
        printf("Digite um número ímpar máximo: ");
        scanf("%d", &maxNumber);
    } while (maxNumber % 2 == 0);

   
    for (int i = 1; i <= maxNumber; i += 2) {
        for (int j = 1; j <= i / 2; j++) {
            printf("   ");
        }

        for (int j = i; j <= maxNumber; j++) {
            printf("%2d ", j);
        }

        printf("\n");
    }

    return 0;
}


# exerciciossistemas
