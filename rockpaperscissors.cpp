/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/
#include <iostream>
#include <stdlib.h>

int main() {
  
  // Live long and prosper
  srand (time(NULL));
  
int computer = rand() % 3 + 1;

int user = 0;
std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) \n";
std::cout << "2) \n";
std::cout << "3) \n";

std::cout << "shoot! ";
std::cin >> user;
if (user == 1)
    std::cout << "you choose: rock \n";
  else if (user == 2)
    std::cout << "you choose: paper \n";
  else
    std::cout << "you choose:scissors \n";

  if (computer == 1)
    std::cout << "cpu choose: rock \n";
  else if (computer == 2)
    std::cout << "cpu choose: paper \n";
  else
    std::cout << "cpu choose: scissors\n";


  if (user == computer) {

    std::cout << "it's a tie!\n";

  }

  // user rock

  else if (user == 1) {

    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }
    if (computer == 3) {

      std::cout << "you won! woohoo!\n";

    }

  }

  // user paper

  else if (user == 2) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 3) {

      std::cout << "you lost! boo!\n";

    }

  }

  // user scissors

  else if (user == 3) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }

  }

  return 0;

}
