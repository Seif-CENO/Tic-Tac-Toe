#include <iostream>
#include <vector>

void drawBoard(void);
bool placeMarker(char board[3][3], int row, int col, char mark);
void switchPlayer(char &current_player);
bool checkForWin(char board[3][3], char marker);
bool checkForTie(void);

int main(void)
{
    drawBoard();
    return 0;
}

void drawBoard(void) {
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
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

bool checkForTie(void) {
    
}