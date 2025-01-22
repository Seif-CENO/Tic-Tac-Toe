#include <iostream>
#include <vector>

void drawBoard(void);
bool placeMarker(int row, int col, char mark);
void switchPlayer(void);
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

bool placeMarker(int row, int col, char mark) {
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ' ? true : false;
}

void switchPlayer(void) {
    
}

bool checkForWin(void) {
    
}

bool checkForTie(void) {
    
}