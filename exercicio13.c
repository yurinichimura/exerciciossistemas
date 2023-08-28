#include <stdio.h>
#include <string.h>

void removerCaractere(char str[], int posicao) {
    int comprimento = strlen(str);
    
    if (posicao >= 0 && posicao < comprimento) {
        for (int i = posicao; i < comprimento - 1; i++) {
            str[i] = str[i + 1];
        }
        str[comprimento - 1] = '\0'; 
    }
}

int main() {
    char minhaString[100] = "Hello, world!";
    int posicaoRemover = 4;

    removerCaractere(minhaString, posicaoRemover);

    printf("String após a remoção: %s\n", minhaString);

    return 0;
}

# exerciciossistemas
