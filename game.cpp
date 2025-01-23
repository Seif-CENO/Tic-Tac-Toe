#include "game.h"

void drawBoard(char board[3][3]) {
    std::cout << "Current board:\n";

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << " " << board[i][j] << " ";
            if (j < 2) std::cout << "|";
        }
        std::cout << "\n";
        if (i < 2) std::cout << "---|---|---\n";
    }
}

bool placeMarker(char board[3][3], int row, int col, char mark) {
    return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ' ? (board[row][col] = mark, true) : false; // Updated the board if the move is valid
}

void switchPlayer(char &current_player) {
    current_player = current_player == 'X' ? 'O' : 'X';
}