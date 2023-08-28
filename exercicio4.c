#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    int result = strcmp(nome1, nome2);

    if (result < 0) {
        printf("%s\n%s\n", nome1, nome2);
    } else if (result > 0) {
        printf("%s\n%s\n", nome2, nome1);
    } else {
        printf("Os nomes são iguais: %s\n", nome1);
    }

    return 0;
}

# exerciciossistemas
