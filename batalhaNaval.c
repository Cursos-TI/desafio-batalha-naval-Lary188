#include <stdio.h>

// Desafio Batalha Naval - MateCheck
int main() {
    // Nível Novato - Posicionamento dos Navios
   #define LINHAS 10
   #define COLUNAS 10
   #define NAVIO 3
    int tabuleiro[LINHAS][COLUNAS];

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    int naviohoriz[NAVIO] = {3, 3, 3};
    int naviovert[NAVIO] = {3, 3, 3};

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0; // 0 para posição vazia(água)
        }
    }

    int linhahoriz = 2;
    int colunahoriz = 4;
    int linhavert = 5;
    int colunavert = 1;

    if (colunahoriz + NAVIO <= COLUNAS) {
    int podeposicionar = 1;

    for (int i = 0; i < NAVIO; i++) {
        if (tabuleiro[linhahoriz][colunahoriz + i] != 0) {
            podeposicionar = 0;
            break;
        }
    }

        if (podeposicionar) {
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linhahoriz][colunahoriz + i] = naviohoriz[i]; // 1 para posição ocupada(navio)
            }
        } else {
            printf("Não é possível posicionar o navio sobre outro Navio.\n");
            }
        } else {
            printf("Não é possível posicionar o navio fora do tabuleiro.\n");
        }

    if (linhavert + NAVIO <= LINHAS) {
    int podeposicionar = 1; 

    for (int i = 0; i < NAVIO; i++) {
        if (tabuleiro[linhavert][colunavert + i] != 0) {
            podeposicionar = 0;
            break;
        }
    }

        if (podeposicionar) {
            for (int i = 0; i < NAVIO; i++) {
                tabuleiro[linhavert][colunavert + i] = naviovert[i]; // 1 para posição ocupada(navio)
            }
        } else {
            printf("Não é possível posicionar o navio sobre outro Navio.\n");
            }
        } else {
            printf("Não é possível posicionar o navio fora do tabuleiro.\n");
        }

        for (int i = 0; i < LINHAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

        return 0;
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

     
