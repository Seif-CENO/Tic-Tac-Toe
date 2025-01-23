#include <iostream>
#include <vector>

void drawBoard(char board[3][3]);
bool placeMarker(char board[3][3], int row, int col, char mark);
void switchPlayer(char &current_player);
bool checkForWin(char board[3][3], char marker);
bool checkForTie(char board[3][3]);

int main(void)
{
    std::cout << "Welcome to Tic Tac Toe! (Made by Seif Allah)\n";
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char current_player = 'X';
    bool isGameRunning = true;

    while (isGameRunning) {
        drawBoard(board);
        int row, col;

        std::cout << "Player " << current_player << ", your move! (enter in row & col): ";
        std::cin >> row >> col;

        if(placeMarker(board, row, col, current_player)) {
            if (checkForWin(board, current_player)) {
                drawBoard(board);
                std::cout << "Player " << current_player << " wins! Congrats to player " << current_player << "!!\nGame Closing...\n";
                isGameRunning = false;

            } else if (checkForTie(board)) {
                drawBoard(board);
                std::cout << "Ouch, a tie.\nGame Closing...\n";
                isGameRunning = false;

            } else {
                switchPlayer(current_player);
            }

        } else {
            std::cout << "Your move is invalid, please try again\nHint: Make sure the cell is empty and the row and column are between 0 and 2\n";
        }
    }

    return 0;
}

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
    return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ' ? true : false;
}

void switchPlayer(char &current_player) {
    current_player = current_player == 'X' ? 'O' : 'X';
}

bool checkForWin(char board[3][3], char marker) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == marker && board[i][1] == marker && board[i][2] == marker) || 
            (board[0][i] == marker && board[1][i] == marker && board[2][i] == marker)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == marker && board[1][1] == marker && board[2][2] == marker) || 
        (board[0][2] == marker && board[1][1] == marker && board[2][0] == marker)) {
        return true;
    }

    return false; // No win yet
}

bool checkForTie(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false; // Moves are still available
            }
        }
    }
    return true; // No moves left aka. it's tie
}