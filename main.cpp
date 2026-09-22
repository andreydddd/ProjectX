#include <cstdlib>
#include <ctime>
#include <iostream>


#include "game.h"
#include "player.h"

int main() {
  std::srand(std::time(nullptr));

  int playerScore = 0;
  int computerScore = 0;

  std::cout << "=== Rock Paper Scissors ===\n";

  while (true) {
    Move player = getPlayerMove();
    Move computer = getComputerMove();

    std::cout << "You chose: ";
    printMove(player);

    std::cout << "\nComputer chose: ";
    printMove(computer);

    std::cout << "\n";

    std::string result = getResult(player, computer);

    std::cout << result << "\n";

    if (result == "You win!") {
      playerScore++;
    } else if (result == "Computer wins!") {
      computerScore++;
    }

    printScore(playerScore, computerScore);

    char answer;

    std::cout << "Play again? (y/n): ";
    std::cin >> answer;

    if (answer != 'y') {
      break;
    }

    std::cout << "\n";
  }

  std::cout << "Game over!\n";

  return 0;
}