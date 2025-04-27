#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_TABULEIRO 8

// Definir tipos de peças
typedef enum { VAZIO, PEÃO, TORRE, CAVALO, BISPO, RAINHA, REI } TipoPeca;

// Definir cores das peças
typedef enum { BRANCO, PRETO } Cor;

// Estrutura para uma peça de xadrez
typedef struct {
    TipoPeca tipo;
    Cor cor;
} Peca;

// Função para inicializar o tabuleiro
void inicializarTabuleiro(Peca tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Inicializa com peças brancas na parte superior e pretas na parte inferior
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j].tipo = VAZIO;
        }
    }

    // Peças brancas na primeira linha
    tabuleiro[0][0] = (Peca){TORRE, BRANCO};
    tabuleiro[0][1] = (Peca){CAVALO, BRANCO};
    tabuleiro[0][2] = (Peca){BISPO, BRANCO};
    tabuleiro[0][3] = (Peca){RAINHA, BRANCO};
    tabuleiro[0][4] = (Peca){REI, BRANCO};
    tabuleiro[0][5] = (Peca){BISPO, BRANCO};
    tabuleiro[0][6] = (Peca){CAVALO, BRANCO};
    tabuleiro[0][7] = (Peca
