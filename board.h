#ifndef BOARD_H
#define BOARD_H

#include <iostream>

// Functions related to the game board
void drawBoard(char board[3][3]);
bool placeMarker(char board[3][3], int row, int col, char marker);
bool checkForWin(char board[3][3], char marker);
bool checkForTie(char board[3][3]);

#endif // BOARD_H