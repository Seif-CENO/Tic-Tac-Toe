#include "board.h"

void drawBoard(char board[3][3]) {
    std::cout << "Current Board:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << " " << board[i][j] << " ";
            if (j < 2) std::cout << "|";
        }
        std::cout << "\n";
        if (i < 2) std::cout << "---|---|---\n";
    }
}

bool placeMarker(char board[3][3], int row, int col, char marker) {
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') 
           ? (board[row][col] = marker, true) 
           : false;
}

bool checkForWin(char board[3][3], char marker) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == marker && board[i][1] == marker && board[i][2] == marker) || 
            (board[0][i] == marker && board[1][i] == marker && board[2][i] == marker)) {
            return true;
        }
    }
    if ((board[0][0] == marker && board[1][1] == marker && board[2][2] == marker) || 
        (board[0][2] == marker && board[1][1] == marker && board[2][0] == marker)) {
        return true;
    }
    return false;
}

bool checkForTie(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}