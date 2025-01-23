#include "game.h"

int main(void)
{
    std::cout << "Welcome to Tic Tac Toe! (Made by Seif Allah)\n";
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char current_player = 'X';
    bool isGameRunning = true;

    // Drawing the initial board
    drawBoard(board);

    while (isGameRunning) {
        int row, col;
        std::cout << "Player " << current_player << ", your move! (enter in row & col): ";
        std::cin >> row >> col;

        if(placeMarker(board, row, col, current_player)) {
            drawBoard(board); // Redraw board after a valid move

            // Check if the current player wins or the game is a tie
            if (checkForWin(board, current_player)) {
                std::cout << "Player " << current_player << " wins! Congrats to player " << current_player << "!!\nGame Closing...\n";
                isGameRunning = false;

            } else if (checkForTie(board)) {
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