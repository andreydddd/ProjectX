#include "player.h"

#include <iostream>
#include <string>

Move getPlayerMove() {
  std::string input;

  while (true) {
    std::cout << "Choose rock, paper or scissors: ";
    std::cin >> input;

    if (input == "rock") {
      return Move::Rock;
    }

    if (input == "paper") {
      return Move::Paper;
    }

    if (input == "scissors") {
      return Move::Scissors;
    }

    std::cout << "Invalid choice. Try again.\n";
  }
}

void printMove(Move move) {
  if (move == Move::Rock) {
    std::cout << "Rock";
  } else if (move == Move::Paper) {
    std::cout << "Paper";
  } else {
    std::cout << "Scissors";
  }
}

void printScore(int playerScore, int computerScore) {
  std::cout << "Score: " << playerScore << " - " << computerScore << '\n';
}