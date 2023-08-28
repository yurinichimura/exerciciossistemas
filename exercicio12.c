#include <stdio.h>
#include <string.h>

int encontrarCaractere(const char *string, char caracter) {
    int comprimento = strlen(string);
    for (int i = 0; i < comprimento; i++) {
        if (string[i] == caracter) {
            return i;
        }
    }
    return -1;  // Retorna -1 se o caractere não for encontrado
}

int main() {
    const char *minhaString = "Hello, world!";
    char meuCaracter = 'o';

    int posicao = encontrarCaractere(minhaString, meuCaracter);

    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", meuCaracter, posicao);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", meuCaracter);
    }

    return 0;
}

# exerciciossistemas
