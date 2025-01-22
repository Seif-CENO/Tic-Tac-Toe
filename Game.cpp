#include <iostream>
#include <vector>

void drawBoard(void);
bool placeMarker(char board[3][3], int row, int col, char mark);
void switchPlayer(char &current_player);
bool checkForWin(void);
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

bool checkForWin(void) {
    
}

bool checkForTie(void) {
    
}