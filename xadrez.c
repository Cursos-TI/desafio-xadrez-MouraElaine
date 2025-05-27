#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

// Número de casas que cada peça irá se mover
const int casasTorre = 5;
const int casasBispo = 5;
const int casasRainha = 8;

// ------------------ TORRE ------------------
void moverTorre(int passo, int limite) {
    if (passo > limite) return;
    printf("Casa %d: Direita\n", passo);
    moverTorre(passo + 1, limite);
}

// ------------------ BISPO ------------------
void moverBispo(int passo, int limite) {
    if (passo > limite) return;
    for (int v = 0; v < 1; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Casa %d: Cima, Direita\n", passo);
        }
    }
    moverBispo(passo + 1, limite);
}

// ------------------ RAINHA ------------------
void moverRainha(int passo, int limite) {
    if (passo > limite) return;
    printf("Casa %d: Esquerda\n", passo);
    moverRainha(passo + 1, limite);
}

// ------------------ CAVALO ------------------
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    const int maxVertical = 2;
    const int maxHorizontal = 1;

    for (int i = 0; i < maxVertical + 2; i++) {
        if (i >= maxVertical) break;
        printf("Cima\n");

        for (int j = 0; j < maxHorizontal + 2; j++) {
            if (j >= maxHorizontal) break;
            if (i == 1 && j == 0) continue;
            printf("Direita\n");
        }
    }
    printf("\n");
}

// ------------------ MAIN ------------------
int main() {
    printf("Movimento da Torre:\n");
    moverTorre(1, casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(1, casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(1, casasRainha);
    printf("\n");

    moverCavalo();

    return 0;
}
