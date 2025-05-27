#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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

// Número de casas que cada peça irá se mover
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Movimento da Torre (usando for)
    // A Torre move-se horizontalmente para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // Movimento do Bispo (usando while)
    // O Bispo move-se na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    int casasMovidas = 1;
    while (casasMovidas <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", casasMovidas);
        casasMovidas++;
    }
    printf("\n");

    // Movimento da Rainha (usando do-while)
    // A Rainha move-se para a esquerda
    printf("Movimento da Rainha:\n");
    int casasRestantes = casasRainha;
    do {
        printf("Casa %d: Esquerda\n", casasRainha - casasRestantes + 1);
        casasRestantes--;
    } while (casasRestantes > 0);
    printf("\n");


    return 0;
}
