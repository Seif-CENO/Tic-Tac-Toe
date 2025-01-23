#ifndef GAME_H
#define GAME_H

#include <iostream>

void drawBoard(char board[3][3]);
bool placeMarker(char board[3][3], int row, int col, char marker);
void switchPlayer(char &current_player);
bool checkForWin(char board[3][3], char mark);
bool checkForTie(char board[3][3]);

#endif // for GAME_H