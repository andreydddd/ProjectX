#include "game.h"

#include <cstdlib>
#include <ctime>

Move getComputerMove() {
  int randomMove = std::rand() % 3;

  if (randomMove == 0) {
    return Move::Rock;
  }

  if (randomMove == 1) {
    return Move::Paper;
  }

  return Move::Scissors;
}

std::string getResult(Move player, Move computer) {
  if (player == computer) {
    return "Draw!";
  }

  if ((player == Move::Rock && computer == Move::Scissors) ||
      (player == Move::Paper && computer == Move::Rock) ||
      (player == Move::Scissors && computer == Move::Paper)) {
    return "You win!";
  }

  return "Computer wins!";
}