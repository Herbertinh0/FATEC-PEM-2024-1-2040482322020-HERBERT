#include <stdio.h>
#include "tabuleiro.h"
#include "jogada.h"

int main() {
    char tabuleiro[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    // Jogada 1
    printf("\nJogada #1:\n");
    realizar_jogada(tabuleiro, 7, 4, 5, 4, 'P');  // Brancas: Peão do Rei (e2) => e4
    realizar_jogada(tabuleiro, 1, 4, 3, 4, 'p');  // Pretas: Peão do Rei (e7) => e5

    // Jogada 2
    printf("\nJogada #2:\n");
    realizar_jogada(tabuleiro, 7, 6, 5, 5, 'N');  // Brancas: Cavalo do Rei (g1) => f3
    realizar_jogada(tabuleiro, 0, 1, 2, 2, 'n');  // Pretas: Cavalo da Dama (b8) => c6

    // Jogada 3
    printf("\nJogada #3:\n");
    realizar_jogada(tabuleiro, 7, 3, 3, 7, 'Q');  // Brancas: Dama (d1) => h5
    realizar_jogada(tabuleiro, 1, 6, 2, 6, 'p');  // Pretas: Peão (g7) => g6

    // Jogada 4 - Xeque Mate
    printf("\nJogada #4: Xeque Mate\n");
    realizar_jogada(tabuleiro, 3, 7, 1, 7, 'Q');  // Brancas: Dama (h5) => f7 Xeque Mate

    return 0;
}
