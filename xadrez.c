#include <stdio.h>

// Constantes para as direções
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
#define DIAGONAL_SUPERIOR_DIREITA "Diagonal superior direita\n"
#define DIAGONAL_INFERIOR_ESQUERDA "Diagonal inferior esquerda\n"

// Função para mover o Bispo
void moverBispo(int casas) {
    printf("Movendo o Bispo %d casas na diagonal superior direita...\n", casas);
    for (int i = 0; i < casas; i++) {
        printf(DIAGONAL_SUPERIOR_DIREITA);
    }
}

// Função para mover a Torre
void moverTorre(int casas) {
    printf("Movendo a Torre %d casas para a direita...\n", casas);
    for (int i = 0; i < casas; i++) {
        printf(DIREITA);
    }
}

// Função para mover a Rainha
void moverRainha(int casas) {
    printf("Movendo a Rainha %d casas para a esquerda...\n", casas);
    for (int i = 0; i < casas; i++) {
        printf(ESQUERDA);
    }
}

int main() {
    // Definir os valores para as peças
    int bispoCasas = 5;
    int torreCasas = 5;
    int rainhaCasas = 8;

    // Mover as peças
    moverBispo(bispoCasas);
    moverTorre(torreCasas);
    moverRainha(rainhaCasas);

    return 0;
}

