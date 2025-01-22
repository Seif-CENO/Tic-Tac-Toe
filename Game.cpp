#include <iostream>
#include <vector>

void drawBoard(void);
bool placeMarker(int slot);
void switchPlayer(void);
bool checkForWin(void);
bool checkForTie(void);

int main(void)
{

    return 0;
}

void drawBoard(void) {
    char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    std::cout << " 1 | 2 | 3\n";

    for (int i = 0; i < 3; i++) {
        std::cout << i + 1 << " ";
        
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j];
        }
    }
}

bool placeMarker(int slot) {

}

void switchPlayer(void) {

}

bool checkForWin(void) {

}

bool checkForTie(void) {

}