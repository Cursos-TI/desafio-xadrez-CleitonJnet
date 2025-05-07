#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para simular o movimento da Torre (horizontal para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para simular o movimento da Rainha (horizontal para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva combinada com loops aninhados para o movimento do Bispo (diagonal para cima-direita)
void moverBispo(int linhas, int colunas) {
    if (linhas <= 0 || colunas <= 0) return;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(linhas - 1, colunas - 1); // Chamada recursiva com menor alcance para evitar stack overflow
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int linhasBispo = 3;
    const int colunasBispo = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimento do Bispo (recursivo com loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(linhasBispo, colunasBispo);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Movimento do Cavalo (duas casas para cima, uma para a direita)
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Movimento do Cavalo (duas casas para cima, uma para a direita)
    // Usando loops aninhados com múltiplas variáveis, continue e break
    printf("Movimento do Cavalo:\n");

    const int casasCima = 2;
    const int casasDireita = 1;

    for (int i = 0; i < casasCima; i++) {
        // Movimento vertical do cavalo
        printf("Cima\n");

        // Se ainda não foi o último movimento para cima, continue sem ir para a direita
        if (i < casasCima - 1) {
            continue;
        }

        // Após os dois movimentos para cima, faz o movimento para a direita
        int j = 0;
        while (j < casasDireita) {
            printf("Direita\n");
            break; // Encerra o loop após uma movimentação
        }
    }

    return 0;
}
