#include <stdio.h>
#include "tabuleiro.h"
#include "jogada.h"

void realizar_jogada(char tabuleiro[8][8], int origem_linha, int origem_coluna, int destino_linha, int destino_coluna, char peca) {
    printf("Jogada: %c%d -> %c%d\n", origem_coluna + 'a', 8 - origem_linha, destino_coluna + 'a', 8 - destino_linha);
    tabuleiro[destino_linha][destino_coluna] = peca;
    tabuleiro[origem_linha][origem_coluna] = '.';
    imprimir_tabuleiro(tabuleiro);
}
