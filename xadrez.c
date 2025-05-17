#include <stdio.h>

int main() {
    // Movimento da TORRE - 5 casas para a direita 
    int i;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita 
    int j = 0;
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda 
    int k = 0;
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
