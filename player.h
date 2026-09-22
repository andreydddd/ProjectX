#ifndef PLAYER_H
#define PLAYER_H

#include "game.h"

Move getPlayerMove();

void printMove(Move move);

void printScore(int playerScore, int computerScore);

#endif