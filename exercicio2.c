#include <stdio.h>

int main() {
    float n1, n2, n3, me;
    float ma;
    char conceito;

    printf("Digite as três notas do aluno (separadas por espaço): ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("Digite a média dos exercícios: ");
    scanf("%f", &me);
    
    ma = (n1 + n2 * 2 + n3 * 3 + me) / 7;
    
    if (ma >= 9) {
        conceito = 'A';
    } else if (ma >= 7.5) {
        conceito = 'B';
    } else if (ma >= 6) {
        conceito = 'C';
    } else if (ma >= 4) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }
    
    
    printf("Média de Aproveitamento: %.2f\n", ma);
    printf("Conceito: %c\n", conceito);
    
    return 0;
}

