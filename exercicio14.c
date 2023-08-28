#include <stdio.h>
#include <string.h>

void inserirCaractere(char str[], char caractere, int posicao) {
    int comprimento = strlen(str);
    
    if (posicao >= 0 && posicao <= comprimento) {
        for (int i = comprimento; i >= posicao; i--) {
            str[i + 1] = str[i];
        }
        str[posicao] = caractere;
    }
}

int main() {
    char minhaString[100] = "Hello, world!";
    char caractereInserir = 'X';
    int posicaoInserir = 5;

    inserirCaractere(minhaString, caractereInserir, posicaoInserir);

    printf("String após a inserção: %s\n", minhaString);

    return 0;
}

# exerciciossistemas
