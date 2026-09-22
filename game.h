#ifndef GAME_H
#define GAME_H

#include <string>

enum class Move { Rock, Paper, Scissors };

Move getComputerMove();

std::string getResult(Move player, Move computer);

#endif